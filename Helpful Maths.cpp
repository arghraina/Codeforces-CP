#include<iostream>
#include<cstring>
using namespace std;

int main() {
    string s;
    cin >> s;
    if(s.length()>=2){
	
    for (int i = 0; i < s.length(); i += 2) {
        for (int j = 0; j < s.length() - 2; j += 2) {
            if (s[j] > s[j + 2]) {
                char temp = s.at(j);
                s.at(j) = s.at(j + 2);
                s.at(j + 2) = temp;
            }
        }
    }
    cout << s;
}
    else if(s.length()==1){
    	cout<<s;
	}
    return 0;
}
