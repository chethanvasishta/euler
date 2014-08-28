#include <iostream>
using namespace std;
void foo();
int main(){
	foo();
	return 0;
}

void foo(){
	int a = 1, c = 0, z;
	int b = a;
	while(c < 10){
		z = a + b;
		a = b;
		b = z;
		if(z%2 == 0){
			cout << z << " ";
			++c;
		}
	}
	cout << endl;
}
