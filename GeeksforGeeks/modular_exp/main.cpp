#include <iostream>
#include <cmath>
#include <math.h>
using namespace std;

int x, y, p;

//mod using math.h
void solution()
{
	cin >> x >> y >> p;
	cout << (int)(pow(x,y)) % p << "\n";
}

//mod without using lib
void solution2()
{
	cin >> x >> y >> p;
	int sum = x;
	for(int i=0; i<y-1; i++)
	{
		sum = sum * x;
	}
	cout << sum % p << "\n";
}


//tests
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t;
	int i=1;
	cin >> t;
	while(t--){
		cout << "test ID: #" << i << ": ";
		solution2();
		i++;
	}
	return 0;
}