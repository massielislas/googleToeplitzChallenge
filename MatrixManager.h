#pragma once
#include <fstream>
#include <sstream>
#include "MatrixIdentifier.h"
#include <iostream>

class MatrixManager {
private:
	std::string loadIntoMatrix(std::ifstream& inRead);
	Matrix matrix;
	MatrixIdentifier matrixIdentifier;
public:

	MatrixManager(std::ifstream& inRead);

};

