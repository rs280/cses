#include <bits/stdc++.h>

using namespace std;

long long N;

int main(){
    cin >> N;
    while(N > 1){
        cout << N << " ";
        if(N % 2 == 0) N /= 2;
        else N = N * 3 + 1;
    }
    cout << 1 << endl;
}