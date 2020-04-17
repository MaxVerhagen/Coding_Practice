#include <iostream>
using namespace std;

int num_ways(int N){
	int ways =0, ways2 = 0;
	if(N==0 || N==1){
		return 1;
	}
	return num_ways(N-1)+num_ways(N-2);
}

int x , a[1000];
void array_maker(){
	cout << "Number of step sizes: ";
	cin >> x;
	cout << "Step sizes: ";
	for(int i=0; i<x; i++){
		cin >> a[i];
	}
}


int num_ways_complex(int N){
	int ways =0;
	if(N==0){
		return 1;
	}
	for(int i=0; i<x; i++){
		if(N>=a[i]){
			ways += num_ways_complex(N-a[i]);
		}
	}
	return ways;
}

int main()
{	
	int n;
	cout << "Number of stairs: " ;
	cin >> n;
	cout << "Ways: "<< num_ways(n) << endl;

	//array_maker();
	//cout << "Complex Ways: "<< num_ways_complex(n) << endl;
}


