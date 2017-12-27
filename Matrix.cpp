#include "Matrix.h"

using namespace std;

string Matrix::toString() {
	stringstream ss;
	
	for (unsigned i = 0; i < this->size(); i++) {
		for (unsigned j = 0; j < this->at(i).size(); j++) {
			ss << this->at(i).at(j) << " ";
		}
		ss << endl;
	}

	return ss.str();
}

void Matrix::setN(int n) {
	this->n = n;
}

void Matrix::setM(int m) {
	this->m = m;
}

int Matrix::getM() {
	return m;
}

int Matrix::getN() {
	return n;
}