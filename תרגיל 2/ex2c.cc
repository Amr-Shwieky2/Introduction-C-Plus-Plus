/* File: Ex2c.cc 
*    
* ========================================
* Writen by: Amr Shwieky, id = 212443485, login = amrsh
*
* The code works on receiving a date from the user and outputting the date in another form, 
* such as adding the starting letters of the days and months in their names, but the year remains the same. */



// --------- including section ------
#include <iostream>

// --------- using section ------
using  std :: cout;
using std :: cin;
using std :: endl;

// ------- main section ----
int main()
{
// ------- variables that are the  inputs
     int day , mon , year;

// ---------- entering the variables       
    cin >> day >> mon >> year; 
    
// A variable that I knew only to make it easier for myself in the conditional operations, and there is no expulsion order for it.    
    int x;        
  
// Condition operations that specify months that have 31 days.   
     if  (mon == 1 || mon == 3 || mon == 5 || mon == 7 || mon == 8 || mon ==10 || mon == 12) 
    { if (day >= 1 && day <= 31)
    x ++;
    else
     return 0;
    }

// Condition operations that specify months that have 30 days. 
    if ( mon == 4  || mon == 6 || mon == 9 || mon == 11 )
    { if (day >= 1 && day <= 30)
        x++;
     else 
         return 0;
    }
    
// Condition operations that determine whether a year is a leap year or not.    
	if( mon == 2)
	{
		if((year%400==0) || (year%4==0 && year%100!=0))	
		    {  if (day <= 29) 
		            x++;
		      else
		            return 0;}		
		  else { if (day <= 28 )	
			        x++;
			    else 
			        return 0;}
		
	}
	else 
	x++;
	
// A process that adds to today's number one of its preludes	
    switch( day )
    {
    case 1:
    cout << "1st" <<" ";
    break;
    case 2:
    cout << "2nd" << " ";
    break;
    case 3:
    cout<<"3rd" << " ";
    break;
    default:
    cout<< day <<"th" <<" ";
    
  
    }
    
// The process that converts a month's number to its name    
      switch ( mon )
     {
    case 1: 
    cout << "January" << " ";
    break;
    
    case 2: 
    cout << "February" <<" ";
    break;
   
    case 3: 
    cout << "March" << " ";
    break;
  
    case 4: 
    cout << "April" << " ";
    break;
  
    case 5: 
    cout << "May" << " ";
    break;
  
    case 6: 
    cout << "June" <<" ";
    break;
   
    case 7: 
    cout << "July" << " ";
    break;
    
    case 8: 
    cout << "August" <<" ";
    break;
    
    case 9: 
    cout << "September" << " ";
    break;
   
    case 10: 
    cout << "October" << " ";
    break;
      
    case 11: 
    cout << "November" << " ";
    break;
  
    case 12: 
    cout << "December" << " ";
    break;
    
     }

//--------value output command      
    cout << year;
    
   
   

   
   
    return 0;
}

