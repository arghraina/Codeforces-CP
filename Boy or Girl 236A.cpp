#include<iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    for(int i=0;i<s.length();i++){
        for(int j=i+1;j<s.length();j++){
        	if(s[j]==s[i]){
			  s[j]=48;
        }
      }
    }  
    int len=0;
    for(int i=0;i<s.length();i++){
    	if(s[i]=='0'){
    		continue;
		}
		else{
			len++;
		}
	}
    if(len%2==0){
        cout<<"CHAT WITH HER!";
    }
    else if(len%2!=0){
        cout<<"IGNORE HIM!";
    }
    return 0;
}