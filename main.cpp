#include <iostream>
#include <fstream>
#include "lab2.h"
using namespace std;

int main()
{
	int k, realA, realB;
	double as_a,as_b;
	string start;
	Game score_cal, rate_cal;
	ifstream inFile("file.in",ios::in);
	ofstream outFile("file.out", ios::out);
	inFile >> k >> realA >> realB;
	outFile << realA << "\t" << realB << "\t" << endl;
	while(inFile >> as_a)
	{
		if(as_a == 1) as_b = 0;
		else if(as_a == 0) as_b = 1;
		else if(as_a == 0.5) as_b = 0.5;
		double ex_a = score_cal.Expected_scoreA(realA,realB);
		double ex_b = score_cal.Expected_scoreB(realA,realB);
		int R_A = rate_cal.RatingA(realA, k, as_a, ex_a);
 		int R_B = rate_cal.RatingB(realB, k, as_b, ex_b);
 		realA = R_A;
  		realB = R_B;
  		outFile << R_A << "\t" << R_B << endl;
	}
	return 0;
}
