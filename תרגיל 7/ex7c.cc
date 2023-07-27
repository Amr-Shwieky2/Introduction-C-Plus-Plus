/*Ex7c:
*   =====================================
*   Written by: amr shwieky, id = 212443485, login = amrsh
*
*   In this program you will need to check the validity of
*   passwords (of strings), the user will enter some passwords
*   he wants to check, The user will now enter strings using
*   the passwords he entered above.
------------------------------------------------------------------
------------------------------------------------------------------
*   input: the user will enter some passwords he wants to check
*   and enter strings using the passwords he entered above.
*   output: The correct password passed all the tests.
*/


//--------include section---------
#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <cctype>
#include <cstring>
#include <stdlib.h>

//--------using section---------
using std::cout;
using std::endl;
using std::cin;

//--------constant section--------
const char MAX_STR_LEN = 100;
const char MAX_STRS = 10;

//--------function section--------
bool same_char(char inp_password[], char c);
bool If_mandatory(char inp_password[], char mandatory[][MAX_STR_LEN],
    int mand_amount);
void enter(char str[][MAX_STR_LEN], int& out_num_pass);
void read_data1(char inp_password[][MAX_STR_LEN], int& inp_num_pass);
void read_data2(char mandatory[][MAX_STR_LEN], int& mand_num_pass);
void correct_password(char inp_password[][MAX_STR_LEN],
    char out_password[][MAX_STR_LEN],
    char mandatory[][MAX_STR_LEN], const int& inp_num_pass,
    int& out_num_pass, const int& mand_num_pass);

//------main section---------
int main()
{
    char mandatory[MAX_STRS][MAX_STR_LEN];
    char inp_password[MAX_STRS][MAX_STR_LEN];
    char out_password[MAX_STRS][MAX_STR_LEN];
    int inp_num_pass = 0, out_num_pass = 0, mand_num_pass = 0;
    
    read_data1(inp_password, inp_num_pass);
    read_data2(mandatory, mand_num_pass);
    correct_password(inp_password, out_password, mandatory,
        inp_num_pass, out_num_pass, mand_num_pass);
    enter(out_password, out_num_pass);
    return EXIT_SUCCESS;
}
//---------------function read_data1 and read_data2--------------
/*INPUT 1 inp_password, inp_num_pass
       2 mandatory, mand_num_pass 
OUTPUT the passords that the user entered and mandatory passwords 
       2 and the number of them */   
void read_data1(char inp_password[][MAX_STR_LEN], int& inp_num_pass) { 
    cin >> inp_num_pass; 
    cin.get();  
    for (int i = 0; i < inp_num_pass; i++) { 
        cin.getline(inp_password[i], MAX_STR_LEN);
    }

}
//--------------------------------------------------------------
void read_data2(char mandatory[][MAX_STR_LEN], int& mand_num_pass) { 
    cin >> mand_num_pass;
    cin.get();
    for (int i = 0; i < mand_num_pass; i++) { 
        cin.getline(mandatory[i], MAX_STR_LEN);
    }

}
//---------------function correct_password-------------

/*this function finds the correct password

INPUT inp_password 
out_password
mandatory, 
inp_num_pass,
out_num_pass, 
mand_num_pass.

OUTPUT 
out_num_pass.
*/
void correct_password(char inp_password[][MAX_STR_LEN],
    char out_password[][MAX_STR_LEN],
    char mandatory[][MAX_STR_LEN], const int& inp_num_pass,
    int& out_num_pass, const int& mand_num_pass){
    int i = 0; 
    while (i < inp_num_pass) {
        if (If_mandatory(inp_password[i], mandatory, mand_num_pass)) {
            strcpy(out_password[out_num_pass], inp_password[i]);
            out_num_pass++;
        }
        i++;
    }
}
//--------------function If_mandatory--------------- 
/*this function finds if there password similar
 to  mandatory passwords

INPUT: inp_password, mandatory, mand_num_pass
output: true or false*/
bool If_mandatory(char inp_password[], char mandatory[][MAX_STR_LEN],
    int mand_num_pass) {

    bool mand = false; 
    for (int i = 0; i < mand_num_pass; i++) {
        mand = false;
        for (int j = 0; j < MAX_STR_LEN && mandatory[i][j] != '\0'; j++){
            if (same_char(inp_password, mandatory[i][j])) {
                mand = true;
                break;
            }
        }
        if (!mand)
            return false;
    }
    return true;
}

//------------function same_char---------------
/*this function finds if there  a char from the password similar
to char from mandatory password

INPUT: inp_password, mandatory
OUTPUT: true or false*/ 
bool same_char(char inp_password[], char mandatory){
 
    for (int i = 0; i < MAX_STR_LEN && inp_password[i] != '\0'; i++) {
        if (inp_password[i] == mandatory) {
            return true;
        }
    }
    return false;
}


//-------------function enter--------------- 
/*this function print the correct passwords

INPUT: out_password, out_num_pass
OUTPUT: out_password*/
void enter(char string[][MAX_STR_LEN], int& out_num_pass){ 
    for (int i = 0; i < out_num_pass; i++) { 
        cout << string[i] << endl;
    }
}



