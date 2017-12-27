// ToeplitzMatrixIdentifier.cpp : Defines the entry point for the console application.
//

#include <cstdlib>
#include <string>
#include <iostream>
#include <fstream>
#include "MatrixManager.h"

using namespace std;

int main()
{
	string fileName;
	cin >> fileName;

	ifstream inRead;
	inRead.open(fileName);

	MatrixManager manager(inRead);
	system("pause");
	return 0;
}

