#include <iostream>
#include <algorithm>
using namespace std;

int gcd(int a,int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int main() {
     int n,p;
    cin >> n;

     int a[n];
    for(int i = 0; i < n; i++)
        cin >> a[i];
    cin >> p;

    if( n == 1 && p % a[0] == 0) {
        cout << "YES";
        return 0;
    }

    for(int i = 0; i < n; i++)
        for(int j = i+1; j < n; j++)
            if(p % gcd(a[i],a[j]) == 0) {
                cout << "YES";
                return 0;
            }
    cout << "NO";
    return 0;
}
