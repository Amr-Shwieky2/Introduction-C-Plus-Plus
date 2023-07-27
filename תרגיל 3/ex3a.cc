#include <iostream>

using std :: cout;
using std :: cin;
using std :: endl;

int main()
{
    int num , average , sum , positive , negative , i;
    
    cin >> num;
    
    sum = 0;
    negative = 0;
    positive = 0;
    average = 0;
    i = 0;
    while (num != 0)
    {
        ++i;
        sum +=num;
        
        
        if(num<0)
            {
                ++negative;
            }
            else
            {
                ++positive;
            }
        
        cin >>num;
        
    }
        average = sum/i;
    
        cout<< i << " " << average << " " << positive << " " << negative << endl ;
        
        
        
    return 0;
}

