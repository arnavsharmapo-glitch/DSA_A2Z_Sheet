// Problem 4: Switch Case
// Link: <https://takeuforward.org/plus/dsa/problems/switch-case?source=strivers-a2z-dsa-track>
// Difficulty: Easy
// Approach: Map day number (1-7) to weekday name using switch-case

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void whichWeekDay(int day) {
        switch (day) {
            case 1: 
                cout << "Monday"; 
                break;
            case 2: 
                cout << "Tuesday"; 
                break;
            case 3: 
                cout << "Wednesday"; 
                break;
            case 4: 
                cout << "Thursday"; 
                break;
            case 5: 
                cout << "Friday"; 
                break;
            case 6: 
                cout << "Saturday"; 
                break;
            case 7: 
                cout << "Sunday"; 
                break;
            default: 
                cout << "Invalid"; 
                break;
        }
    }
};