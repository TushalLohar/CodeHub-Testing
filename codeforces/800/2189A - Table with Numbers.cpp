#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        int n, h, l;
        cin >> n >> h >> l;

        vector<int> nums(n);
        for(int i = 0; i < n; i++) cin >> nums[i];

        int row = 0, column = 0, both = 0;

        for(int i = 0; i < n; i++){
            if(nums[i] <= h && nums[i] <= l){
                both++;
            }
            else if(nums[i] <= h){
                row++;
            }
            else if(nums[i] <= l){
                column++;
            }
        }

        int x = row + both;          
        int y = column + both;      
        int z = row + column + both; 
        int answer = min({x, y, z / 2});
        cout << answer << '\n';
    }
    return 0;
}
