#include<iostream>
using namespace std;


int main(){
    int* ptr;
    ptr = new int;
    // cout<<ptr<<endl;
    // ptr = 55;   wrong
    *ptr = 66;
    cout<<*ptr<<endl;
	return 0;
}
