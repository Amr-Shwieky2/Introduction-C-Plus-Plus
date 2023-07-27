#include <iostream>

using  std :: cout;
using std :: endl;
using std :: cin;


int main()
{
   int a , b , c;
   cin >> a >> b >> c;
  { 
   if( a >0 && b>0 && c >0 )
   cout <<"+" << endl;
   
   
   if (a<0 &&  b<0 &&  c<0)
   cout <<"-" <<endl;
   
   if (a==0 && b==0 && c ==0)
   cout <<" 0" << endl;
   
   else cout <<" ";
  }
    return 0;
}
