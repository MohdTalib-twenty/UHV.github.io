# include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k
        cin>>n>>k
        vector<int>v(n);
        for(int i=0;i<n ;i++){
            cin>>v[i];
        }

        int sum=0,res=0;
        for(int i=0;i<n-1;i++){
            sum = (v[i]+v[i+1]);
            if(sum > k){
                int x= abs(sum-k);
                v[i+1]-=x;
                res += x;
            }
        }

        cout<<res<<endl;
    }
    return 0;
}