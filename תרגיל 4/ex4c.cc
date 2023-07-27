/*  Ex4c: 
*   =====================================
*   Written by: amr shwieky, id = 212443485, login = amrsh
*   The program receiving 8 numbers to an array of 8 numbers, and start to locate 
*   a loop which means, checking numbers from left to right in the array, if the 
*   first number points on a value, that if u point with it on another cell, and
*   its value points on another cell etc, and at least the value of what we 
*   pointed at is worth to the number cell of the first cell we pointed at, it
*   calls a loop, we print the number cells which participated in the loop by
*   order(with the help of another array)
* 
*   input: receiving 8 int numbers for the array.
*   output: the numbers of the cells which participated in the loop by the order.
*/

//--------include section---------
#include <iostream>
#include <cstdlib>

//--------using section---------
using std::cin;
using std::cout;
using std::endl;

//--------constant section--------
const int N = 8;

//------main section---------
int main()
{
	int brr[N], num, jump, x = 0, assistantint[N], recollect, counter = 1;
	bool repeat = false, assistant[N];

	for (num = 0; num < N; num++)	//inserting numbers for main array, making 
	//help array as falses and assistantint array as -1 as a number which is not 
	//one of the cell.
	{
		cin >> brr[num];
		assistant[num] = false;
		assistantint[num] = -1;
	}
	for (x = 0; x < N; x++)	//begining loop check from cell 0 to 7
	{
		jump = brr[x];
		if (brr[x] < N && brr[x] >= 0)	//checking if it can be the next cell 
		//and recollect what was the frist cell we started with
		{
			recollect = x;
			while (jump < N && jump >= 0)	//does it ophold the condition?
			{
				if (!assistant[jump])	//checking if the cell num is false which 
				//means we didnt pass there
				{
					assistant[jump] = true;
					if (counter == N)	//if counter exceeded go to cell 
					//0(end array)
					{
						counter = 0;
					}
					assistantint[counter] = jump;
					if(counter == 0)	//return it
					{
						counter = N;
					}
					jump = brr[jump];
					if (jump < N && jump >= 0)	//checking for continuity
					{
						counter++;
						continue;
					}
					else 	//cant continue so it is not a loop
					{
						for (num = 0; num < N; num++) 	//reseting helper arrays
						{
							assistant[num] = false;
							assistantint[num] = -1;
						}
						counter = 1;
						break;
					}

				}
				else //checking if we have been in this cell number 
				//already(true)
				{
					if (assistant[recollect])	//if the first cell is true it upholds
					{
						assistantint[0] = recollect;
						if (counter < N) //if we didnt exceeded the cells number
						// and define it al a loop
						{
							assistantint[counter - 1] = -1;
						}
						repeat = true;
						for (num = 0; num < N; num++) //print the printer array
						{
							if (assistantint[num] >= 0 && assistant[assistantint[num]])	
							//checking for all the true cells in help array and 
							//if its not a -1 in printer array and print
								cout << assistantint[num] << " ";
						}
						cout << endl;
						break;
					}
					else //if the first cell we remembered is not part of the 
					//loop
					{
						for (num = 0; num < N; num++) //reseting help loops
						{
							assistant[num] = false;
							assistantint[num] = -1;
						}
						counter = 1;
						break;
					}
				}
					
			}

		}
		if (repeat)	//if it was a repeat finish the program
			break;
		
	}

	return EXIT_SUCCESS;
}

