#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int duplicate = n;
    int sum = 0;
    int count = 0;
    int temp = n;
    while (temp > 0)
    {
        // int lastDigit=n%10;
        count = count + 1;
        temp /= 10;
    }
    temp = n;

    while (temp > 0)
    {
        int lastDigit=temp % 10;
        sum = sum + (pow(lastDigit, count));
        temp /= 10;
    }

    if (duplicate == sum)
    {
        cout << "It's a Armstronger Number";
    }
    else
    {
        cout << "It's not a Armstronger Number";
    }

    return 0;
}