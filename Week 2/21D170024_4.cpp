#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    typedef long long ll;
    int smallestDistancePair(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        ll st = 0;
        ll en = 1e6;

        int ans = 0;

        auto fun = [&](int m){
            ll i = 0, j = 0, n = nums.size();
            ll count = 0;
            while(i<n){
                while(j<n and nums[j]-nums[i] <= m){
                    j++;
                }
                count += j-i-1;
                i++;
            }
            return count;
        };

        while(st<=en){
            ll m = st + (en-st)/2;

            ll count = fun(m);
            if(count<k){
                st = m + 1;
            }
            else{
                ans = m;
                en = m - 1;
            }
        }
        return ans;

    }
};