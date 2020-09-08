#pragma once

//TODO: create a matrix data structure i can use, return, and pass around.
// the prize would be if i can make a bunch of different structures that each store pointers to different matrix operations, so that i can pass those as objects to these loops and the loop can loop through the operations
const int r = 3;
const int c = 3;

int matrix[r][c] = {};

int fillmatrix()
{
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			matrix[i][j] = 1;
		}

	}
	return 0;
}

int readmatrix()
{
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			std::cout << matrix[i][j];
		}
	}
	return 0;
	
}

