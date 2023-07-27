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
using std::cin;
using std::cout;
using std::endl;
//--------function section--------
void get_array();
void get_array_of_rules();
void find_patterns();
//--------constant section--------
const int ROWS=5 , COLS=17 , N=6;
int array_of_rules[N] , array[ROWS][COLS];
int counter=0 , sum=-1 , adder=0 , max=-1;
bool found=false;
//--------enum section--------
enum patterns_t
{EVEN_PT, POSITIVE_PT, DIVIDE_BY_3_MPT};
//------main section---------		
int main()
{
	get_array();
	get_array_of_rules();
	find_patterns();
	cout << counter << " " <<  max  << "  " << endl;
	
	return EXIT_SUCCESS;
	
}

//=================================================================
void get_array()
{
	for (int i=0 ; i < ROWS ; i++){
		for (int k=0 ; k < COLS ; k++)
			cin >> array[i][k]; //get matrix from user
		}
}
//=================================================================
void get_array_of_rules()
{
	for ( int i=1 ; i < N ; i++)
		cin >> array_of_rules[i];//get enum array from user
}
//=================================================================
void find_patterns()
{
	for (int i=0 ; i < ROWS ; i++){
		for (int k=0 ; k < 3 ; k++){
			for ( int s=1 ; s < N ; s++){
				
				if (array_of_rules[s]==EVEN_PT ){//check the enum condtion
					
					for(int w=0 ; w < s ; w++){
						if(array[i][k+adder]%2==0){//check if even
							found=true;
							sum=sum+array[i][k+adder];//add it to the sum
							adder++;//add for the helper integer(adder)
						}
						else {
							found =false;
							adder=0;
							//if not found rest all and break
							break;
						
						}
						
						}
						}
						
				if (array_of_rules[s]==POSITIVE_PT ){//check enum
					
					for(int r=0 ; r < s ; r++){
						if(array[i][k+adder]>0){//check if postive
							found=true;//helper boolean
							sum+=array[i][k+adder];//add to sum
							adder++;
						}
						else {
							found =false;
							adder=0;
							//if not found rest all and break
							break;
							
							
						}
						}
						}
		
				if (array_of_rules[s]==DIVIDE_BY_3_MPT){
					
					for(int e=0 ; e < s ; e++){
						if(array[i][k+adder]%3==0){//check if array divide by 3
							found=true;
							sum=sum+array[i][k+adder];//add to sum
							adder++;//add the helper intger
						}
						else {
							found =false;
							adder=0;//else rest all and break
							
							break;
							
						}
						}
						}
				
				
				if (found && s==5)
					counter++;//if found all the 1,2,3,4,5 numbers count it
				
				if(sum>max)
					max=sum;//check the max sum
					
				
			
				if (!found){
					found=false;
					adder=0;//rest all and break if didn't find anything
					sum=0;
					break;}
			
			
		}}}}
	
	
	
	
	
	
	
	
	
	
	
