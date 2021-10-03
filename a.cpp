#include<bits/stdc++.h>

using namespace std;


int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n;
	cin>>n;
	vector<int> p;
	for(int i=0;i<n;i++){
		int a;cin>>a;
		int id = upper_bound(p.begin(),p.end(),a)- p.begin();
		if(id <p.size()){
			p[id]=a;
		}else{
			p.push_back(a);
		}
	}
	cout<<p.size()<<endl;
	
	
	return 0;
	
}     
/*
       Longest Non-decreasing subsequence   O(log(n)) fast sort,
Test case                    result

10
1 1 1 1 1 1 1 1 1 1          10

10
10 4 5 9 4 10 2 7 4 6        4

10
1 2 3 4 5 8 7 1 9 1          7

10
10 9 8 7 6 10 4 3 2 1        2

4
5 5 3 4                      2

4
2 9 2 4                      3

*/



