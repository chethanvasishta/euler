#include <iostream>
using namespace std;

int main(){
	int a = 1, b = 2;
	int max = 4000000, fib = 0;
	long sum = 2;
	while(fib < max){
		fib = a + b;
		a = b;
		b = fib;
		if(fib % 2 == 0)
			sum += fib;
	}
	cout << sum << endl;
	return 0;
}
