#include <iostream>
using namespace std;

int gcd(int a, int b){
	if(a == 1 | b == 1)
		return 1;
	if(b == 0)
		return a;
	if(a == 0)
		return b;
	if(a > b)
		return gcd(a, a%b);
	else
		return gcd(b, b%a);
} 

int findLCM(int a, int b){
	return ((a*b)/gcd(a,b));
}

int main(){
/*	const int x = 10;
	unsigned int a[x];
	for(unsigned int i = 0 ; i < x; ++i)
		a[i] = i+1;
	for(int i = x; i > 1; --i)
		for(int j = i - 1 ; j > 1 ; --j)
			if(j != 1 && i % j == 0){
				a[i - 1] = 1;
				break;
			}				
		
	unsigned int num = 1;
	for(int i = 0 ; i < x; ++i)
		num *= a[i];
	cout << num << endl;*/

	//we need to take the lcm of numbers between 11 and 20, inclusive
	int a[11] = {11, 12, 13 ,14, 15, 16, 17, 18, 19, 20};
	long lcm = a[0];
	for(int i = 1; i < 11; ++i){
		lcm = findLCM(lcm, a[i]);
	}
	cout << lcm << endl;	

	return 0;
}
