#include<iostream>
using namespace std;

class Employee{
	public:
	string name;
	int salary;
	
	void signin();
	void calculate_salary();
};

void Employee::signin(){
	cout<<"Employee is signingin."<<endl;
}

int main(){
	Employee e1;
	e1.name="Ali";
//	cout<<e1.name<<endl;
//	e1.signin();
	
	Employee* e = new Employee;
//	e=&e1;
	e->name = "Arslan";
	cout<<e->name<<endl;
	
	return 0;
}
