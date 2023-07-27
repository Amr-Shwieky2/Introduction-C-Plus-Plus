/*Ex3c
*
*   ========================================
* Writen by: Amr Shwieky, id = 212443485, login = amrsh
*
*
*   The program asks the user for a number, and gives him the nine roots
*    of the entered number as the nearest natural numbers.
*/

// --------- including section ------
#include <iostream>

// --------- using section -----
using std::endl;
using std::cin;
using std::cout;

// ------- main section ----
int main()
{
// ------ integer section ---
	int y, num, sum = 0, qr = 0,
			sum2 = 0,  sum3 = 0,  sum4 = 0,  sum5 = 0,
			sum6 = 0,  sum7 = 0,  sum8 = 0,  sum9 = 0,
			result2, result3, result4, result5,
			result6, result7, result8, result9;

	cin >> y;

// ------- for2 loop section ---- 
	sum2 = y;
	for (num = 0; num <= y && sum2 >= qr; num++)
	{   
		qr = y - (num * num);
		if (sum2 >= qr && qr >= 0)
		{
			sum2 = qr;
			result2 = num;
		}
		else if (qr < 0)
		{
			qr = qr * -1;
			if (sum2 >= qr && qr >= 0)
			{
				sum2 = qr;
				result2 = num;
			}
		}
	}


// ------- for3 loop section ---- 
	sum3 = y;
	for (num = 0; num <= result2 ; num++)
	{   
		qr = y - (num * num * num);
		if (sum3 >= qr && qr >= 0)
		{
			sum3 = qr;
			result3 = num;
		}
		else if (qr < 0)
		{
			qr = qr * -1;
			if (sum3 >= qr && qr >= 0)
			{
				sum3 = qr;
				result3 = num;
			}
		}
	}

// ------- for4 loop section ---- 
	sum4 = y;
	for (num = 0; num <= result3; num++)
	{   
		qr = y - (num * num * num * num);
		if (sum4 >= qr && qr >= 0)
		{
			sum4 = qr;
			result4 = num;
		}
		else if (qr < 0)
		{
			qr = qr * -1;
			if (sum4 >= qr && qr >= 0)
			{
				sum4 = qr;
				result4 = num;
			}
		}
	}

// ------- for5 loop section ---- 
	sum5 = y;
	for (num = 0; num <= result4; num++)
	{   
		qr = y - (num * num * num * num * num);
		if (sum5 >= qr && qr >= 0)
		{
			sum5 = qr;
			result5 = num;
		}
		else if (qr < 0)
		{
			qr = qr * -1;
			if (sum5 >= qr && qr >= 0)
			{
				sum5 = qr;
				result5 = num;
			}
		}
	}

// ------- for6 loop section ---- 
	sum6 = y;
	for (num = 0; num <= result5 ; num++)
	{   
		qr = y - (num * num * num * num * num * num);
		if (sum6 >= qr && qr >= 0)
		{
			sum6 = qr;
			result6 = num;
		}
		else if (qr < 0)
		{
			qr = qr * -1;
			if (sum6 >= qr && qr >= 0)
			{
				sum6 = qr;
				result6 = num;
			}
		}
	}


// ------- for7 loop section ---- 
	sum7 = y;
	for (num = 0; num <= result6; num++)
	{   
		qr = y - (num * num * num * num * num * num * num);
		if (sum7 >= qr && qr >= 0)
		{
			sum7 = qr;
			result7 = num;
		}
		else if (qr < 0)
		{
			qr = qr * -1;
			if (sum7 >= qr && qr >= 0)
			{
				sum7 = qr;
				result7 = num;
			}
		}
	}

// ------- for8 loop section ---- 
	sum8 = y;
	for (num = 0; num <= result7 ; num++)
	{   
		qr = y - (num * num * num * num * num * num * num * num);
		if (sum8 >= qr && qr >= 0)
		{
			sum8 = qr;
			result8 = num;
		}
		else if (qr < 0)
		{
			qr = qr * -1;
			if (sum8 >= qr && qr >= 0)
			{
				sum8 = qr;
				result8 = num;
			}
		}
	}

// ------- for9 loop section ---- 
	sum9 = y;
	for (num = 0; num <= result8 ; num++)
	{   sum9 = y;
	qr = y - (num * num * num * num * num * num * num * num * num);
	if (sum9 >= qr && qr >= 0)
	{
		sum9 = qr;
		result9 = num;
	}
	else if (qr < 0)
	{
		qr = qr * -1;
		if (sum9 >= qr && qr >= 0)
		{
			sum9 = qr;
			result9 = num;
		}
	}
	}
	cout << result2 << " "  << result3 << " "  << result4
			<< " "  << result5 << " "  << result6 << " "  << result7 << " " << result8 << " "  <<result9 << endl;


	return 0;
}

