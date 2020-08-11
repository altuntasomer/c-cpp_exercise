/*
	Created on: 11.08.2020
	@author: omeraltuntas
*/


#include<iostream>
#include<stdlib.h>//for system("cls")
#include<windows.h>//for Sleep()
using namespace std;

char ballCharacter = 'o';	//the symbol of ball	!changeable on this line
char feedCharacter = '*';	//the symbol of feeds 	!changeable on this line

const short matrix_x = 15; //the number of horizontal feeds !changeable on this line
const short matrix_y = 13;//the number of vertical feeds	!changeable on this line
 
char matrix[matrix_y][matrix_x];
short ballDirection[2] = {-1,1};
short ballPos[2] = {matrix_y -1, 1};
void printStars();
void move();

int main() {
	
	for(int j = 0; j < matrix_x; ++j)
	{
		matrix[0][j] = '_';
	}
	for(int i = 1; i< (matrix_y - 1); ++i)
	{
		matrix[i][0] = '|';
		for(int j=1; j < (matrix_x - 1); ++j)
		{
			matrix[i][j] = feedCharacter;
		}
		matrix[i][matrix_x - 1] = '|';
	}
	matrix[matrix_y - 1][0] = '|';
	for (int j = 1; j < matrix_x - 1; ++ j)
	{
		matrix[matrix_y - 1][j] = '_'; 
	}
	matrix[matrix_y - 1][matrix_x - 1] = '|';
	matrix[ballPos[0]][ballPos[1]] = ballCharacter; 
	
	while(true)
	{
		move();
		printStars();
		Sleep(50);
	}
	
	
	return 0;
}

void printStars()
{
	system("cls");
	for(int i = 0; i< matrix_y; ++i)
	{
		for(int j=0; j < matrix_x; ++j)
		{
			cout << matrix[i][j];
		}
		cout << endl;
	}
}
void move()
{	short temp [2] = {ballPos[0] + ballDirection[0], ballPos[1] + ballDirection[1]};
	matrix[ballPos[0]][ballPos[1]]= ' ';
	
	if('_' == matrix[temp[0]][temp[1]])
	{
		ballDirection[0] *= -1;
	}
	if('|' == matrix[temp[0]][temp[1]])
	{
		ballDirection[1] *= -1;
	}
	
	ballPos[0] += ballDirection[0];
	ballPos[1] += ballDirection[1];
	matrix[ballPos[0]][ballPos[1]]= '*';
}
