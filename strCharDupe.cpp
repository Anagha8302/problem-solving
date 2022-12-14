/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <bits/stdc++.h>

using namespace std;
void printDupe(string str)
{
    unordered_map<char,int>count;
    for(int i=0;i<str.length();i++)
    {
        count[str[i]]++;
    }
    for(auto it:count)
    {
        if(it.second>1)
        cout<<it.first<<",count="<<it.second<<"\n";
    }
}

int main()
{
    string str="test string";
    printDupe(str);
    return 0;
}
