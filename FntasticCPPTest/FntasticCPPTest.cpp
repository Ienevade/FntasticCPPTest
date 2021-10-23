#include <iostream>
#include <iso646.h>
#include <locale>
#include <string>
using namespace std;

int main()
{
    string line;
    string newline = ("");
    getline(cin,  line);
    for(int i=0;i<size(line); i++)
    {
        if (count(line.begin(), line.end(),line[i])>1 or (count(line.begin(), line.end(),toupper(line[i]))>1) or
            (count(line.begin(), line.end(),tolower(line[i]))>1))
        
            newline +=")";
        
        else
            newline +="(";
    }
    cout<<newline;
    return 0;
}
