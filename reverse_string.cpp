//reverse the strin g

#include<iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;


int main()
{
    string str="shiban darling";

    stack<char> st;

    for(char c : str)
    {
        st.push(c);
    }
    cout << endl;

    str.clear();

    while(!st.empty())
    {
        str.push_back(st.top());
        st.pop();
    }
    cout << "string is : " << str << endl;

    return 0;
}