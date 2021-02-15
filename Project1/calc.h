#pragma once
class calc
{

private:
	int heightFT;
	int heightIN;
	int idealBodyWeight;

public: 
	
	calc();
	calc(int heightFT, int heightIN);
	int getHeightFT();
	int getHeightIN();
	void dispHeightFT() const;
	void dispHeightIN() const;
	int iBWCalculator();
	void dispIBW() const;



};

