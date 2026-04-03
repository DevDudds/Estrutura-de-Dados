#include <iostream>
#include <cstdlib>
#include <cstring>
using namespace std;
int main(){
    char a[20], *s;
    cin.getline(a, 20);
    s = a;
    for (int i = 0; i < s[i]; i++)
        cout << *(s+i);
    cout << endl;

    return 0;
}