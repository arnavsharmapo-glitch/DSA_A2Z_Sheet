// Problem 5: For Loops
// Link: <https://takeuforward.org/plus/dsa/problems/for-loop?source=strivers-a2z-dsa-track>
// Difficulty: Easy
// Approach: Iterate from low to high, accumulate sum

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int forLoop(int low, int high) {
        int res = 0;
        for(int i = low; i <= high; i = i+1){
            res = res + i;
        }
        cout << res;
        return res;
    }
};