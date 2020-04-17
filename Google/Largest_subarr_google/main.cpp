#include <iostream>
#include <vector>
using namespace std;

vector<int> solution(vector<int> x, int K){
	//create new sub
	vector<vector<int>> a;
	vector<int> temp(K);
	vector<int> biggest(K);
	for(int i=0; i<x.size()-K+1; i++){
		copy(x.begin()+i,x.begin()+i+K,temp.begin());
		a.push_back(temp);
	}

	copy(temp.begin(), temp.end(), biggest.begin());
	for(int i=0; i<a.size(); i++){
		for(int k=0; k<K; k++){
			if(a[i][k]>biggest[k]){
				biggest.clear();
				copy(a[i].begin(), a[i].end(), biggest.begin());
			}else if(a[i][k]==biggest[k]){
				continue;
			}else{
				break;
			}
		}
	}
	
	cout << "Biggest sub-array: ";
	for(int k=0; k<K; k++){
		cout << biggest[k] << " ";
	}	
	cout << "\n";

	return biggest; 
}



int main(){
	solution({1,4,3,2,5},4);
	solution({5,5,3,5,5,4},3);
	return 0;
}