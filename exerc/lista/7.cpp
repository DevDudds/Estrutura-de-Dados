#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;
char * novoArrayConc(char *s1, char *s2);
int main()
{
char a[20], b[20], *n;
gets(a);
gets(b);
n = novoArrayConc(a, b);
cout << n << endl;
system("PAUSE");

return 0;
}
char * novoArrayConc(char *s1, char *s2)
{
char string[40];
int i = 0;
while(*s1){
string[i] = *s1;
i++;
s1++;
}
while(*s2){
string[i] = *s2;
i++;
s2++;
}
string[i] = '\0';
return string;
}
