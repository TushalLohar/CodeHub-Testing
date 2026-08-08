#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> nums(n);
    int total=0;
    for(int i=0; i<n; i++){
        cin>>nums[i];
        total+=nums[i];
    }
    sort(nums.begin() , nums.end());

    int sum=0;
    int count =0;
    for(int i=n-1; i>=0; i--){
        sum = sum+nums[i];
        count++;
        if(sum>total-sum){
            break;
        }

    }
    cout<<count;

}