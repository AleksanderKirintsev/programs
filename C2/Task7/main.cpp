#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    srand ( time ( NULL ) );
    const int N = 30;
    int a[N], j, x;


    for ( int i = 0; i < N; ++i )
        a[i] = rand() % 100; // ��������� ����� �� 0 �� 100
    x = rand() % 100;// ��������� ����� 0 �� 100

    for ( int i = 0; i < N; ++i )
        cout << a[i] << " ";

    cout << endl;
    cout << x << endl;

    for ( int i = 0; i < N; ++i )
        if ( a[i] == x )
        {
            cout << i + 1;
            return 0;
        }

    cout << "No elements";
    return 0;
}
