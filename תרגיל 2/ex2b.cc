/* File: Ex2b.cc 
*    
* ========================================
* Writen by: Amr Shwieky, id = 212443485, login = amrsh
*   
* The code works to find the largest value of three numbers entered by the user,
* the calculation is done through the multiplication and addition process */

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
    int num1 , num2 , num3 ;

// ---------- entering the variables 
    cin >> num1 >> num2 >> num3;

// positive setting condition   
    if ( num1 > 0 && num2 > 0 && num3 > 0)
 {
    if (num1 > num3 && num3 > num2 )
        cout <<"("<< num2 << "+" << num3 <<")" <<"*" << num1 << "=" << (num3 + num2)*num1 << endl;
    
    else if (num1 > num2 && num2 > num3 )
        cout <<"("<< num2 << "+" << num3 <<")" <<"*" << num1 << "=" << (num3 + num2)*num1 << endl;
    
    else if (num2 > num1 && num1 > num3 )
        cout <<"("<< num1 << "+" << num3 <<")" <<"*" << num2 << "=" << (num1 + num3)*num2 << endl;
    
    else if (num2 > num3 && num3 > num1 )
        cout <<"("<< num1 << "+" << num3 <<")" <<"*" << num2 << "=" << (num3 + num1)*num2 << endl;
    
    else if (num3 > num1 && num1 > num2 )
        cout <<"("<< num1 << "+" << num2 <<")" <<"*" << num3 << "=" << (num2 + num1)*num3 << endl;
    
    else if (num3 > num2 && num2 > num1 )
        cout <<"("<< num1 << "+" << num2 <<")" <<"*" << num3 << "=" << (num2 + num1)*num3 << endl;
 }    

// Negative setting condition
    if ( num1 < 0 && num2 < 0 && num3 < 0)
 {
    if (num1 > num3 && num3 > num2 )
        cout <<"("<< num1 << "+" << num3 <<")" <<"*" << num2 << "=" << (num1 + num3)*num2 << endl;
    
    else if (num1 > num2 && num2 > num3 )
        cout <<"("<< num1 << "+" << num2 <<")" <<"*" << num3 << "=" << (num1 + num2)*num3 << endl;
    
    else if (num2 > num1 && num1 > num3 )
        cout <<"("<< num1 << "+" << num2 <<")" <<"*" << num3 << "=" << (num2 + num1)*num3 << endl;
    
    else if (num2 > num3 && num3 > num1 )
        cout <<"("<< num2 << "+" << num3 <<")" <<"*" << num1 << "=" << (num2 + num3)*num1 << endl;
    
    else if (num3 > num1 && num1 > num2 )
        cout <<"("<< num1 << "+" << num3 <<")" <<"*" << num2 << "=" << (num3 + num1)*num2 << endl;
    
    else if (num3 > num2 && num2 > num1 )
        cout <<"("<< num2 << "+" << num3 <<")" <<"*" << num1 << "=" << (num3 + num2)*num1 << endl;
 }   
 
 
// Condition of two positive numbers and one negative number 
    else if ( num1 > 0  &&  num2 > 0 && num3 < 0) 
        cout << num1 << "*" << num2 << "+" << num3 << "=" << (num1 * num2 ) + num3 << endl; 
 
    else if ( num1 > 0  &&  num2 < 0 && num3 > 0) 
        cout << num1 << "*" << num3 << "+" << num2 << "=" << (num1 * num3 ) + num2 << endl; 
    
    else if ( num1 < 0  &&  num2 > 0 && num3 > 0) 
        cout << num2 << "*" << num3 << "+" << num1 << "=" << (num2 * num3 ) + num1 << endl; 

// Condition of one positive number and two negative numbers
    else if ( num1 > 0  &&  num2 < 0 && num3 < 0) 
        cout << num2 << "*" << num3 << "+" << num1 << "=" << (num2 * num3 ) + num1 << endl; 
 
    else if ( num1 < 0  &&  num2 < 0 && num3 > 0) 
        cout << num1 << "*" << num2 << "+" << num3 << "=" << (num1 * num2 ) + num3 << endl; 
    
    else if ( num1 < 0  &&  num2 > 0 && num3 < 0) 
        cout << num1 << "*" << num3 << "+" << num2 << "=" << (num1 * num3 ) + num2 << endl;
    
