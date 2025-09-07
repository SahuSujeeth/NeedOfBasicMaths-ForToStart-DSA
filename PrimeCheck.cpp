#include <iostream>
#include <math.h>
#include <vector>
#include <bits/stdc++.h>

using namespace std;
void primeCheck(int n)
{
    int count = 0;

    for (int i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            count++;

            if ((n / i) != i)
            {
                count++;
            }
        }
    }
    if (count == 2)
    {
        cout << "True it's prime number";
    }
    else
    {
        cout << "it's not a prime number";
    }
}

int main()
{
    int n;
    cin >> n;
    primeCheck(n);

    return 0;
}