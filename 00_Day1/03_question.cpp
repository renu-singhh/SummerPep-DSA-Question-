// Minimum number of days to make the m Bouquets
// Input : bloomDay = [ 1, 10, 3, 10, 2 ], m = 3, k = 1 Output : 3 
// Explanation : Let us see what happened in the first three days.
// x means flower bloomed and _ means flower did not bloom in the garden.
// We need 3 bouquets each should contain 1 flower.
// You want to make m bouquets.To make a bouquet, 
// you need to use k adjacent flowers from the garden.


#include <bits/stdc++.h>
using namespace std;
bool bloom(const vector<int> &bloomDay, int day, int m, int k)
{
    int count = 0;    // Counter for consecutive flowers that can bloom
    int bouquets = 0; // Counter for bouquets made

    for (int i = 0; i < bloomDay.size(); i++)
    {
        if (bloomDay[i] <= day)
        {
            count++;
            if (count == k)
            {
                bouquets++;
                count = 0; // Reset count after forming a bouquet
            }
        }
        else
        {
            count = 0; // Reset count if the flower can't bloom
        }
    }
    return bouquets >= m; // Check if the required number of bouquets can be made
}

int minDays(vector<int> &bloomDay, int m, int k)
{
    if (m * k > bloomDay.size())
        return -1; // If not enough flowers to make m bouquets

    int start = *min_element(bloomDay.begin(), bloomDay.end());
    int end = *max_element(bloomDay.begin(), bloomDay.end());
    int ans = -1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (bloom(bloomDay, mid, m, k))
        {
            ans = mid;
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return ans;
}

int main()
{
    int size;
    cout << "Enter the number of flowers: ";
    cin >> size;

    vector<int> bloomDay(size);
    cout << "Enter the bloom days: ";
    for (int i = 0; i < size; i++)
    {
        cin >> bloomDay[i];
    }

    int m, k;
    cout << "Enter the number of bouquets: ";
    cin >> m;
    cout << "Enter the number of adjacent flowers required for each bouquet: ";
    cin >> k;

    int result = minDays(bloomDay, m, k);
    cout << "Minimum days required: " << result << endl;

    return 0;
}
