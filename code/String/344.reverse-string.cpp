#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void reverseString(vector<char>& s) {
        int len = s.size();
        int start = 0;
        int end = len -1;

    if(len >= 1) {
        while(start < end){
            swap(s[start], s[end]);
            start++;
            end--;
        }
    }
    }
};


