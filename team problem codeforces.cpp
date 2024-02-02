#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n][3];
    for(int i=0;i<n;i++){
        for(int j=0;j<3;j++){
            cin>>arr[i][j];
        }
    }
    int a=0;
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=0;j<3;j++){
            sum+=arr[i][j];
        }
        if(sum>=2){
            a++;
        }
        else{
            continue;
        }
    }
    cout<<a<<endl;
    return 0;
}