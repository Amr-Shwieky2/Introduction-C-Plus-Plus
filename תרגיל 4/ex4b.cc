/*  Ex4b: 
*   =====================================
*   Written by: amr shwieky, id = 212443485, login = amrsh
*   
*   The program works in the range of numbers from one to twenty-four,
*    and checks the numbers as follows, if it is divided by two without
*    a remainder,then it is divided, but if it is not divided, 
*   the number is multiplied by three and one is added to it
*   The process stops when a number is repeated or the
*   number of the number reaches more than a thousand.
*/


//--------include section---------
#include <iostream>
#include <cstdlib>

//--------using section---------
using std ::cout;
using std ::endl;

//--------constant section--------
const int N=160;

//------main section---------
int main()
{
    bool ids[N];
    int num ,num2, temp;
    
//------Store inside the array the value true    
    for(num=0; num<=N;num++)
        ids[num]=true;
    
//------for loop to run of number 1 to 24.    
        for(num=1;num<25;num++){
         cout<<num<<" ";
         num2=num;
            while(ids[num2]==true){
                ids[num2]=false;
                if(num2%2==0){
                    temp=num2/2;
                    cout<<temp<<" ";
                    num2=temp;
                }
                else{ 
                    temp=num2*3 + 1;
                    cout<<temp<<" ";
                    num2=temp;
                }
                 
            }
           cout<<endl;
        }
 
  
    return EXIT_SUCCESS;
}

