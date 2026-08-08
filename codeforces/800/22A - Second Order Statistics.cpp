#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int nums[n];
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    int smallest = INT_MAX;
    int second_smallest = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        if (nums[i] < smallest)
        {
            second_smallest = smallest;
            smallest = nums[i];
        }
        else if (nums[i] > smallest && nums[i] < second_smallest)
        {
            second_smallest = nums[i];
        }
    }
    if(n==1||second_smallest== INT_MAX){
        cout<<"NO"<<endl;
    }
    else{
    cout<<second_smallest<<endl;
    }
}