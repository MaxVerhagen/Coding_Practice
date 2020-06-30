
//input
#include <iostream>
using namespace std;

//handling data
#include <string>
#include <vector>
#include<numeric>


vector<int> solution(vector<int> A){
	int right = accumulate(A.begin(), A.end(), 0 );
	int left = 0 ;
	vector<int> v;
	for(int i=0; i < A.size()+1; i++)
	{
		if(left == right)
		{
			v.push_back(i-1);
		}
		left += A[i-1];
		right -= A[i];

	}
	
	return v;
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);

	vector<int> A{-1, 3, -4, 5, 1, -6, 2, 1};
	vector<int> v = solution(A);


	for(int i=0; i<v.size(); i++)
	{
		cout << v[i] << " ";
	}
	cout << endl;

	return 0;
}