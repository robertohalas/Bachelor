#include <boost/numeric/ublas/matrix.hpp>

namespace ublas = boost::numeric::ublas;

class Matrix {
private:
	ublas::matrix<float> _matrix;
	std::vector<float> _upper;
	std::vector<float> _under;
	std::vector<float> MinMatrix(std::vector<float> /*array*/);
	std::vector<float> InvariantUpperbound(int /* last_min */);
public:
	Matrix(ublas::matrix<float> /*matrix*/, std::vector<float> /*under*/, std::vector<float> /*upper*/);
	std::vector<float> ChangeUpper();
	std::vector<float> GetUpper();
	std::vector<float> CalcEigenVector(bool checked = false);
	std::vector<float> InvariantUnderbound();
};