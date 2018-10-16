/*
File: main.cpp
Developer: David Serrano
Email: davidserrano@student.vvc.edu
Description: Program that asks user for a string an return the amount of 'a's or 'A's in it.
*/

#include<iostream>
#include<string>
#include<ctype.h>
using namespace std;


// Checks a string for the amount of 'a's inside of it.
// @param string the be checked.
int count_a_in_string(string s)
{
    int count = 0;
    for (int i = 0;i < s.size(); i++)
    {
        char character = tolower( s.at(i) );
        if(character == 'a')
        {
            count++;
        }
    }
    return count;
}

int main()
{
    string input;
    cout << "Please type a string: ";
    getline(cin, input);
    cout << "There are " << count_a_in_string(input) << " letter 'a's in the string you typed." << endl;
    return 0;
}
