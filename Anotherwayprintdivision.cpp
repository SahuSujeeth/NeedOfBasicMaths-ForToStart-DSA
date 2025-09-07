#include <iostream>
#include <math.h>
#include <vector>
#include <bits/stdc++.h>

using namespace std;
void printDivision(int n)
{
    vector<int> v;
    // 6 * 6 <= 36 true we can write like this instead of i < sqrt(n)...
    // 7 * 7 <= 36 false
    // O(sqrt(n))
    for (int i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            v.push_back(i);

            if ((n / i) != i)
            {
                v.push_back(n / i);
            }
        }
    }
    // O(no of factors * log(no of factors))
    sort(v.begin(), v.end());
    // O(number of factors)
    for (auto it : v)
    {
        cout << it << " ";
    }
}

int main()
{
    int n;
    cin >> n;
    printDivision(n);

    return 0;
}