#include <iostream>
#include <cmath>
#include <math.h>
#include <algorithm>
using namespace std;

int N , s[10000];

int solution(){
	cin >> N;
	for (int i=0; i<N; i++){
		cin >> s[i];
	}
	sort(s, s+N);
	int load_a=0, load_b=0, back=0, load_c=0, load_d=0;
	bool ab =false, aa = true;
	for(int i=0; i<N-back; i++){
		if(load_a<=load_b){
			if(aa){
				load_a+=s[i];
				aa=false;
			}else{
				load_a+=s[i-back];
				aa=true;
				back++;
			}
		}else{
			if(ab){
				load_b+=s[i];
				aa=true;
			}else{
				load_b+=s[i-back];
				aa=false;
				back++;
			}
		}
	}


	cout << abs(load_a-load_b) << "\n";
	return abs(load_a-load_b);
}



int main(){
		ios::sync_with_stdio(0);
	cin.tie(0);

	int t, i=1;
	cin >> t;
	while(t--)
	{	
		//format output
		cout << "Case #" << i << ": ";
		solution();
		i++;
	}

	return 0;
}