/*Ex6b:
*   =====================================
*   Written by: amr shwieky, id = 212443485, login = amrsh
*
* we have an array from user the program wil return list of possible 
* Equilateral triangle that with side > 2 . also return what the max size
* we found out of triangles and tell us how many max triangles we have
* input:matrix[10][15] from user
* output: list of all the stand and inverted triangles , how many 
* trinagles have max size and the max size */

//--------include section---------
#include <iostream>
#include <cstdlib>

//--------using section---------
using std::cin;
using std::cout;
using std::endl;

//--------function section--------
void get_array();
void stand(int row , int colm);
void invert(int row , int colm);

//--------constant section--------
const int ROWS=10 ,  COLS=15 , N=100;

int len=1 , val , yes=false , c=1 , count=0 , max=0 ; //for stand function
int len2=1 , val2 , yes2=false , c2=1 
		, number=0; //same as the previous for the invert function
int array[ROWS][COLS];

int counter[N]; //helper array to find how many max size triangle we have

//------main section---------
int main()
{
	get_array(); //get array from user

	for (int s=0 ; s < ROWS ; s++){
		for (int w=0 ; w< COLS ; w++){

			stand(s ,w); //call function that tell if there is 
			//possible stand triangle from head (s,w)

			invert(s ,w); //call function that tell if there is 
			//possible stand triangle from head (s,w)


			if (yes && len > 2){ //if yes and len > 2 as wanted print it
				cout << s << " " << w << ": " << len << " " << "standing. " <<
						"Value: " << val << endl;
				yes=false; //rest the boolean
				counter[count]=len;  //enter the len to helper array 
				count++; //help us to go ahead in the helper array 
			}

			if (yes2 && len2 > 2){ //if yes and len > 2 as wanted print it
				cout << s << " " << w << ": " << len2 << " " << "inverted. " <<
						"Value: " << val2 << endl;
				yes2=false; //rest boolean
				counter[count]=len2; // enter len to helper array
				count++; //help us to go ahead in the helper array
			}
			c=1;
			len=1;//rest all the integers
			c2=1;
			len2=1; 
		}
	}
	for (int g=0 ; g < count ; g++){
		if (counter[g]==max && max!=0)
			number++;
	}


	cout << number  << " " << max << endl; 
	return EXIT_SUCCESS;
}

void get_array()
{
	for (int i=0 ; i < ROWS ; i++){
		for (int k=0 ; k < COLS ; k++)
			cin >> array[i][k];//get matrix from user
	}
}

void stand(int row , int colm)
{
	val=array[row][colm];
	if ((colm > 1) && (colm < COLS-2)){
		for (int i=row+1  ; i < ROWS  ; i++){ 
			if ((array[i][colm+c]==val) && (array[i][colm-c]==val) && 
					((colm-c)>=0) && ((colm+c)<COLS)){//check down sides of the head
				len++;//add 1 to the len of side
				c++;
			}
			else if (len > 2){
				for (int j=colm+1-c ; j < colm+c ; j++){
					if (array[i-1][j]==val){//check the base of the triangle
						yes=true;
					}
					else{
						yes=false;
						c=1;
						len=1;
					}
				}
				if (len > max && len > 2)//if triangle illegal check it size
					max=len;
				break;
			}
			else{
				yes=false;
				c=1;
				len=1;//rest all
			}
		}
	}
}
void invert(int row , int colm) //same as stand just in the other way
{
	val2=array[row][colm];
	if ((colm > 1) && (colm < COLS-2)){
		for (int i=row-1  ; i > -1  ; i--){ //check the sides up of head
			if ((array[i][colm+c2]==val2) && (array[i][colm-c2]==val2) && 
					((colm-c2)>=0) && ((colm+c2)<COLS)){
				len2++;
				c2++;
			}
			else if (len2 > 2){
				for (int j=colm+1-c2 ; j < colm+c2 ; j++){
					if (array[i+1][j]==val2){//check the base
						yes2=true;
					}
					else{
						yes2=false;
						c2=1;
						len2=1;
					}
				}
				if (len2 > max && len > 2)
					max=len2;//compare lengths if it illegal(>2)
				break;
			}
			else{
				yes2=false;
				c2=1;
				len2=1;
			}
		}
	}
}



