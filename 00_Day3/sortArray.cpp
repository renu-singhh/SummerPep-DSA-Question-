#include <bits/stdc++.h>
using namespace std;

// Correct insertion function definition
void insertion(vector<int> &nums, int temp)
{
    int n = nums.size();
    if (n == 0 || nums[n - 1] <= temp)
    {
        nums.push_back(temp);
        return;
    }
    int x = nums[n - 1];
    nums.pop_back();
    insertion(nums, temp);
    nums.push_back(x);
}

// Sorting function definition
void sorting(vector<int> &nums)
{
    if (nums.size() <= 1)
        return;
    int temp = nums[nums.size() - 1];
    nums.pop_back();
    sorting(nums);
    insertion(nums, temp);
}

int main()
{
    int n;
    cout << "Enter the size of array" << endl;
    cin >> n;
    vector<int> nums(n);
    cout << "Enter the elements of the array" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    sorting(nums);
    cout << "Sorted array:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << nums[i] << " ";
    }
    return 0;
}
