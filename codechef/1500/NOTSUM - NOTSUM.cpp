#include<bits/stdc++.h>
using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--){

        int n;
        cin >> n;

        vector<long long> nums(n);
        for(int i = 0; i < n; i++){
            cin >> nums[i];
        }

        vector<int> index(n);
        for(int i = 0; i < n; i++){
            index[i] = i;
        }

        sort(index.begin(), index.end(), [&](int x, int y){
            return nums[x] < nums[y];
        });

        int mini_1 = index[0];
        int mini_2 = index[1];
        int maxi = index[n-1];

        if(nums[mini_1] + nums[mini_2] != nums[maxi]){
            cout << mini_1 + 1 << " " << mini_2 + 1 << " " << maxi + 1 << endl;
        }
        else{

            int maxi_2 = index[n-2];

            if(nums[maxi] + nums[maxi_2] != nums[mini_1]){
                cout << maxi + 1 << " " << maxi_2 + 1 << " " << mini_1 + 1 << endl;
            }
            else{
                cout << -1 << endl;
            }

        }
    }
}