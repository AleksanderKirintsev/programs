#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    srand ( time ( NULL ) );

    int N; // 4 �����
    const int MAXV = 10; // 4 �����
    N = 1 + rand() % 1000; // ��������� ����� �� 1 �� 1000

    int max, q = 1, a; // 12 ����

    max = 0;

    for ( int i = 0; i < N; i++ )
    {
        a = rand() % MAXV;// ��������� ����� �� 1 �� 10
        cout << a << " ";

        if ( a == max )
            q++;

        if ( a > max )
        {
            max = a;
            q = 1;
        }


    }
    cout << endl << N << endl;

    cout << q;

    return 0;
}
