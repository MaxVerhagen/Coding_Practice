#include <iostream>
#include <cmath>
#include <bits/stdc++.h> 
using namespace std; 


//calcs & compares bit
int bit(int first, int second){
	int Ftemp , Stemp, count = 0;
 	for(int i =31; i>=0; i--)
 	{
 		Ftemp = first >> i;
 		Stemp = second >> i;
 		if((!(Ftemp & 1)&&(Stemp & 1)) ||  ((Ftemp & 1)&&!(Stemp & 1)))
 		{
 			count++;
 		}
 	}
 	return count;
}

//sum total bit dif
int n, a[1000];
void solution()
{
	cin >> n;
	for (int i=0; i<n; i++){
		cin >> a[i];
	}
	int sum = 0 ;
	for(int i=0; i<n-1; i++)
	{
		for(int k=i+1; k<n; k++)
		{
			sum += 2*bit(a[i],a[k]);
		}
	}

	cout << sum << "\n";
}

//tests
int main()
{ 
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