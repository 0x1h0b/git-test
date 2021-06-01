#include<bits/stdc++.h>

using namespace std;



int main(){
	
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		int cnt=0, n=s.length();
		for(int i=0;i<n;i++){
			if(s[i]=='1') cnt++; 
		}
		cout<<cnt<<endl;
	}

	return 0;
}


// 00000100101010101011