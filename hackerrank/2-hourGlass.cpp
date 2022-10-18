#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int arr[100][100];
int sum(int stx , int sty){
    return arr[stx][sty] + arr[stx][sty+1] + arr[stx][sty+2] + arr[stx+1][sty+1] + arr[stx+2][sty] + arr[stx+2][sty+1] + arr[stx+2][sty+2];
    
}
int main() {
    int ans = -100;
    for(int i = 0 ; i < 6 ; i++){
        for(int j = 0 ; j < 6 ; j++){
            arr[i][j]= i * j ;
        }
    }
    
    for(int i = 0 ; i < 6 ; i++){
        for(int j = 0 ; j < 6 ; j++){
            cout << arr[i][j]<<" ";
        }
        cout<<endl;
    }
    
    cout<<"Magix Box Sums are :"<<endl;
    
    for(int i = 0 ; i < 4 ; i++){
        for(int j = 0 ; j < 4 ; j++){
            ans = max(ans , sum(i,j));
            cout<<ans<<" ";
        }
        cout<<endl;
    }
    cout<<"Maximum Sum is : ";
    cout << ans << endl;
    return 0;
}
