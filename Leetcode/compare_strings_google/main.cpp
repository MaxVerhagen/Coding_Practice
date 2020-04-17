#include <iostream>
using namespace std;
//#include<bits/stdc++.h> 
#include <algorithm> 

int counter(string x)
{	
	int arr[26] = {0};
	sort(x.begin(), x.end());
	for(int i=0; i<x.size(); i++)
	{
		arr[(int)x[i]-97]++;
	}
	//distance(arr, max_element(arr, arr + 26)+97)
	return max_element(arr, arr + 26)[0];
}

int A_size[10000] , B_size[10000], sol[10000], M, N;
int solution(string A, string B){
	string temp = "" ;
	int a_c = 0, b_c = 0 ;

	for(int i=0; i<=A.size(); i++){
		if(A[i]==',' || i==A.size())
		{
			A_size[a_c]=counter(temp);
			a_c++;
			temp="";
		} else {
			temp += A[i];
		}
	}

	for(int i=0; i<=B.size(); i++){
		if(B[i]==',' || i==B.size())
		{
			B_size[b_c]=counter(temp);
			b_c++;
			temp="";
		} else {
			temp += B[i];
		}
	}

	for(int i=0; i<N; i++){
		for(int k=0; k<M; k++){
			if (A_size[k]<B_size[i]){
				sol[i]++;
			}
		}
	}

	for(int i=0; i<N; i++){
		cout << sol[i] << " ";
	}
	cout << "\n";
}


int main(){
	M = 4;
	N = 4;
	cout << "test ID: #1 : ";
	solution("abcd,aabc,bd,aaaa","aaa,aa,a,bbbbb");
}