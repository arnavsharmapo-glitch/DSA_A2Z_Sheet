// Problem 3: If ElseIf
// Link: <https://takeuforward.org/plus/dsa/problems/if-elseif?source=strivers-a2z-dsa-track>
// Difficulty: Easy
// Approach: Grade checking using else-if chain, ordered ascending with <= checks

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void studentGrade(int marks) {
        if(marks < 35){
            cout << "Fail";
        }
        else if(marks <= 49){
            cout << "Grade D";
        }
        else if(marks <= 69){
            cout << "Grade C";
        }
        else if(marks <= 89){
            cout << "Grade B";
        }
        else if(marks <= 100){
            cout << "Grade A";
        }
    }
};