#include <iostream>
using namespace std;
int main(){

    int *p[5], a[5], i;
    for (int i = 0; i < 5; i++){
        cin >> a[i];
        p[i] = &a[i];
    }
    cout<<endl;
    for (int i = 0; i < 5; i++)
        cout << p[i] << "\t\t"<<*p[i]<<endl;
    return 0;
}