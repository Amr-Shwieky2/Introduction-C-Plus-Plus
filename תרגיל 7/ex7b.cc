/*Ex7b:
*   =====================================
*   Written by: amr shwieky, id = 212443485, login = amrsh
*
*   The program works to receive an input from the user and
*   according to the process that the user enters in the first
*   cell, either encrypt or decrypt the entrance.  
*   
*    input: The user will enter a starting string in either one or two.
*    output: Three input encoding methods cumulatively structured,
*    or three-stage decoding architecture.
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
using std::swap;

//--------constant section--------
const int MAX_STR_LEN = 1000;

//--------function section--------
void read_data(char arry[]); //It is read from the entered user and functions are called through it.
void change_places1(char arry[], int n); // strip the entrance from the front.
void change_places2(char arry[], int n); // strip the entrance from the front.
void round_two(char arry[], int n); //You strip the entry from the last digit.
void switch_characters(char arry[], int n); //Change letters a certain amount of times.
void Turn_the_entrance(char arry[], int n, char& size); //flip the places of the letters.
void random_addition(char arry[], int n, char size); // add random letters.
void removed_random(char arry[], int n, int& size); // removed random letters.
void switch_characters_2(char arry[], int n); //flip the places of the letters.
void solution(char arry[]); // inting endl over of cell 500.

//------main section---------
int main()
{
    char arry[MAX_STR_LEN];
    read_data(arry);
    return EXIT_SUCCESS;
}
//------------------------------------------------------
void read_data(char arry[]) {
    int n, w;
    char size;
    srand(17);
    n = 2 + rand() % (4 - 2 + 1);
    cin.getline(arry, MAX_STR_LEN);
    if (arry[0] == '1') {
        change_places1(arry, n);
        switch_characters(arry, n);
        Turn_the_entrance(arry, n, size);
        random_addition(arry, n, size);
    }
    if (arry[0] == '2') {
        change_places2(arry, n);
        removed_random(arry, n, w);
        Turn_the_entrance(arry, n, size);
        switch_characters_2(arry, n);
    }
}
//------------------------------------------------------
void change_places1(char arry[], int n){
    for (int help = 2; help < strlen(arry);)
        for (int temp = 0; temp < strlen(arry); temp++) {
            if (arry[temp + n - 1] != '\n') {
                arry[temp] = arry[help];
                help++;
            }
            else if (arry[temp + n - 1] == '\n')
                arry[temp] = '\n';
        } 
}
//------------------------------------------------------
void change_places2(char arry[], int n){
    for (int help = 2; help < strlen(arry);)
        for (int temp = 0; temp < strlen(arry); temp++) {
            if (arry[temp + n] != '\n') {
                arry[temp] = arry[help];
                help++;
            }
        } 
        round_two(arry, n);
}
//------------------------------------------------------
void round_two(char arry[], int n){
    int end = strlen(arry);
        for(int temp = 0; temp < end; temp++){
            if(arry[temp] == '3')
                arry[temp] = '\0';
        }
}
//------------------------------------------------------
void switch_characters(char arry[], int n) {
    int i = 0;
    while (arry[i] != '\n') {
        if (arry[i] >= 'a' && arry[i] <= 'w')
            arry[i] = arry[i] + n;
        else if (arry[i] >= 'A' && arry[i] <= 'W')
            arry[i] = arry[i] + n;
        else if (arry[i] >= 'x' && arry[i] <= 'z')
            arry[i] = arry[i] - 26 + n;
        else if (arry[i] >= 'X' && arry[i] <= 'Z')
            arry[i] = arry[i] - 26 + n;
        i++;
    }
    cout << arry << endl;
}
//------------------------------------------------------
void Turn_the_entrance(char arry[], int n, char& size) {
    size = strlen(arry);
    for (int place = 0; place < size; place++)
        if ((place + 1) % n == 0) {
            for (int i = 0; i < n / 2; i++) {
                swap(arry[place - i], arry[place - n + 1 + i]);
            }
        }
    cout << arry << endl;
}
//------------------------------------------------------
void random_addition(char arry[], int n, char size) {
    char r_1;
    srand(17);
    r_1 = 'b';
    solution(arry);
    for (int place = 500; place < MAX_STR_LEN;) {
        for (int temp = 0; temp < size;) {
            arry[place] = arry[temp];
            place++;
            temp++;
            if (temp % n == 0) {
                arry[place] = r_1;
                place++;
            }
        }
        for (int k = 500; arry[k] != '\n'; k++)
            cout << arry[k];

        cout << n << endl;
        exit(EXIT_FAILURE);
    }
}
//------------------------------------------------------
void removed_random(char arry[], int n, int& size) {
    size = strlen(arry);
    for (int temp = 1; temp < size; temp++) {
        if (temp % n == 0) {
            arry[temp] = arry[temp + 1];
            int temp_2 = temp + 1;
            for (int place = temp_2; place < size; place++)
                arry[place] = arry[place + 1];
        }
    }
    cout << arry << endl;    
}
//------------------------------------------------------
void switch_characters_2(char arry[], int n) {
    int i = 0;
    while (arry[i] != '\n') {
        if (arry[i] >= 'd' && arry[i] <= 'z')
            arry[i] = arry[i] - n;
        else if (arry[i] >= 'D' && arry[i] <= 'Z')
            arry[i] = arry[i] - n;
        else if (arry[i] >= 'a' && arry[i] <= 'c')
            arry[i] = arry[i] + 26 - n;
        else if (arry[i] >= 'A' && arry[i] <= 'C')
            arry[i] = arry[i] + 26 - n;
        i++;
    }
    cout << arry << endl;
}
//------------------------------------------------------
void solution(char arry[]){
    for(int sol = 500; sol < MAX_STR_LEN; sol++)
        arry[sol] = '\n';
}

