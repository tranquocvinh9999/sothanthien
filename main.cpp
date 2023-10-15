#include <bits/stdc++.h>

using namespace std;

int main() {
    long n;
    cin >> n;
    long mang[n];
    long k;
    long tachso;
    long res;
    for (int i = 0; i < n; i++){
        cin >> mang[i];
    }
    for (int i = 0; i < n; i++){
        long num = mang[i];
        while(num != 0){
            tachso = num % 10;
            k = __gcd(mang[i], tachso);
            num = num / 10;
        }
    if (k == 1){
        cout << "YES";
    }else {
        cout << "NO";
    }
    }
    return 0;
}
