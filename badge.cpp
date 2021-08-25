#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int n; cin>>n;
    int mat[n][2];
    for(int i=0;i<n;i++){
    int pi; cin>>pi;
    mat[i][0]=pi-1;  // next
    mat[i][1]=0;   // visits
    }
    for(int i=0;i<n;i++)
    { // start at i
        for(int i=0;i<n;i++) mat[i][1]=0; // reset
        bool done=false;
        int cur=i; mat[i][1]++;
        while(!done)
        {
            //cout<<mat[cur][0]<<' '<<mat[cur][1]<<" | ";
            if(mat[cur][1]==2){
                cout<<cur+1<<" ";
                //cout<<"done\n";
                done=1;
                break;
            }
            cur=mat[cur][0]; 
            mat[cur][1]++;
        }
    }
    cout<<'\n';
    return 0;
}