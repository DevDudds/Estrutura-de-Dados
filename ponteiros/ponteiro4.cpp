#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
    float *p, q[5];
    int i;
    p = q;
    for (int i = 0; i < 5; i++)
        cout << (p+i) << endl;
    cout<<endl;

    return 0;
}