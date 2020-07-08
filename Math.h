#pragma once
#include "Vec.h"
#include <iostream>


struct Result
{
	float x = 0.0;
	float y = 0.0;
	float z = 0.0;
	float r = 0.0;
	
	friend std::ostream& operator<<(std::ostream& out, Result& presult);

};

struct numstruct 
{
		float x;
		float y;
		float z;
		float r;

		float tempx;
		float tempy;
		float tempz;
		float tempr;
};


