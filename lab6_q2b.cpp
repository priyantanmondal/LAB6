/*(By Reference) Goal is the same as above, but this time, the function that adds the numbers should be void, and takes a third, pass by reference parameter; then puts the sum in that.*/
#include<iostream>
using namespace std;
void addition(int num1,int num2,int &num3){
	num3=num1+num2;
}
int main(){
	int a,b,sum;
	cout<<"what is the value of a & b"<<endl;
	cin>>a>>b;
	addition(a,b,sum);
	cout<<sum;
}

