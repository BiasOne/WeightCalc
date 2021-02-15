#include "calc.h"

#include <iostream>

using namespace std;

calc::calc()
{
	heightFT=5;
	heightIN=0;
	idealBodyWeight = 110;

}


calc::calc(int heightFT, int heightIN)
{
	this->heightFT = heightFT;
	this->heightIN = heightIN;

}

int calc::getHeightFT()
{
	cin >> heightFT;
	return heightFT;

}


int calc::getHeightIN()
{
	cin >> heightIN;
	return heightIN;

}


void calc::dispHeightFT() const
{
	cout << heightFT << endl;

}


void calc::dispHeightIN() const
{
	cout << heightIN << endl;

}

int calc::iBWCalculator()
{
	int tempHeight;

	tempHeight = ((heightFT - 5)*12) + heightIN;
	idealBodyWeight = idealBodyWeight + (tempHeight * 5);
	return idealBodyWeight;
	
}

void calc::dispIBW() const
{
	cout << "Your ideal bodyweight is: " << idealBodyWeight <<" Pounds" << endl;

}


