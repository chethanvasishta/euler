#include <iostream>
using namespace std;

bool isPalindrome(unsigned int x){
	int c = x%10; x = x/10;
	int b = x%10; x = x/10;
	int a = x%10; x = x/10;
	bool is = true;
	is = is && a == x%10;
	x = x/10;
	is = is && b == x%10;
	x = x/10;
	is = is && c == x%10;
	return is;		
}

int main(){
	bool is = isPalindrome(987789);
	unsigned int max = 0;
	for(unsigned int i = 999; i >= 100 ; --i)
		for(unsigned int j = i; j >= 100 ; --j){
			unsigned int x = i * j;
			if(isPalindrome(x) && x > max)
				max = x;			
		}		
	cout << max << endl;

	return 0;
}
