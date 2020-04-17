#include <iostream>
#include<bits/stdc++.h> 
using namespace std;

string a, b;
void solution(){
	cin >> a >> b; 
	sort(a.begin(), a.end());
	sort(b.begin(), b.end());
	if(a==b){
		cout << "same" << "\n";
	}
	else
	{
		cout << "not the same" << "\n";
	}
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