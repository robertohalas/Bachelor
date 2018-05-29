#include "MatrixHandler.h"

Matrix::Matrix(ublas::matrix<float> matrix, std::vector<float> under, std::vector<float> upper) {
	_matrix = matrix;
	_under = under;
	_upper = upper;
}

float findMin(std::vector<float> array, int last_min)
{
	int minimum = 2147483647;
	for (unsigned int j = 0; j < array.size(); j++)
		if (array.at(j) < minimum && array.at(j) > last_min) minimum = array.at(j);
	return minimum;
}

std::vector<float> Matrix::MinMatrix(std::vector<float> array) {
	std::vector<float> setM;
	for (unsigned int i = 0; i < _matrix.size1(); i++) {
		unsigned int maximum = 0;
		for (unsigned int j = 0; j < _matrix.size2(); j++) {
			if (_matrix(i, j) <= array[j]) {
				if (maximum < _matrix(i, j)) {
					maximum = _matrix(i, j);
				}
			}
			else if (maximum < array[j]) {
				maximum = array[j];
			}
		}
		setM.push_back(maximum);
	}

	return setM;
}

std::vector<float> Matrix::InvariantUpperbound(int last_min) {
	std::vector<float> setM;
	//Krok 2
	//m:=
	float minM = findMin(_upper, last_min);
	//M = 
	for (unsigned int j = 0; j < _upper.size(); j++) {
		if (minM == _upper[j]) {
			setM.push_back(j);
		}
	}
	std::vector<int> savedK;
	std::vector<int> savedJ;
	//Krok 3
	for (unsigned int k = 0; k < setM.size(); k++) {
		for (unsigned int j = 0; j < _matrix.size2(); j++) {
			float min;
			if (_matrix(setM.at(k), j) > _upper.at(j)) {
				min = _upper.at(j);
			}
			else {
				min = _matrix(setM.at(k), j);
			}
			if (min > _upper.at(setM.at(k))) {
				savedK.push_back(setM.at(k));
				savedJ.push_back(j);
			}
		}
	}
	//Podmienka vo while
	if (savedK.size() != 0 && savedJ.size() != 0) {
		for (unsigned int k = 0; k < savedK.size(); k++)
		{
			if (_upper.at(savedK.at(k)) >= _under.at(savedJ.at(k))) {
				_upper[savedJ.at(k)] = minM;				
				return InvariantUpperbound(last_min);
			}
			else {
				return std::vector<float>();
			}
		}
	}
	//Krok 4
	setM.clear();
	for (unsigned int j = 0; j < _upper.size(); j++) {
		if (minM >= _upper.at(j)) {
			setM.push_back(j);
		}
	}
	//Krok 5
	if (setM.size() == _upper.size()) {
		return _upper;
	}
	else {
		return InvariantUpperbound(minM);
	}
}

std::vector<float> Matrix::ChangeUpper() {
	bool change = false;
	std::vector<float> setM = MinMatrix(_upper);
	for (unsigned int i = 0; i < setM.size(); i++) {
		if (setM[i] > _upper[i]) {
			change = true;
			break;
		}
	}
	if (change) {
		return InvariantUpperbound(-1);
	}
	return _upper;
}

std::vector<float> Matrix::GetUpper() {
	for (unsigned int i = 0; i < _matrix.size1(); i++) {
		unsigned int maximum = 0;
		for (unsigned int j = 0; j < _matrix.size2(); j++) {
			if (_matrix(i, j) > maximum) {
				maximum = _matrix(i, j);
			}
		}
		_upper[i] = maximum;
	}

	return _upper;
}

std::vector<float> Matrix::CalcEigenVector(bool checked) {
	std::vector<float> setM = _upper;
	for (unsigned int i = 0; i < _upper.size(); i++) {
		setM = MinMatrix(setM);
	}

	if (!checked) {
		for (unsigned int i = 0; i < setM.size(); i++) {
			if (setM[i] < _under[i]) {
				return std::vector<float>();
			}
		}
	}

	return setM;
}

std::vector<float> Matrix::InvariantUnderbound() {
	std::vector<float> setM = _under;
	for (unsigned int i = 0; i < _under.size(); i++) {
		setM = MinMatrix(setM);
	}
	return setM;
}
