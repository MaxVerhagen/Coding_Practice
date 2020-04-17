#include <iostream>
using namespace std;

string solution(string time){
	if(time[4]=='?'){
		time[4]='9';
	}

	if(time[3]=='?'){
		time[3]='5';
	}

	if(time[0]=='?'&&time[1]=='?'){
		time[0]='2';
		time[1]='3';
	}else if(time[0]=='?'&&time[1]>3){
		time[0]='1';
	}else if(time[0]=='2'&&time[1]=='?'){
		time[1]='3';
	}else{
		time[1]='9';
	}

	cout << time << endl;
	return time;
}	

int main(){
    solution("23:5?");// 23:59
    solution("2?:22");// 23:22
    solution("0?:??");// 09:59
    solution("1?:??");// 19:59
    solution("?4:??");// 14:59
    solution("?3:??");// 23:59
    solution("??:??");// 23:59
    solution("?4:5?"); //14:59
    solution("?4:??"); //14:59
    solution("?3:??"); //23:59
    solution("23:5?"); //23:59
    solution("2?:22"); //23:22
    solution("0?:??"); //09:59
    solution("1?:??"); //19:59
    solution("?4:0?"); //14:09
    solution("?9:4?"); //19:49
}