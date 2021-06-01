#include<bits/stdc++.h>
using namespace std;


int solve(vector<int> a, int idx, int sum1,int sum2,int k,int cnt){
    if(sum1>=k && sum2>=k){
        return cnt;
    }
    if(idx==-1) return -1;

    int x1=-1,x2=-1;
    if(sum2>k && sum1<k) x1=solve(a,idx-1,sum1+a[idx],sum2,k,cnt+1);
    else if(sum1>k && sum2<k) x2=solve(a,idx-1,sum1,sum2+a[idx],k,cnt+1);
    else{
        x1=solve(a,idx-1,sum1+a[idx],sum2,k,cnt+1);
        x2=solve(a,idx-1,sum1,sum2+a[idx],k,cnt+1);
    }
    return x2==-1?x1:x2;
}

// CODECHEF JAN_LONG_2021 WATCHING CPL (3RD DIV.)

int main(){
        
        int t;
        cin>>t;
        while(t--){
            int n,k;
            cin>>n>>k;
            vector<int> a(n,0);
            for(int i=0;i<n;i++) cin>>a[i];
            int sum1=0,sum2=0;
            int ans = solve(a,n-1,sum1,sum2,k,0);
            cout<<ans<<endl;
        }

        return 0;
}
