//including library
#include<iostream>
using namespace std;
//defining function that takes two values & returns the maximum
int maximum(int a,int b){
	if (a>b){
	return a;
	}
	else {
	return b;
	}
}
//defining main function
int main(){
	//defining variables
	int x,y;
	cout<<"enter the two numbers"<<endl;
	cin>>x>>y;
	cout<<"the maximum is"<<maximum(x,y)<<endl;
	}
