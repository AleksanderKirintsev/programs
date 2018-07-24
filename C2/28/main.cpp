#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    srand ( time ( NULL ) );
    const int N = 30;
    int a[N];
    double s = 0, min;

    for ( int i = 0; i < N; ++i )
        a[i] = 1 + rand() % 10; // ��������� ����� �� 1 �� 10

    for ( int i = 0; i < N; ++i )
        cout << a[i] << " ";
    cout << endl;

    for ( int i = 0; i < N; ++i )
        s += a[i];
    s = s / N;

    min = a[0];
    for ( int i = 0; i < N; ++i )
        if ( abs ( a[i] - s ) < abs ( min - s ) )
            min = a[i];

    cout  << min;

    return 0;

}
