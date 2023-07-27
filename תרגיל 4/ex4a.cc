/*  Ex4a: 
*   =====================================
*   Written by: amr shwieky, id = 212443485, login = amrsh
*   
*   The program contains a six-digit matrix, 
*    and the user is asked to enter values into each cell in the matrix.
*    The program compares the values and checks whether the number is
*    divided by the numbers before it without a remainder,
*    and the next number is divided by it without a remainder.
*/

//--------include section---------
#include <iostream>
#include <cstdlib>

//--------using section---------
using std :: cout;
using std ::cin;
using std ::endl;

//--------constant section--------
const int NUM_OF_STUDS=6;

//------main section---------
int main()
{   
//-------Integers that are declared as variables
    int ids [NUM_OF_STUDS] ,
        stude , count=0 , p ;
        
//--------thes for loop Entering variables into an array        
    for(stude=0;stude<NUM_OF_STUDS;stude++)
    cin>>ids[stude];
    
//--------thes for loop checks whether the number  
    for(p=1;p<NUM_OF_STUDS-1;p++){
        if(ids[p]>=1 && ids[p-1]>=1){
            if(ids[p+1]%ids[p]==0 && ids[p]%ids[p-1]==0)
            count++;
            
        }
    }
    cout<<count<<endl;
    
    return EXIT_SUCCESS;
}

