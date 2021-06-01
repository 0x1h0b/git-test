#include<bits/stdc++.h>

using namespace std;


int main(){

	
	int n,a;
	cin>>n>>a;
	int ar[n];
	for(int i=0;i<n;i++) cin>>ar[i];

	a--;
	int dist=0,cnt=0;
	while(dist<n){
		int idx1=dist+a , idx2=a-dist;
		bool f_found=false, b_found=false;
		if(idx1<n && ar[idx1]==1){
			f_found=true;
		}
		if(idx2>=0 && ar[idx2]==1){
			b_found=true;
		}

		if(f_found && b_found){
			if(idx1==idx2) cnt++;
			else cnt+=2;
		}
		else if(f_found && idx2<0) cnt++;
		else if(b_found && idx1>=n) cnt++;

		// cout<<"b_found : "<<b_found<<" f_found : "<<f_found;
		// cout<<" dist : "<<dist<<" cnt: "<<cnt<<endl;
		dist++;
	}
	cout<<cnt<<endl;

	return 0;
}

