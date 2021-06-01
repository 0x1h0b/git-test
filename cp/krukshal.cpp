#include <bits/stdc++.h>
using namespace std;

struct edges{
  int start;int end; int weight;
    
};

bool compare( edges a,edges b){
    return a.weight<b.weight;
}
int helper(int v,vector<int> &p){
    if(p[v]==v) return v;
    
    return helper(p[v],p);
}

int main(){
   int V, E;
   cin >> V >> E;
    edges a[E];
    for(int i=0;i<E;i++){
        cin>>a[i].start>>a[i].end>>a[i].weight;
    }
    sort(a,a+E,compare);
    vector<edges> output(V-1);
    vector<int> parent(V+1);
    for(int i=0;i<=V;i++) parent[i]=i;
    int count=0,i=0;
    while(count<V-1){
        edges current_edge= a[i];
        int src= helper(current_edge.start,parent);
        int dest=helper(current_edge.end,parent);
        if(src!=dest){
            output[count]=current_edge;
            count+=1;
            parent[src]=dest;
        }
        i+=1;
    }
    for(int i=0;i<V-1;i++){
        if(output[i].start <= output[i].end){
            cout<<output[i].start<<" "<<output[i].end<<" "<<output[i].weight<<endl;
        }else{
            cout<<output[i].end<<" "<<output[i].start<<" "<<output[i].weight<<endl;
        }
    }
    
   return 0;
}

