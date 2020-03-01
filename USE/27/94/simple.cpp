#include <iostream>
#include <cstdlib>
#include <ctime>
#include <fstream>
#include <string>
using namespace std;
#define ALIM 20
#define NLIM 10
int main() {
    int f = 22,t=2;
    int d[max(f,t)+1] = {0};
    d[f] = 1;
    for(int i = f; i > t; --i){
        d[i-1]+=d[i];
        d[i-3]+=d[i];
        d[i%4]+=(i > 4 ? d[i] : 0);

    }
    for(int i = f; i >= t; --i)
        cout << i << " <> " << d[i] << "\n";
    return 0;
}
