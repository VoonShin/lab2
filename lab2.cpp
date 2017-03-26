#include "lab2.h"
#include <cmath>
using namespace std;

double Game::Expected_scoreA(int r_A,int r_B)
{
	double E_a = 1/ (1+ pow(10, ((double)r_B-r_A)/400));
	return E_a;
}

double Game::Expected_scoreB(int r_A, int r_B)
{
	double E_b = 1/ (1+ pow(10, ((double)r_A-r_B)/400));
	return E_b;
}

int Game::RatingA(int r_A, int k, double as_a, double E_a)
{
	double rate_A = r_A + k * (as_a - E_a) + 0.5;
	return rate_A;
}

int Game::RatingB(int r_B, int k, double as_b, double E_b)
{
	double rate_B = r_B + k * (as_b - E_b)+ 0.5;
	return rate_B;
}

