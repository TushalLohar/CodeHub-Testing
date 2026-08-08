#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n , m ,k;
    cin>>n>>m>>k;

    vector<long long> nums(n+2);
    for(int i=1; i<=n; i++){
        cin>>nums[i];
    }
    vector<long long> l(m + 2), r(m + 2), d(m + 2);
    for (int i = 1; i <= m; i++) {
        cin >> l[i] >> r[i] >> d[i];
    }
    vector<long long> opeartion_count(m+3,0);
    for(int i=1;i<=k;i++){
        long long x,y;
        cin>>x>>y;
        opeartion_count[x]++;
        opeartion_count[y+1]--;


    }

    //prefix sum of opeartions count ....so we can get toatl opartions
    for(int i=1;i<=m; i++){
        opeartion_count[i]=opeartion_count[i]+opeartion_count[i-1];

    }

    vector<long long> diffrennce_array(n+3,0);
    for(int i=1;i<=m;i++){
        long long times=opeartion_count[i];
        if(times>0){
            long long total = times*d[i];
            diffrennce_array[l[i]]+=total;
            diffrennce_array[r[i]+1]-=total;
        }
    }
    //prefix sum on diffrence array and then adding the eleemnts to nums i.e main aaray
    for(int i=1;i<=n;i++){
        diffrennce_array[i]+=diffrennce_array[i-1];
        nums[i]+=diffrennce_array[i];
    }

    for(int i=1;i<=n;i++){
        cout<<nums[i]<<" ";
    }
    



    
}