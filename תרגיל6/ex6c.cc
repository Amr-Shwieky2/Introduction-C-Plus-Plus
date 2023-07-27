/*  Ex6c: 
*   =====================================
*   Written by: amr shwieky, id = 212443485, login = amrsh
*   
*   The program requests data from the user to fill in the
*   matrix and the array,It checks the matrix by the inputs
*   to the one-row array,Finds suitable data and returns the
*   number of the desired row and the sum of the cells that were matched.
*/

//--------include section---------
#include <iostream>
#include <cstdlib> 

//--------using section---------
using std :: cout;
using std :: cin;
using std :: endl;

//--------constant section--------
const int ROWS = 5,
		COLS =17;
const int N = 6; 

//--------enum section--------
enum patterns_t
{EVEN_PT, POSITIVE_PT, DIVIDE_BY_3_MPT};

//--------function section--------
void reed_data(int mtx[ROWS][COLS], int arr[]);
void find_patterns(int mtx[ROWS][COLS], int arr[], int & num, int & j, int & max);
void check_even(int mtx[ROWS][COLS], int arr[], int & sum, int x, int & i,
		int &j, bool & first, bool & case_2, bool & case_3, bool & case_4,
		bool & case_5);
void check_positive(int mtx[ROWS][COLS], int arr[], int & sum, int x, int & i,
		int & j ,bool & first, bool & case_2, bool & case_3,
		bool & case_4, bool & case_5);
void check_divide_by_3(int mtx[ROWS][COLS], int arr[],
		int & sum, int x, int & i,
		int & j ,bool & first, bool & case_2,
		bool & case_3, bool & case_4,
		bool & case_5);
void check_bool(int mtx[ROWS][COLS], int arr[], int & sum, int x, int & i,
		int &j, bool & first, bool & case_2, bool & case_3,
		bool & case_4, bool & case_5);
void check_sum(int mtx[ROWS][COLS], int arr[], int & sum, int x, int & i,
		int &j, bool & first, bool & case_2, bool & case_3, bool & case_4,
		bool & case_5); 
void junction(int mtx[ROWS][COLS], int arr[], int & sum, int x, int & i,
		int &j, bool & first, bool & case_2, bool & case_3, bool & case_4,
		bool & case_5);
void plan_b(int mtx[ROWS][COLS], int arr[], int & sum, int x, int & i,
		int &j, bool & first, bool & case_2, bool & case_3, bool & case_4,
		bool & case_5);
		
//------main section---------		
int main()
{
	int mtx[ROWS][COLS];
	int arr[N];
	int sum=-1, num=0, max=0, j=0;

	reed_data(mtx, arr);
	find_patterns(mtx, arr, num, j, max);
	cout<<num <<" "<<max <<endl;
	return EXIT_SUCCESS;
}

void reed_data(int mtx[ROWS][COLS], int arr[]){
	for(int i=0; i<ROWS; i++)
		for(int j=0; j<COLS; j++)
			cin>> mtx[i][j];

	for(int x=1; x<N; x++){
		cin>>arr[x];

		if(arr[x] <= 2)
			arr[x]= (enum patterns_t) arr[x];
	}
}

void find_patterns(int mtx[ROWS][COLS], int arr[], int & num,int & j, int & max){
	bool first=true, case_2=true, case_3=true, case_4=true, case_5=true;
	int i=0, sum=0;
	for(int x=1; x<N; x++){
		if(i<ROWS){
			junction(mtx, arr, sum,  x, i, j,
					first, case_2, case_3,
					case_4, case_5);

			plan_b(mtx, arr, sum,  x, i, j,
					first, case_2, case_3,
					case_4, case_5);
		}
	}
	num=i;
	max=sum;

}

