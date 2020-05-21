#include <iostream>
using namespace std;
#include <algorithm> 



string solution(vector<string> A, int N){
	sort(A.begin(), A.begin()+N);
	int counter =0, most =0;
	string booked = "";
	for(int i=0; i<N-1; i++){
		if(A[i][0]=='-')
		{
			break;
		}
		if(A[i]==A[i+1])
		{
			counter++;
		}else{
			counter=0;
		}
		if(counter>most)
		{
			
			most = counter;
			booked = A[i];
		}

	}
	booked.erase(0,1);
	return booked; 
}

int main(){
	cout << solution({"+1A", "+3E", "-1A", "+4F", "+1A", "-3E"}, 6) << endl; // 1A
	cout << solution({"+1A", "+3E", "+3E", "+3E", "+1A", "-3E"}, 6) << endl; // 3E
	cout << solution({"-1A", "+2A", "+2A", "-1A", "-1A", "-1A"}, 6) << endl; // 2A
}