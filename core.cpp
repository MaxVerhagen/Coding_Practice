
//input
#include <iostream>
using namespace std;

//handling data
#include <string>
#include <vector>

int a,b, c[10000]
void solver()
{
	//cin set amount of values
	cin >> a >> b;

	//cin array of values
	for (int i=0; i<a; i++){
		cin >> c[i];
	}

	//output
	cout << a << endl;
}

//int argc, char *argv[]
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t, i=1;
	cin >> t;
	while(t--)
	{	
		//format output
		cout << "Case #" << i << ": ";
		solve();
		i++;
	}

	return 0;
}


