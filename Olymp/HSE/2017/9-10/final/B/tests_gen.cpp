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

#define NLIM 50
#define AB 50
#define TLIM 7
int main() {
    int N, A[AB], B[AB], Aa[AB], Ba[AB];

    srand ( time ( NULL ) );

    for ( int t = 3; t < TLIM; t++ ) {
        N = NLIM - rand() % ( NLIM / 2 );
        for ( int i = 0; i < N; i++ ) {
            A[i] = 1 + rand() % AB;
            B[i] = 1 + A[i] + rand() % (AB - A[i]);
        }

        for (int i = 0; i < n - 1; i++)
            for (int j = 0; j < n - i - 1; j++){

        }

        cout << N << endl;
        for ( int i = 0; i < N; i++ )
            cout << A[i] << " " << B[i] << endl;
        cout << endl;
        //for ( int i = 0; i < N; i++ )
         //   cin >> Aa[i] >> Ba[i];

//        ofstream infile ( "tests\\" + to_string ( t % 10 ) + to_string ( t ) );
//        infile << N << endl;
//        for ( int i = 0; i < N; i++ )
//            infile << A[i] << " " << B[i] << endl;
//        infile.close();
//
//        ofstream afile ( "tests\\0" + to_string ( t % 10 ) + to_string ( t ) + ".a" );
//        for ( int i = 0; i < N; i++ )
//            afile << Aa[i] << " " << Ba[i] << endl;
//        afile.close();
   }


    return 0;
}
