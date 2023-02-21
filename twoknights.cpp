#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int k;
    cin >> k;
    for (long long int n = 1; n <= k; n++)
    {
        cout << n * n * (n * n - 1) / 2 - 4 * (n - 1) * (n - 2) << endl;
    }
   
  return 0;
}