/* File: Ex2c.cc 
*    
* ========================================
* Writen by: Amr Shwieky, id = 212443485, login = amrsh
*
*    The code works to find how many even and odd numbers and how many zeros,
*    negative numbers and positive numbers entered by the user */ 
 
// --------- including section ------
#include <iostream>


// --------- using section ------
using std :: cout;
using std :: cin;
using std :: endl;

// ------- main section ----
int main()
{ 
// ------- variables that are the  inputs
    int num1 , num2 , num3 , num4;
    
    
/* The values in which the quantity will be saved numbers even and odd  and how many zeros, 
* negative numbers and positive numbers entered by the user*/   
    int even =0 , odd =0 , pos =0 , ngt =0 , zero =0;
 
// // ---------- entering the variables    
    cin >> num1 >> num2 >> num3 >> num4;
    
    
// ---- Condition operation that stores even and odd numbers    
    if (num1 % 2 ==0 )
        even++ ;
    else
        odd++;
    if(num2 % 2 ==0)
    { even++; }
    else
        odd++;
    if(num3 % 2 ==0)
        even++; 
    else 
        odd++;
    if(num4 % 2 ==0)
        even++; 
    else
        odd++; 
        
   
// ---- Condition operation that stores positive and negative numbers    
    if (num1 > 0 )
        pos++;
    else if (num1 < 0)
        ngt++;
    
    if (num2 > 0 )
        pos++;
    else if (num2 < 0)
        ngt++;
    
    if (num3 > 0 )
        pos++;
    else if ( num3 < 0)
        ngt++;
    
    if (num4 > 0 )
        pos++;
    else if (num4 < 0 ) 
        ngt++;
        
    
//-----Condition operation that stores zeros        
    if (num1 ==0)
        zero++;
    if (num2 ==0)
        zero++;
    if (num3 ==0)
        zero++;
    if (num4 ==0)
        zero++;
        
//--------value output command      
     cout << even << " " <<  odd << endl ;
     cout << pos << " " << ngt << " " << zero ;
     
    
    
    return 0;
    
    
}