void check_even(int mtx[ROWS][COLS], int arr[], int & sum, int x, int & i,
		int &j, bool & first, bool & case_2, bool & case_3, bool & case_4,
		bool & case_5){

	if(x==1){     
		for(j; j<3 && first; j++){
			if(mtx[i][j]%2 == 0){
				first=false;
				check_sum(mtx, arr, sum,  x, i, j,
						first, case_2, case_3,
						case_4, case_5);
			}
		}
	}
	if(x==2){
		if(mtx[i][j + 1]%2 == 0 && mtx[i][j + 2]%2 == 0){
			case_2=false;
			check_sum(mtx, arr, sum,  x, i, j,
					first, case_2, case_3,
					case_4, case_5);
		}
	}
	if(x==3){
		if(mtx[i][j + 3]%2 == 0 && mtx[i][j + 4]%2 == 0){ 
			if(mtx[i][j + 5]%2 == 0){
				case_3=false;
				check_sum(mtx, arr, sum,  x, i, j,
						first, case_2, case_3,
						case_4, case_5);
			}
		}
	}
	if(x==4){
		if(mtx[i][j + 6]%2 == 0 && mtx[i][j + 7]%2 == 0){
			if(mtx[i][j + 8]%2 == 0 && mtx[i][j + 9]%2 == 0){
				case_4=false;
				check_sum(mtx, arr, sum,  x, i, j,
						first, case_2, case_3,
						case_4, case_5);
			}
		}
	}
	if(x==5){
		if(mtx[i][j+ 10]%2 == 0 && mtx[i][j + 11]%2 == 0){ 
			if(mtx[i][j + 12]%2 == 0 && mtx[i][j + 13]%2 == 0){ 
				if(mtx[i][j + 14]%2 == 0){
					case_5=false;    
					check_sum(mtx, arr, sum,  x, i, j,
							first, case_2, case_3,
							case_4, case_5);
				}
			}
		}
	}
}    

void check_positive(int mtx[ROWS][COLS], int arr[], int & sum, int x, int & i,
		int & j ,bool & first, bool & case_2, bool & case_3,
		bool & case_4, bool & case_5){

	if(x==1){     
		for(j; j<3 && first; j++){
			if(mtx[i][j]>0){
				first=false;
				check_sum(mtx, arr, sum,  x, i, j,
						first, case_2, case_3,
						case_4, case_5);
			}
		}
	}
	if(x==2){
		if(mtx[i][j + 1]>0 && mtx[i][j + 2]>0){
			case_2=false;
			check_sum(mtx, arr, sum,  x, i, j,
					first, case_2, case_3,
					case_4, case_5);
		}
	}
	if(x==3){
		if(mtx[i][j + 3]>0 && mtx[i][j + 4]>0){ 
			if(mtx[i][j + 5]>0){
				case_3=false;
				check_sum(mtx, arr, sum,  x, i, j,
						first, case_2, case_3,
						case_4, case_5);
			}
		}
	}
	if(x==4){
		if(mtx[i][j + 6]>0 && mtx[i][j + 7]>0){
			if(mtx[i][j + 8]>0 && mtx[i][j + 9]>0){
				case_4=false;
				check_sum(mtx, arr, sum,  x, i, j,
						first, case_2, case_3,
						case_4, case_5);
			}
		}
	}
	if(x==5){
		if(mtx[i][j+ 10]>0 && mtx[i][j + 11]>0){ 
			if(mtx[i][j + 12]>0 && mtx[i][j + 13]>0){ 
				if(mtx[i][j + 14]>0){
					case_5=false;    
					check_sum(mtx, arr, sum,  x, i, j,
							first, case_2, case_3,
							case_4, case_5);
				}
			}
		}
	}
}    

void check_divide_by_3(int mtx[ROWS][COLS], int arr[],
		int & sum, int x, int & i,
		int & j ,bool & first, bool & case_2,
		bool & case_3, bool & case_4,
		bool & case_5){
	if(x==1){     
		for(j; j<3 && first; j++){
			if(mtx[i][j]%3 == 0){
				first=false;
				check_sum(mtx, arr, sum,  x, i, j,
						first, case_2, case_3,
						case_4, case_5);
			}
		}
	}
	else if(x==2){
		if(mtx[i][j + 1]%3 == 0 && mtx[i][j + 2]%3 == 0){
			case_2=false;
			check_sum(mtx, arr, sum,  x, i, j,
					first, case_2, case_3,
					case_4, case_5);
		}
	}
	else if(x==3){
		if(mtx[i][j + 3]%3 == 0 && mtx[i][j + 4]%3 == 0){
			if(mtx[i][j + 5]%3 == 0){
				case_3=false;
				check_sum(mtx, arr, sum,  x, i, j,
						first, case_2, case_3,
						case_4, case_5);
			}
		}
	}
	else if(x==4){
		if(mtx[i][j + 6]%3 == 0 && mtx[i][j + 7]%3 == 0){
			if(mtx[i][j + 8]%3 == 0 && mtx[i][j + 9]%3 == 0){
				case_4=false;
				check_sum(mtx, arr, sum,  x, i, j,
						first, case_2, case_3,
						case_4, case_5);
			}    
		}
	}
	else if(x==5){
		if(mtx[i][j+ 10]%3 == 0 && mtx[i][j + 11]%3 == 0){
			if(mtx[i][j + 12]%3 == 0 && mtx[i][j + 13]%3 == 0){ 
				if(mtx[i][j + 14]%3 == 0){
					case_5=false;    
					check_sum(mtx, arr, sum,  x, i, j,
							first, case_2, case_3,
							case_4, case_5);
				}
			}
		}
	}

}

