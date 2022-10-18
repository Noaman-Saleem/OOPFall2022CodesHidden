#include<iostream>
using namespace std;

int main(){
	//variables
	int age = 26;
	string name = "Noaman";
	char grade = 'A';
	bool isGraduated = true;
	float weight = 67.5;
	
	cout<<"My name is "<<name<<endl;
	cout<<"My age is "<<age<<endl;
	cout<<"My grads in Programming is "<<grade<<endl;
	cout<<"Am i Graduate "<<isGraduated<<endl;
	cout<<"I am fit man, having weight = "<<weight<<endl;
	
	cout<<endl;
	cout<<endl;
	cout<<endl;
	cout<<endl;
	
	//size of variables
	cout<<"Size of age variable (int) ---> "<<sizeof(age)<<" Bytes"<<endl;
	cout<<"Size of name variable (string) ---> "<<sizeof(name)<<" Bytes"<<endl;
	cout<<"Size of grade variable (char) ---> "<<sizeof(grade)<<" Bytes"<<endl;
	cout<<"Size of isGraduated variable (bool) ---> "<<sizeof(isGraduated)<<" Bytes"<<endl;
	cout<<"Size of weight variable (float) ---> "<<sizeof(weight)<<" Bytes"<<endl;
	
	cout<<endl;
	cout<<endl;
	cout<<endl;
	cout<<endl;
	
	//Input from user
	string stdName;
	cout<<"Enter your name dear Student : ";
	cin>>stdName;
	cout<<"Hello "<<stdName<<endl;
	
	
	
	return 0;
}
