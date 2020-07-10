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


Result add3(vectors::vec3 a, vectors::vec3 b);

Result subtract3(vectors::vec3 a, vectors::vec3 b);

float mag3(vectors::vec3 a);

float dot3(vectors::vec3 a, vectors::vec3 b);

Result cross(vectors::vec3, vectors::vec3);

// todo: transform
//todo: translate
//todo: matrix.h
//todo: identity
