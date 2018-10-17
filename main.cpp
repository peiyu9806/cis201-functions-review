/**
File: main.cpp
Description: Prompt the user for a string, and the program will calculate how many the letter a appears in that string and print the result.
Author: Pei-Yu Kuo
Email: peiyukuo9810@student.vvc.edu
Date Created: 10-16-2018
**/
#include<iostream>
#include<string>

using namespace std;

/**
   Will calculate the times "a" appears in the string
   @param s the the input 
   @return the counts of as
*/ 
int a_counts(string s)
{
    int count = 0;
    
    for (int i = 0; i < s.length(); i++)    // loop to print each character of the string. 
    {
        char c = s.at(i);   // assign c to the ASCII code of whatever the character at i position of the string 
        
        if(c == 'a' || c == 'A')    // if c is equal to the ASCII code of a or A, the count increases
        {
            count ++;
        }
    }
    return count;
}

int main()
{
    string input;
    cout << "Please enter anything.";
    getline(cin,input);
   
    cout << "There are " << a_counts(input) << " counts of 'a's in the string" << endl;
    
    return 0;
}
