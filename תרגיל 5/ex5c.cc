/*  Ex5c: 
*   =====================================
*   Written by: amr shwieky, id = 212443485, login = amrsh
*
*    The program checks the number of prime numbers,
*    the number of numbers divisible by 2, 3, etc.,
*    and displays a histogram of the results.
*    It uses a software module that has already been written,
*    which knows how to create and display graphs.
*/

//--------include section---------
#include <iostream>
#include <cstdlib>
#include "histogram.h"

//--------using section---------
using std::cout;
using std::cin;
using std::endl;

//--------constant section--------
const int N = 200;
const int DIVIDE_BY = 6;

//--------function section-------
void enter_hi_low(int &hi,int &lo);
void form_array(int arr[], const int hi, const int lo);
int divide(const int arr[], int division_by);
int prime(const int arr[]);

//------main section---------
int main()
{
int hi, lo;
int arr[N];
int quantity_of_prime,
quantity_of_div;
char col_title[10];

enter_hi_low(hi, lo);
form_array(arr, hi, lo);
quantity_of_prime = prime(arr);

    cout << endl;
create_hist(30,
   DIVIDE_BY * (COL_MIN_WIDTH + COL_MIN_SPACE),
       DIVIDE_BY,
"primes and divide-by histo");

sprintf(col_title, "primes");
add_col(0, quantity_of_prime, 0, 0, col_title, '#');

for (int division_by = 2; division_by <= DIVIDE_BY; division_by++)
{
quantity_of_div = divide(arr, division_by);
sprintf(col_title, "div-by-%d", division_by);
add_col(division_by-1, quantity_of_div, 0, 0, col_title, '#');
}
draw_hist();

return EXIT_SUCCESS;
}
void enter_hi_low(int &hi, int &lo)
{
cin >> lo >> hi;
}

void form_array(int arr[], const int hi, const int lo)
{
srand(101);

for (int i = 0; i < N; i++)
{
arr[i] = rand() % ( hi - lo + 1) + lo;
}
}

int divide( const int arr[], int division_by)
{
int div_counter = 0;
for (int i = 0; i < N; i++)
{
if (arr[i] % division_by == 0)
div_counter++;
}
return div_counter;
}

int prime(const int arr[])
{
int counter_prime = 0;
bool is_prime;
for (int i = 0; i < N; i++)
{
is_prime = true;
for (int div = 2; div <= arr[i] / 2; div++)
{
if (arr[i] % div == 0)
{
is_prime = false;
break;
}
}
if (is_prime)
counter_prime++;
}
return counter_prime;
}
