#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int count = 0;
    // int count = (int)(log10(n)+1);// this is the shotcut of the count digit inn the extraction digit..

    while (n > 0)
    {
        int lastDigit = n % 10;
        count = count + 1;
        cout << lastDigit << " ";
        n = n / 10;
    }
    cout << endl;
    cout << count;

    return 0;
}