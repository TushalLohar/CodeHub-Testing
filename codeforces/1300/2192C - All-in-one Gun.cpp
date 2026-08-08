#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n, h , k;
        cin>>n>>h>>k;
        vector<long long> nums(n);
        for(int i=0;i<n;i++){
            cin>>nums[i];
        }

        vector<long long > prefix_sum(n+1 ,0);
        vector<long long> min_prefix_sum(n+1,LLONG_MAX);
        vector<long long> max_after_x(n+1 ,0);
        for(int i=0;i<n;i++){
            prefix_sum[i+1]=prefix_sum[i]+nums[i];
        }

        for(int i=0;i<n;i++){
            min_prefix_sum[i+1]=min(min_prefix_sum[i],nums[i]);
        }

        for(int i=n-1;i>=0;i--){
            max_after_x[i] = max(max_after_x[i+1], nums[i]);
        }
        
        long long sum=prefix_sum[n];

        long long answer=0;
        long long reload = (h-1)/sum;
        h-=reload*sum;
        answer+=reload*(n+k);
       

        for(int x=1;x<=n;x++){
            long long damage = prefix_sum[x];

            if(x<n){
                long long gain =max_after_x[x] - min_prefix_sum[x];
                if(gain>0){
                    damage+=gain;
                }
            }
            if(damage>=h){
                answer+=x;
                break;
            }


        }
        cout<<answer<<endl;






    }
}