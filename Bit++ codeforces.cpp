#include<iostream>
#include<cstring>
using namespace std;
int main(){
	int arr[5][5];
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			cin>>arr[i][j];
		}
	}
	int r=0;
	int c=0;
	for(int i=1;i<6;i++){
		for(int j=1;j<6;j++){
			if(arr[i-1][j-1]==1){
				r=i;
				c=j;
			}
		}
	}
	int temp=arr[r-1][c-1];
	arr[r-1][c-1]=arr[2][2];
	arr[2][2]=temp;
	if(r<3 && c>3){
		r=3-r;
		c=c-3;
		cout<<r+c;
	}
	else if(r>3 && c>3){
		r=r-3;
		c=c-3;
		cout<<r+c;
	}
	else if(r>3 && c<3){
		r=r-3;
		c=3-c;
		cout<<r+c;
	}
	else if(r<3 && c<3){
		r=3-r;
		c=3-c;
		cout<<r+c;
	}
	else if(r==3 && c==3){
		cout<<0;
	}
	else if(r==3 && c>3){
		cout<<c-3;
	}
	else if(r==3 && c<3){
		cout<<3-c;
	}
	else if(r==3 && c>3){
		cout<<c-3;
	}
	else if(r==3 && c<3){
		cout<<3-c;
	}
	else if(c==3 && r>3){
		cout<<r-3;
	}
	else if(c==3 && r<3){
		cout<<3-r;
	}
	return 0;
}