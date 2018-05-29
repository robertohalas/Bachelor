#include "Graphs.h"
#include <Shlwapi.h>
#include <iomanip>
#include <fstream>
#include <sstream>

std::vector<float> findMinMax(std::vector<float> array)
{
	int minimum = 2147483647;
	int maximum = 0;
	for (unsigned int j = 0; j < array.size(); j++)
	{
		if (array.at(j) < minimum) minimum = array.at(j);
		if (array.at(j) > maximum) maximum = array.at(j);
	}
	std::vector<float> toReturn;
	toReturn.push_back(minimum);
	toReturn.push_back(maximum);
	return toReturn;
}

Graphs::Graphs(ublas::matrix<float> matrix, std::vector<float> under, std::vector<float> upper)
{
	_under = under;
	_upper = upper;
	_matrix = matrix;

	std::vector<float> minmax_under = findMinMax(under);
	for (int h = minmax_under.at(0); h <= minmax_under.at(1); h++)
	{
		ublas::matrix<float> matrix_one = matrix;
		for (int i = 0; i < under.size(); i++)
		{
			if (minmax_under.at(0) >= under.at(i))
			{
				under[i] = 1;
			}
			else
				under[i] = 0;
		}

		for (int i = 0; i < matrix_one.size1(); i++)
		{
			for (int j = 0; j < matrix_one.size2(); j++)
			{
				if (minmax_under.at(0) >= matrix_one(i, j))
				{
					matrix_one(i, j) = 1;
				}
				else
					matrix_one(i, j) = 0;
			}
		}
	}
}

std::wstring createImage(int generation, int number, int figure, int type = 0) {
	std::wstring toRet;
	std::wstringstream ws;
	std::wstringstream ws2;
	ws << number << "_" << figure << "_" << type;
	toRet = ws.str();

	ws2 << L"-Tpng file.dot -o image" << generation << L"_" << toRet << L".png";
	std::wstring text = ws2.str();

	SHELLEXECUTEINFO ShExecInfo = { 0 };
	ShExecInfo.cbSize = sizeof(SHELLEXECUTEINFO);
	ShExecInfo.fMask = SEE_MASK_NOCLOSEPROCESS;
	ShExecInfo.hwnd = NULL;
	ShExecInfo.lpVerb = NULL;
	ShExecInfo.lpFile = L"graphviz\\dot.exe";
	ShExecInfo.lpParameters = text.c_str();
	ShExecInfo.lpDirectory = NULL;
	ShExecInfo.nShow = SW_HIDE;
	ShExecInfo.hInstApp = NULL;
	ShellExecuteEx(&ShExecInfo);
	WaitForSingleObject(ShExecInfo.hProcess, INFINITE);

	return toRet;
}

std::vector<std::wstring> processImage(int generation, ublas::matrix<float> matrix, std::vector<float> upper, int number, int figure) {
	std::ofstream f("file.dot");
	std::vector<float> ignore;
	std::vector<std::wstring> numberImage;
	bool write = false;

	f << "digraph G {" << std::endl;
	f << "bgcolor=transparent;" << std::endl;

	for (int i = 0; i < upper.size(); i++)
	{
		f << i + 1;
		if (upper.at(i) == 0) {
			f << " [color=red]";
			ignore.push_back(i);
			write = true;
		}
		else {
			f << " [color=green]";
		}
		f << " ;" << std::endl;
	}

	for (int i = 0; i < matrix.size1(); i++)
	{
		for (int j = 0; j < matrix.size2(); j++)
		{
			if (matrix(i, j) == 1) {
				if (upper.at(i) == 0) {
					ignore.push_back(j);
				}
				f << i + 1 << "->" << j + 1 << " ;" << std::endl;
			}
		}
	}

	f << "}" << std::endl;
	f.close();

	std::wstring string = createImage(generation, number, figure);
	numberImage.push_back(string);

	if (write) {
		f.open("file.dot");
		f << "digraph G {" << std::endl;
		f << "bgcolor=transparent;" << std::endl;

		for (int i = 0; i < upper.size(); i++)
		{
			if (std::find(ignore.begin(), ignore.end(), i) == ignore.end()) {
				f << i + 1 << " ;" << std::endl;
			}
		}

		for (int i = 0; i < matrix.size1(); i++)
		{
			if (std::find(ignore.begin(), ignore.end(), i) != ignore.end()) {
				continue;
			}
			for (int j = 0; j < matrix.size2(); j++)
			{
				if (std::find(ignore.begin(), ignore.end(), j) != ignore.end()) {
					continue;
				}
				if (matrix(i, j) == 1) {
					f << i + 1 << "->" << j + 1 << " ;" << std::endl;
				}
			}
		}

		f << "}" << std::endl;
		f.close();

		string = createImage(generation, number, figure, 1);
		numberImage.push_back(string);
	}
	return numberImage;
}

std::vector<std::wstring> Graphs::exportGraph(int generation)
{
	WIN32_FIND_DATAW fd;
	HANDLE hFind = FindFirstFileW(L"./image*.png", &fd);
	if (hFind != INVALID_HANDLE_VALUE)
	{
		do
		{
			DeleteFileW((std::wstring(L"./") + fd.cFileName).c_str());
		} while (FindNextFileW(hFind, &fd));
		FindClose(hFind);
	}

	std::vector<std::wstring> toRet;
	for (int k = 0; k < _under.size(); k++) {
		for (int h = _under.at(k); h <= _upper.at(k); h++) {
			ublas::matrix<float> matrix = _matrix;
			for (int i = 0; i < matrix.size1(); i++)
			{
				for (int j = 0; j < matrix.size2(); j++)
				{
					if (matrix(i, j) >= h) {
						matrix(i, j) = 1;
					}
					else {
						matrix(i, j) = 0;
					}
				}
			}

			std::vector<float> upper = _upper;

			for (int i = 0; i < upper.size(); i++)
			{
				if (upper.at(i) >= h) {
					upper[i] = 1;
				}
				else {
					upper[i] = 0;
				}
			}

			std::vector<std::wstring> processed = processImage(generation, matrix, upper, k + 1, h);
			toRet.insert(std::end(toRet), std::begin(processed), std::end(processed));
		}
	}
	
	return toRet;
}