void check_bool(int mtx[ROWS][COLS], int arr[], int & sum, int x, int & i,
		int &j, bool & first, bool & case_2, bool & case_3, bool & case_4,
		bool & case_5){

	if(first==true && x==1){
		i++;
		if(arr[x]==EVEN_PT){
			check_even(mtx, arr, sum,  x, i, j,
					first, case_2, case_3,
					case_4, case_5);
		}
		else if(arr[x]==POSITIVE_PT){
			check_positive(mtx, arr, sum,  x, i,
					j, first, case_2, case_3,
					case_4, case_5);
		}
		else if(arr[x]==DIVIDE_BY_3_MPT){
			check_divide_by_3(mtx, arr, sum,  x, i,
					j, first, case_2, case_3,
					case_4, case_5);
		}
	}
	else if(case_2==true && x==2){
		i++;
		x=0;
		sum=-1;
		j=0;
		first=true;
	}
	else if(case_3==true && x==3){
		i++;
		x=0;
		sum=-1;
		j=0;
		first=true;
		case_2=true;
	}
	else if(case_4==true && x==4){
		i++;
		x=0;
		sum=-1;
		j=0;
		first=true;
		case_2=true;
		case_3=true;
	}
	else if(case_5==true && x==5){
		i++;
		x=0;
		sum=-1;
		j=0;
		first=true;
		case_2=true;
		case_3=true;
		case_4=true;
	}
}

void check_sum(int mtx[ROWS][COLS], int arr[], int & sum, int x, int & i,
		int &j, bool & first, bool & case_2, bool & case_3, bool & case_4,
		bool & case_5){

	if(x==1 && first==false){     
		sum += mtx[i][j];
	}
	if(x==2 && case_2==false){
	    for(int k=j + 1; k<=j + 2;k++)
		sum += mtx[i][k];
	}
	//if(x==3 && case_3==false){
	    for(int s=j + 3; s<=j + 5;s++)
		sum += mtx[i][s];
	//}
	if(x==4 && case_4==false){
	    for(int b=j + 6; b<=j + 9;b++)
		sum += mtx[i][b];
	}
	//if(x==5 && case_5==false){
	    for(int a=j + 10; a<=j + 14; a++)
		sum += mtx[i][a];
	//}
}

void junction(int mtx[ROWS][COLS], int arr[], int & sum, int x, int & i,
		int &j, bool & first, bool & case_2, bool & case_3, bool & case_4,
		bool & case_5){
	if(arr[x]==EVEN_PT){
		check_even(mtx, arr, sum,  x, i, j,
				first, case_2, case_3,
				case_4, case_5); 

	}
	else if(arr[x]==POSITIVE_PT){
		check_positive(mtx, arr, sum,  x, i, j,
				first, case_2, case_3,
				case_4, case_5);

	}    
	else if(arr[x]==DIVIDE_BY_3_MPT){
		check_divide_by_3(mtx, arr, sum,  x, i,
				j, first, case_2, case_3,
				case_4, case_5); 
	}   
}

void plan_b(int mtx[ROWS][COLS], int arr[], int & sum, int x, int & i,
		int &j, bool & first, bool & case_2, bool & case_3, bool & case_4,
		bool & case_5){
	if(first==true && x==1){
		check_bool(mtx, arr, sum,  x, i, j,
				first, case_2, case_3,
				case_4, case_5);   
	}
	else if(case_2==true && x==2){
		check_bool(mtx, arr, sum,  x, i, j,
				first, case_2, case_3,
				case_4, case_5);
	}
	else if(case_3==true && x==3){
		check_bool(mtx, arr, sum,  x, i, j,
				first, case_2, case_3,
				case_4, case_5);
	}
	else if(case_4==true && x==4){
		check_bool(mtx, arr, sum,  x, i, j,
				first, case_2, case_3,
				case_4, case_5);
	}
	else if(case_5==true && x==5){
		check_bool(mtx, arr, sum,  x, i, j,
				first, case_2, case_3,
				case_4, case_5);
	}
}

