#include <stdio.h>
#include <stdlib.h>
#define rows 3
#define cols 3
/* run this program using the console pauser or add your own getch, system("pause") or input loop */


void addMatrix(int A[][cols], int B[][cols], int C[][cols])
{	
	int r,c;
	for(r=0;r<rows;r++)
		for(c=0;c<cols;c++)
			C[r][c]=A[r][c]+B[r][c];
}


void printMatrix(int C[][cols])
{
	int r,c;
	for(r=0;r<rows;r++)
{
		for(c=0;c<cols;c++)
			printf("%d ", C[r][c]);
			printf("\n");
  }	
}

int main(void)
{
	int A[rows][cols] = { 
 		{2, 3, 0},
 		{8, 9, 1},
 		{7, 0, 5} };
	int B[rows][cols] = { 
 		{1, 0, 0},
 		{0, 1, 0},
 		{0, 0, 1} };
	int C[rows][cols];

	addMatrix(A,B,C);
	printMatrix(C);
	
	return 0; 
}


