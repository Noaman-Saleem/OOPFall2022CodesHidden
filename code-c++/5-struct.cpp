#include<iostream>
using namespace std;

//Struct
struct student{
	string name;
	int roll_no;
};

int main(){
	student s1;
	s1.name="Ali";
	s1.roll_no=111;
	
//	cout<<s1.name<<endl;
//	cout<<s1.roll_no<<endl;
	
	student s2;
	s2.name="Faisal";
	s2.roll_no=222;
	
//	cout<<s2.name<<endl;
//	cout<<s2.roll_no<<endl;
	
//	cout<<&s2<<endl;
	
	student s[3];
	
//	cout<<s<<endl;
	
//	s[0].name="Umair";
//	s[1].name="Anam";
//	s[2].name="Faizan";
//	
//	for(int i=0;i<3;i++){
//		cout<<s[i].name<<endl;
//	}


//	student* sptr=&s1;
//	cout<<sptr->name<<endl;

	student* sptr= new student;
	sptr->name="Zain";
	cout<<sptr->name<<endl;
	
	return 0;
}