// The condition of all numbers is zero
    else if (num1 == 0 && num2 == 0 && num3 == 0)
        cout << num1 << "*" << num3 << "+" << num2 << "=" << (num1 * num3 ) + num2 << endl;

// Condition for a negative number, a positive number, and zero
    else if ( num1 > 0  &&  num2 == 0 && num3 < 0) 
        cout << num2 << "*" << num3 << "+" << num1 << "=" << (num3 * num2 ) + num1 << endl; 
 
    else if ( num1 > 0  &&  num2 < 0 && num3 == 0) 
        cout << num2 << "*" << num3 << "+" << num1 << "=" << (num2 * num3 ) + num1 << endl; 
    
    else if ( num1 < 0  &&  num2 > 0 && num3 == 0) 
        cout << num1 << "*" << num3 << "+" << num2 << "=" << (num1 * num3 ) + num2 << endl; 
 
     else if ( num1 == 0  &&  num2 > 0 && num3 < 0) 
        cout << num1 << "*" << num3 << "+" << num2 << "=" << (num3 * num1 ) + num2 << endl; 
 
    else if ( num1 == 0  &&  num2 < 0 && num3 > 0) 
        cout << num1 << "*" << num2 << "+" << num3 << "=" << (num2 * num1 ) + num3 << endl;  
        
    else if ( num1 < 0  &&  num2 == 0 && num3 > 0) 
        cout << num1 << "*" << num2 << "+" << num3 << "=" << (num1 * num2 ) + num3 << endl ;      

// The condition for two numbers zero and a positive number
     else if ( num1 == 0  &&  num2 == 0 && num3 > 0) 
        cout << num1 << "*" << num2 << "+" << num3 << "=" << (num1 * num2 ) + num3 << endl; 
 
    else if ( num1 > 0  &&  num2 == 0 && num3 == 0) 
        cout << num2 << "*" << num3 << "+" << num1 << "=" << (num2 * num3 ) + num1 << endl; 
    
    else if ( num1 == 0  &&  num2 > 0 && num3 == 0) 
        cout << num1 << "*" << num3 << "+" << num2 << "=" << (num1 * num3 ) + num2 << endl; 
 
//The condition of two positive numbers and one zero
     else if ( num1 > 0  &&  num2 == 0 && num3 > 0) 
        cout << num1 << "*" << num3 << "+" << num2 << "=" << (num3 * num1 ) + num2 << endl; 
 
    else if ( num1 > 0  &&  num2 > 0 && num3 == 0) 
        cout << num1 << "*" << num2 << "+" << num3 << "=" << (num2 * num1 ) + num3 << endl;  
        
    else if ( num1 == 0  &&  num2 > 0 && num3 > 0) 
        cout << num2 << "*" << num3 << "+" << num1 << "=" << (num2 * num3 ) + num1 << endl ;  

// The condition of two numbers zero and one negative number
     else if ( num1 == 0  &&  num2 == 0 && num3 < 0) 
        cout << num1 << "*" << num3 << "+" << num2 << "=" << (num1 * num3 ) + num2 << endl; 
 
    else if ( num1 < 0  &&  num2 == 0 && num3 == 0) 
        cout << num1 << "*" << num2 << "+" << num3 << "=" << (num1 * num2 ) + num3 << endl; 
    
    else if ( num1 == 0  &&  num2 < 0 && num3 == 0) 
        cout << num1 << "*" << num2 << "+" << num3 << "=" << (num1 * num2 ) + num3 << endl; 
  
// The condition of two negative numbers and a negative number zero one 
     else if ( num1 < 0  &&  num2 == 0 && num3 < 0) 
        cout << num1 << "*" << num3 << "+" << num2 << "=" << (num3 * num1 ) + num2 << endl; 
 
    else if ( num1 < 0  &&  num2 < 0 && num3 == 0) 
        cout << num1 << "*" << num2 << "+" << num3 << "=" << (num2 * num1 ) + num3 << endl;  
        
    else if ( num1 == 0  &&  num2 < 0 && num3 < 0) 
        cout << num2 << "*" << num3 << "+" << num1 << "=" << (num2 * num3 ) + num1 << endl ;          
    
// to end the process 
    return 0;
}

 

