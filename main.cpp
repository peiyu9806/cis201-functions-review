#include<iostream>
#include<string>

using namespace std;




int a_counts(char s)
{
    int count = 0;
    char c = 'a';
    if(s.at(0) == 'a')
    {
        for(i = 0; i <= s.length(s); i++)
        {
            count ++;
        }
    }
    return count;
}
int main()
{
    string s = "abca";
     
    cout << "There are " << a_counts(s) << "counts of a in the string." << endl;

    return 0;
}
