#include<bits/stdc++.h>
using namespace std;

// this is comment

int main(){
    int T;cin>>T;
    while(T--){
       int n,m;cin>>n>>m;
       int **mat=new int*[n+1];
       for(int i=0;i<=n;i++){
       	mat[i]= new int[n+1];
       	for(int j=0;j<=n;j++) mat[i][j]=0;
       }
       for(int i=1;i<=m;i++){
       		int x,y;
       		cin>>x>>y;
       		mat[x][y]=1;mat[y][x]==1;
       } 
       bool *visited= new bool[n+1];
       for(int i=0;i<=n;i++) visited[i]=false;
       
       int result=0;
       queue<int> q;
       q.push(1);
       visited[1]=true;
       while(!q.empty()){
       		int curr=q.front();
       		q.pop();
       		result=min(result,
       		for(int i=1;i<=n;i++){
       			if(!visited[i]){
       				q.push(i);
       				visited[i]=true;
       			}
       		}	
       }
       

       cout<<result<<endl;
       delete [] visited;
       for(int i=0;i<=n;i++) delete [] mat[i];
       delete [] mat;
    }
    return 0;
}

