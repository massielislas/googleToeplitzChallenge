#pragma once
#include "Row.h"
#include <vector>
#include <string>
#include <sstream>

class Matrix : public std::vector<Row>
{
private:
	int n;
	int m;
public:
	std::string toString();
	void setN(int n);
	void setM(int m);
	int getN();
	int getM();
};