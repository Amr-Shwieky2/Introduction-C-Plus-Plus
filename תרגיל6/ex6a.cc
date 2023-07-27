/*  Ex6a: 
 *   =====================================
 *   Written by: amr shwieky, id = 212443485, login = amrsh
 *   
 *   The program contains a  matrix in 4 rows, 
 *    and the user is asked to enter values into each cell in the matrix.
 *    The program works to find the largest sum of a row and the largest sum of a column.
 */

//--------include section---------
#include <iostream>
#include <cstdlib> 

//--------using section---------
using std :: cout;
using std :: cin;
using std :: endl;

//--------constant section--------
const int ROWS = 4,
		COLS =5;

//------main section---------          
int main()
{
	int mtx[ROWS][COLS];
	int max= -1, max2= -1, sum, sum2, best_rows, best_cols;

	for(int i=0; i<ROWS; i++)
		for(int j=0; j<COLS; j++)
			cin>> mtx[i][j];


	for(int i=0; i<ROWS; i++){
		sum=0;
		for(int j=0; j<COLS; j++){
			sum += mtx[i][j];
		}
		if(sum > max){
			max=sum; 
			best_rows=i;
		}
	}

	for(int x=0; x<COLS; x++){
		sum2=0;   
		for(int i=0; i<ROWS; i++){
			sum2 += mtx[i][x];
		}
		if(sum2 > max2){
			max2=sum2; 
			best_cols=x;
		}
	}


	cout<<best_rows << " "<<best_cols <<endl;

	return 0;
}

