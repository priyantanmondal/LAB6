//including library
#include<iostream>
using namespace std;
//defining function that takes two values but doesn't return a value
void max(int a,int b,int &c){
	if (a>b){
	c=a;
	}
	else {
	c=b;
	}
}
//defining main function
int main(){
//declaring variables
	int x,y,z;
	cout<<"enter two numbers"<<endl;
	cin>>x>>y;
	z=max(x,y);
	cout<<"the maximum is"<<z;
	}
