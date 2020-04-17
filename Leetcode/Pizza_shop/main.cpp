#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>
#include <cmath>
#include <math.h>

int topping[10000] , m, pizza[10000], n, x;
int solution(){
	//list of all topping prices
	cin >> n >> m >> x;
	for (int i=0; i<n; i++){
		cin >> pizza[i];
	}
	for (int i=0; i<m; i++){
		cin >> topping[i];
	}
	int closest = 0; 
	sort(topping, topping+m);
	sort(pizza, pizza+n);
	for(int l=0; l<n; l++){
		if(abs(pizza[l]-x)<abs(closest-x)){
			closest = pizza[l];
		}
		for(int i=0; i<m; i++){
			if(abs(pizza[l]+topping[i]-x)<abs(closest-x)){
				closest = pizza[l]+topping[i];
			}
			for(int k=i; k<m-1; k++){
				if(abs(pizza[l]+topping[i]+topping[k+1]-x)<abs(closest-x)){
					closest = pizza[l]+topping[i]+topping[k+1];
				}
			}
		}		
	}	
	cout << closest << "\n";
	return closest; 


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