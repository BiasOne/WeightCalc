#include "calc.h"
#include <iostream>

using namespace std;

int heightFT;
int heightIN;
int idealBodyWeight;
int tempHeight;

int main() {	

	calc calcOBJ;

	cout << "This program will determine your ideal body weight!" << endl;

	cout << "How tall are you in feet?" << endl;
	//calls function to get user input for height in ft
	calcOBJ.getHeightFT();
	cout << "How tall are you in inches" << endl;
	//calls funtion to get user input for height in inches
	calcOBJ.getHeightIN();

	cout << endl;

	//calls the function that calculats ideal bodyweight
	calcOBJ.iBWCalculator();
	//calls the function that prints the ideal body weight
	calcOBJ.dispIBW();


};