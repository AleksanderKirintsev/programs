#include <iostream>

using namespace std;

int main() {
    long long int n, m, q1 = 0, q2 = 0; //q1 ���-�� ������������, q2 ���-�� �����������������
    int a,b;
    cin >> n >> m >> a >> b;

    if ( n >= m )
        cout << 0;
    else if ( b >= a * 4 )
        cout << ( m - n ) * a;
    else {
        q2 = ( m - n ) / 4;
        m = m - q2 * 4 - n;

        if ( a * m > b )
            q2++;
        else
            q1 = m;
        cout << q2 * b + q1 * a;
    }

    return 0;
}