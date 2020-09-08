#pragma once
#include <cmath>
#include "Math.h"

// this compiles, but the lack of temp variables means the output can be incorrect/is incorrect

std::ostream& operator<<(std::ostream& out, Result& presult)
{
out << presult.x <<" "<< presult.y<<" " << presult.z;


return out;
}

Result add4(vectors::vec4 a, vectors::vec4 b)
{

	Result result;

	result.x = a.x + b.x;
	result.y = a.y + b.y;
	result.z = a.z + b.z;
	result.r = a.z + b.z;

	return result;
}

Result add3(vectors::vec3 a, vectors::vec3 b)
{
	
	Result result;

	result.x = a.x + b.x;
	result.y = a.y + b.y;
	result.z = a.z + b.z;

	
	return result;
}
Result add2(vectors::vec2 a, vectors::vec2 b)
{

	Result result;

	result.x = a.x + b.x;
	result.y = a.y + b.y;
	


	return result;
}

Result subtract4(vectors::vec4 a, vectors::vec4 b)
{
	Result result;
	result.x = a.x - b.x;
	result.y = a.y - b.y;
	result.z = a.z - b.z;
	result.r = a.r + b.r;

	return result;
}
Result subtract3(vectors::vec3 a, vectors::vec3 b)
{
	Result result;
	result.x = a.x - b.x;
	result.y = a.y - b.y;
	result.z = a.z - b.z;


	return result;
}
Result subtract2(vectors::vec2 a, vectors::vec2 b)
{
	Result result;
	result.x = a.x - b.x;
	result.y = a.y - b.y;
	


	return result;
}

float mag3(vectors::vec3 a)
{
	float MAG = 0.0;
	MAG = sqrt(pow(a.x,2) + pow(a.y,2) + pow( a.z,2)); // ideally we want to pass a vector to this and operate on that, but idk how to do that so here we are
	return MAG;
}

float dot3(vectors::vec3 a, vectors::vec3 b) // ideally, wed like to just call the megnitude fuunction and use it in the scalar function, but of course they get defined at the same time so idk how id pull that one off(edit it works, dunno why tbh)
{
	float scalar = 0.0;
	scalar = mag3(a)* mag3(b);

	return scalar;
}

Result scalarMultiple(vectors::vec3 a, float scalar)
{
	Result result;

	result.x = a.x * scalar;
	result.y = a.y * scalar;
	result.z = a.z * scalar;

	return result;
}

Result cross(vectors::vec3 a, vectors::vec3 b)
{
	Result result;
	result.x = a.y * b.z - a.z * b.y;
	result.y = a.z * b.x - a.x * b.z;
	result.z = a.x * b.y - a.y * b.x;
	// one last thing: determining negatives. values are right, but im missing a step here somewhere
	// i missed that "a -b + c alternating"
	//i also missed that im probably going to need to create a temporary variable somewhere, because yeesh
	//honestly im going to need to turn this whole thing into a matrix operation because otherwise this is gonna be dogshite
	return result;
}

Result lerp(vectors::vec3 a, vectors::vec3 b, float norm)
{
	// (max - min) * norm = min
	// (80 - 20) *0.5 + 20
	// (b - a) * norm + a 
	Result result;
	
	result.x = (b.x - a.x) * norm + a.x;
	result.y = (b.y - a.y) * norm + a.y;
	result.z = (b.z - a.z) * norm + a.z;
	// actually do this properly plas
	
	return result;
	
}

Result rotateZ(vectors::vec3 a, float angle)
{
	Result result;
	result.x = (a.x * cos(angle)) - (a.y * sin(angle)); //duno if i should bracket these
	result.y = (a.x * sin(angle)) + (a.y * cos(angle));
	
	
	return result;
}

Result Normalize(vectors::vec3 a)
{

	Result result;
	result.x = a.x / mag3(a);
	result.y = a.y / mag3(a);
	result.z = a.z / mag3(a);



	return result;
}
