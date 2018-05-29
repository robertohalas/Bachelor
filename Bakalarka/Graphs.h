#include <boost/numeric/ublas/matrix.hpp>
#include <windows.h>

namespace ublas = boost::numeric::ublas;

class Graphs
{
private:
	ublas::matrix<float> _matrix;
	std::vector<float> _upper;
	std::vector<float> _under;
public:
	Graphs(ublas::matrix<float> /*matrix*/, std::vector<float> /*under*/, std::vector<float> /*upper*/);
	std::vector<std::wstring> exportGraph(int /*generation*/);
};

