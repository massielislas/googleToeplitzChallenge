#include "MatrixIdentifier.h"


using namespace std;

string const SUCCESS = "MATRIX IS TOEPLITZ";
string const FAILURE = "MATRIX IS NOT TOEPLITZ";

MatrixIdentifier::MatrixIdentifier() {

}

MatrixIdentifier::MatrixIdentifier(Matrix matrix) {

	//(0,0)   (0,1)   (0,2)
	//(1,0)   (1,1)   (1,2)
	//(2,0)   (2,1)   (2,2)

}

string MatrixIdentifier::determineToeplitz(Matrix matrix) {
	if (matrix.getM() != matrix.getN())
		return FAILURE;

	//by this point we can assume that m = n, so our matrix is nxn
	else {
		//start at second to last column and first row

		//loops covers everything but the diagonals
		for (int comparingAt = matrix.getN() - 2; comparingAt > 0; comparingAt--) {
			int additionIndex = 1;
			int comparisonsToMake = 1;
			//int comparingAt = matrix.getN() - 2; //same as i, use i instead
			for (int j = 0; j < comparisonsToMake; j++) {
				if (matrix.at(0).at(comparingAt) != matrix.at(additionIndex).at(comparingAt + additionIndex))
					return FAILURE;
				if (matrix.at(comparingAt).at(0) != matrix.at(comparingAt + additionIndex).at(additionIndex))
					return FAILURE;
				additionIndex++;
			}
			comparisonsToMake++;
		}

		for (int i = 1; i <= matrix.getN() - 1; i++) {
			if (matrix.at(0).at(0) != matrix.at(i).at(i))
				return FAILURE;
		}

		return SUCCESS;
	}
}