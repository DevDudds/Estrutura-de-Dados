#include <iostream>
using namespace std;
int main(){

	int **a, *b, numero;
	cin>>numero;
	a = &b;
	b = &numero;
	cout<< *b << " " << b << " " << **a << " ";
	cout<< *a <<" " << a << endl;

	return 0;
}
