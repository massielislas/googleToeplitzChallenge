#include <fstream>
#include <sstream>
#include "Matrix.h"
#include <iostream>


class MatrixIdentifier {
private:
	
public:
	MatrixIdentifier();
	MatrixIdentifier(Matrix matrix);
	std::string determineToeplitz(Matrix matrix);
};