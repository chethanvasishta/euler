#include <iostream>
using namespace std;

int main(){
	int x = 100;
	long sqrSum = 0;
	long sum = 0;
	for(int i = 1 ; i <= x ; ++i){
		sqrSum += i*i;
		sum += i;
	}
	cout<< sqrSum - (sum*sum) <<endl;
	return 0;
}
