#include<iostream>

using namespace std;

int main()

{

    int n;
//    cout<<"Enter the size : ";
    cin>>n;
    
    int arr[1000];
    
    
    
    for(int i=0;i<n;i++){
//    	cout<<"Enter "<<i<<" index Element : ";
    	cin>>arr[i];
	}
 
//	n = sizeof(arr) / sizeof(int);
   
//   	cout<<"Old Array "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
   
    for(int i=0;i<n/2;i++)

    {
        int temp;

        temp=arr[i];

        arr[i]=arr[n-1-i];

        arr[n-1-i]=temp;
    }
	
	cout<<endl;
//	cout<<"Reversed Array "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;

}


