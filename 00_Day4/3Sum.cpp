#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> threeSum(vector<int> &nums)
{

    // brute force-----------------

    // int n = nums.size();
    // set<vector<int>> st;
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = i + 1; j < n; j++)
    //     {
    //         for (int k = j + 1; k < n; k++)
    //         {
    //             if (nums[i] + nums[j] + nums[k] == 0)
    //             {
    //                 vector<int> temp = {nums[i], nums[j], nums[k]};
    //                 sort(temp.begin(), temp.end());
    //                 st.insert(temp);
    //             }
    //         }
    //     }
    // }
    // return vector<vector<int>>(st.begin(), st.end());

    vector<vector<int>> ans;
    int n = nums.size();
    sort(nums.begin(), nums.end());

    for (int i = 0; i < n; i++)
    {
        if (i > 0 && nums[i] == nums[i - 1])
            continue; // skip duplicates
        int j = i + 1;
        int k = n - 1;
        while (j < k)
        {
            int sum = nums[i] + nums[j] + nums[k];
            if (sum < 0)
            {
                j++;
            }
            else if (sum > 0)
            {
                k--;
            }
            else
            {
                ans.push_back({nums[i], nums[j], nums[k]});
                j++;
                k--;
                while (j < k && nums[j] == nums[j - 1])
                    j++; // skip duplicates
                while (j < k && nums[k] == nums[k + 1])
                    k--; // skip duplicates
            }
        }
    }
    return ans;
}

int main()
{
    int n;
    cout << "Enter the size" << endl;
    cin >> n;
    vector<int> nums(n);
    cout << "Enter the elements" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    vector<vector<int>> result = threeSum(nums);
    cout << "The triplets are: " << endl;
    for (const auto &triplet : result)
    {
        cout << "[ ";
        for (int num : triplet)
        {
            cout << num << " ";
        }
        cout << "]" << endl;
    }
    return 0;
}