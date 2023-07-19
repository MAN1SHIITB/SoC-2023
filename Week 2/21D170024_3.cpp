#include <bits/stdc++.h>
using namespace std;
class Solution {
    private:
        int dop_n1(vector<int>& n1) {
            if (n1.size() == 0) {
                return 0;
            } else if (n1.size()/2 > n1.size() -1 && n1.size() > 1) {
                return n1[n1.size()/2 -1];
            } else {
                return n1[n1.size()/2];
            }
        }
        int dop_n2(vector<int>& n2) {
            if (n2.size() == 0) {
                return 0;
            } else if (n2.size() > 1){
                return n2[n2.size()/2 - 1];
            } else {
                return n2[n2.size()/2];
            }
        }

    public:
        double findMedianSortedArrays(vector<int>& n1, vector<int>& n2) {
            vector<int> all;
            all = n1;
            for (int i = 0; i < n2.size(); i++) all.push_back(n2[i]);
            std::sort(all.begin(), all.end());
            if (all.size() % 2 == 0) {
                return (double)(dop_n1(all)+dop_n2(all))/2;
            } else {
                return (double)dop_n1(all);
            } 
        }
};