/*Ex7a:
*   =====================================
*   Written by: amr shwieky, id = 212443485, login = amrsh
*
*    The program works on receiving two inputs from the user. 
*    In the first process, it strips the word from the numbers
*    and converts the letters to uppercase.In the second process,
*    it removes the duplicate characters in the two entries.
-------------------------------------------------------------------------
*    input: The user will enter two  string.
*    output: In the first operation, it strips the word from the
*    numbers and converts the letters to uppercase.In the second
*    process, it removes the duplicate characters in the two entries.
*/

//--------include section---------
#include <iostream>
#include <cstdlib>
#include <cctype>
#include <iomanip>
#include <cstring>

//--------using section---------
using std::cout;
using std::cin;
using std::endl;

//--------constant section--------
const int MAX_STR_LEN = 100;
const int N = 100;

//--------function section--------
void read_data(char first[], char scand[]);
void edit_first(char first[]);
void subscriber_survey(char first[], char scand[]);

//------main section---------
int main()
{
    char first[MAX_STR_LEN],
        scand[N];
    read_data(first, scand);
    edit_first(first);
    cout << endl;
    subscriber_survey(first, scand);
    cout << endl;

    return EXIT_SUCCESS;
}
//------------------------------------------------------
void read_data(char first[], char scand[]) {
    int i = 0, j = 0;
    do {
        first[i] = cin.get();
        i++;
    } while (i < MAX_STR_LEN && !isspace(first[i - 1]));

    do {
        scand[j] = cin.get();
        j++;
    } while (j < N && !isspace(scand[j - 1]));

}
//------------------------------------------------------
void edit_first(char first[]) {
    char place[MAX_STR_LEN];
    int i = 0, current = 0;
    for (int j = 0; j < MAX_STR_LEN; j++)
        place[j] = '\n';

    while (first[i] != '\n') {
        if (first[i] >= 'a' && first[i] <= 'z' && !isdigit(first[i])) {
            place[current] = first[i] - 32;
            current++;
        }
        i++;
    }
    for (int k = 0; place[k] != '\n'; k++)
        cout << place[k];
}
//------------------------------------------------------
void subscriber_survey(char first[], char scand[]) {
    char place[MAX_STR_LEN];
    int i = 0, current = 0, counter =0;
    for (int j = 0; j < MAX_STR_LEN; j++)
        place[j] = '\n';

    while (i < MAX_STR_LEN && first[i] != '\n') {
        for (int j = 0; j < N && scand[j] != '\n'; j++) {
            if (first[i] == scand[j]) {
                counter++;
            }
        }
        if (counter == 0) {
            place[current] = first[i];
            current++;
        }
        counter = 0;
        i++;
    }


    for (int k = 0; place[k] != '\n'; k++)
        cout << place[k];
}
