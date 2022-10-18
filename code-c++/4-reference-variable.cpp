#include<iostream>
using namespace std;

int main(){
	//simple variable
	int x =6;
	cout<<x<<endl;
	
	//reference variable
	int &var1 = x;
	
	//altering value of reference variable
	var1=11;
	cout<<var1<<endl;
	
	cout<<x<<endl;
	
	return 0;
}
