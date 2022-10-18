#include<iostream>
using namespace std;

int main(){
	string studentNames[5] = {"Noaman","Arslan","Hina","Faisal","Umair"};
	
	//name anly gives us the address of the first element of the array
	cout<<studentNames<<endl;
	
	//use indexes
	cout<<studentNames[2]<<endl;
	
	
	
	//for loop
	for(int i=0;i<11;i++){
		cout<<i<<endl;
	}
	
	//traverse array using for loop
	for(int i =0;i<5;i++){
		cout<<studentNames[i]<<endl;
	}
	
	//using While loop
	int counter = 0;
	while(counter < 5){
		cout<<studentNames[counter]<<endl;
		counter++;
	}
	
	//size of array
	cout<<"Size of studentNames array = "<<sizeof(studentNames)<<endl;
	cout<<"Size of studentNames array = "<<sizeof(studentNames)/sizeof(string)<<" Elements."<<endl;
	
	//change Element at particular address indexes
	cout<<studentNames[2]<<endl;
	studentNames[2] = "Dummy";
	cout<<studentNames[2]<<endl;
	
	
	return 0;
}
