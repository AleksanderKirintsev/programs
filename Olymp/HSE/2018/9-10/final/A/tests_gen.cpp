#include <iostream>
#include <cstdlib>
#include <ctime>
#include <fstream>
#include <string>
using namespace std;
/*
 1. ������������� ������� ��������� �������
 2. ������� ������� �� �����
 3. ��������� �����
 4. �������� ������� � ���� ��� ����������, ����� � ���� � ����������� .�
 5. ������� � ������ 1 ���� �� ������� ���������� ������
*/

#define NLIM 5
#define MLIM 10
#define TLIM 7
int main()
{
    int N, M, a[MLIM], ans;

    srand ( time ( NULL ) );

    for ( int t = 2; t < TLIM; t++ )
    {
        N = NLIM - rand() % ( NLIM / 2 );
        M = MLIM - rand() % ( MLIM / 2 );
        for ( int i = 0; i < M; i++ )
            a[i] = 1 + rand() % N;

        cout << N << " " << M << endl;
        for ( int i = 0; i < M; i++ )
            cout << a[i] << " ";
        cout << endl;

        cin >> ans;

        ofstream infile ( "tests\\0" + to_string ( t ) );
        infile << N << " " << M << endl;
        for ( int i = 0; i < M; i++ )
            infile << a[i] << " ";
        infile.close();

        ofstream afile ( "tests\\0" + to_string ( t ) + ".a" );
        afile << ans;
        afile.close();
    }


    return 0;
}
