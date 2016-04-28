// DPLL.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "CNF_function_representation.h"

using namespace std;

int main(int argc, char* argv[])
{	
	CNF_function* CNF = NULL;
	
	if (argc != 2) {
		cout << "Usage: " << argv[0] << " <source BLIF file>" << endl;
		return 0;
	}
	cout << "DPLL SAT SOLVER START!" << endl;

	/*	READ function FROM BLIF FILE	*/
	cout << "READING FILE " << argv[1] << endl;
	CNF = new CNF_function(argv[1]);
	CNF_function temp = *CNF;

	if (CNF) {
		CNF->print();
		//CNF->DPLL_init();
	}

	return 0;
}

