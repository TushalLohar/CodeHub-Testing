#include <iostream>
#include<vector>
#include <set>
#include <unordered_map>
using namespace std;
int main()
{
    long long n;
    cin >> n;
    long long C;
    cin >> C;

    vector<long long> start(n), end(n), cost(n);
    for (long long i = 0; i < n; i++)
    {
        cin >> start[i] >> end[i] >> cost[i];
    }
    // imp points rae only start and end+1
    set<int> imp_points; // nlogn
    for (int i = 0; i < n; i++)
    {
        imp_points.insert(start[i]);
        imp_points.insert(end[i] + 1);
    }
    // now mapping them from index 0
    unordered_map<int, int> mapping;
    int index = 0;
    for (auto x : imp_points)
    {
        mapping[x] = index;
        index++;
    }
    // now performing diffrence array on the mapped array
    vector<long long> diffrence_array(index + 1, 0);
    for (int i = 0; i < n; i++)
    {
        int index1 = mapping[start[i]];
        int index2 = mapping[end[i] + 1];
        diffrence_array[index1] += cost[i];
        diffrence_array[index2] -= cost[i];
    }
    // now doing prefix sum on that
    for (int i = 1; i <= index; i++)
    {
        diffrence_array[i] += diffrence_array[i - 1];
    }
    // now storing set in the vector
    vector<int> nums(imp_points.begin(), imp_points.end());
    long long ans = 0;
    for (int i = 1; i < nums.size(); i++)
    {
        long long span_of_the_cost = nums[i] - nums[i - 1];
        ans += min(diffrence_array[i - 1], C) * span_of_the_cost;
    }
    cout << ans << endl;
    ///T>C = nlogn
}