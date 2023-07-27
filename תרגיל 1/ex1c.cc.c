// ------ including section ------
#include <iostream>

// ------ using section ------
using std :: cout;
using std :: cin;
using std :: endl;

// ------ main section ------
int main()
{
// ---- variables that are the three inputs and are outputs
    float average1 , average2 , average3, sum;
   
// ---- entering the variables
    cin >> average1 >> average2 >> average3;
  
    sum = ((average1 *0.1) + (average2 *0.2) + (average3 *0.7));
    
// ------ presenting the Total   
    cout << sum;
    
    cout << endl;
  
    return 0;
}

