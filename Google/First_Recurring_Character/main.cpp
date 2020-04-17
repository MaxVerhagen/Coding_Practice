
//input
#include <iostream>
using namespace std;

//handling data
#include <string>
#include <vector>

string input;
void solution(){
	cin >> input;
	vector<char> found; 
	for(int i = 0 ; i<input.size() ; i++)
	{	
		for(int k = 0; k<found.size() ; k++)
		{
			if(found[k]==input[i])
			{
				string s(1, found[k]);
				cout << s << "\n";
				return;
			}
		}
		found.push_back(input[i]);
	}
	cout << "null\n";
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t;
	int i=1;
	cin >> t;
	while(t--){
		cout << "test ID: #" << i << ": ";
		solution();
		i++;
	}


	return 0;
}