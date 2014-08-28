#include <iostream>
using namespace std;

int main(){
	long num = 600851475143;
	//can we use the seive?
	for(int i = 2; i <= num ; ){
		//if i divides num, num = num/i; start again until we get 1 as the quotient. return that number	
		if(num%i == 0)
			num /= i;
		else
			++i;
		if(num == 1){
			cout << "Largest prime: " << i << endl;
			return i;
		}
		
	}

	return 0;
}
