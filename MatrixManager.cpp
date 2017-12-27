#include "MatrixManager.h"

using namespace std;

MatrixManager::MatrixManager(ifstream& inRead) {
	cout << loadIntoMatrix(inRead);
	//matrixIdentifier = temp;
	cout << matrixIdentifier.determineToeplitz(matrix);
}

string MatrixManager::loadIntoMatrix(ifstream& inRead) {
	stringstream ss;
	string currentCharacter;
	string file;
	int currentRow = 0;

	//reading the file into a string
	while (inRead.peek() != EOF) {
		file += inRead.get();
	}
	file += '\n';

	Row newRow;
	for (int i = 0; i < file.length(); i++) {

		if (!isspace(file[i])) {
			currentCharacter = file[i];
			newRow.push_back(currentCharacter);
		}

		else if (file[i] == '\n') {
			matrix.push_back(newRow);
			newRow.clear();
		}
	}

	matrix.setM(matrix.size());
	matrix.setN(matrix.at(0).size());
	return matrix.toString();
}