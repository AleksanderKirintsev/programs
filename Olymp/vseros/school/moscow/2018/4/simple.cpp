#include <iostream>
using namespace std;
int n, *a;
int main() {
// ���� ������ ������
    cin >> n;
    a = new int[n];
    for(int i = 0; i < n; i++)
        cin >> a[i];

//���� ���������� ��������������� ���������
    bool coupes[9];//1 - ���� ��������, 0 - ���� ������
    //��� ����� ��� ���������� ���������, �.�. �� ��������� ��� i-e ���� ��������� ��������, ���� coupes[i]==1
    int u[6] = {1,2,3,4,53,54},v[55]={};
    for(int i = 0; i < n; i++)
        v[a[i]] = 1;
    for(int i = 0; i < 9; i++){
        coupes[i] = 1;
        for(int j = 0; j < 6; j++)
            coupes[i]*=v[u[j]];
        for(int j = 0; j < 4; j++)
            u[j]+=4;
        u[4]-=2;
        u[5]-=2;
    }

//���� ��������� ��������������� ���������
    int mx = 0;
    for(int i = 0, tmp = 0; i < 9; i++)
            mx = max(tmp = (tmp+coupes[i])*coupes[i],mx);
    cout << mx;
    return 0;
}
