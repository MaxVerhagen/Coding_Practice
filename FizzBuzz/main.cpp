//input
#include <iostream>
using namespace std;

//handling data
#include <string>



string fizzbuzz(int x, int mod, string word)
{
	if(x % mod == 0){
		return word;
	}
	return "";
}

int main()
{
	string output; 
	for(int i =1; i<=100; i++)
	{
		output = "";
		output += fizzbuzz(i, 3, "Fizz");
		output += fizzbuzz(i, 5, "Buzz");
		if(output=="")
		{
			output=to_string(i);
		}
		cout << output << endl;
	}

	return 0;
}
