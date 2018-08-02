#include <iostream>
#include <cstdlib>
#include <ctime>
#include <fstream>
#include <string>


using namespace std;

int main()
{
    srand ( time ( NULL ) );

    int answer;

    for ( int j = 0; j < 5; j++ )
    {

        ofstream input ( "tests\\0" + to_string(j));
        ofstream output ( "tests\\0"+ to_string(j) +".a");

        int N;
        N = rand() % 6 + 5;

        cout << "N = " << N << endl;
        input << N << endl;

        int a[N];

        for ( int i = 0; i < N; i++ )
        {
            a[i] = 1 + rand() % 20;

            cout << a[i] << " ";
            input << a[i] << " ";
        }

        cout << endl << "answer: ";
        cin >> answer;
        output << answer;

        input.close();
        output.close();
    }
    return 0;
}