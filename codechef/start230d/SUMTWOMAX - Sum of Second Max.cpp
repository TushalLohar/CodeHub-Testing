#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector < int > index(n);
        for (int i = 0; i < n; i++)
            index[i] = i;

        vector < int > nums(n);
        for (int i = 0; i < n; i++)
            cin >> nums[i];

        sort(index.begin(), index.end(), [ & ](int a, int b)
        {
            return nums[a] > nums[b];
        });

        set < int > st;
        st.insert(-1);
        st.insert(n);

        long long answer = 0;

        for (int i: index)
        {
            auto it = st.upper_bound(i);
            int right_1 = * it;
            int left_1 = * prev(it);
            int right_2 = (right_1 == n) ? n : * next(st.find(right_1));
            int left_2 = (left_1 == -1) ? -1 : * prev(st.find(left_1));

            long long count =
                (long long)(i - left_1) * (right_2 - right_1) +
                (long long)(left_1 - left_2) * (right_1 - i);

            answer += nums[i] * count;

            st.insert(i);
        }

        cout << answer << "\n";
    }

    return 0;
}