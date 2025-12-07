// using two pointers

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str = "hello ! tejya kumbhar";

    int l = 0;
    int r = str.size() - 1;

    while (l < r)
    {
        swap(str[l], str[r]);

        l++;
        r--;
    }
    cout << str << endl;

    return 0;
}