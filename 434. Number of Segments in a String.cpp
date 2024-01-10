class Solution {
public:
    int countSegments(string s) {
        stringstream ss(s);
        string tame;
        int count=0;
        while(ss >> s)
            count++;
        return count;
    }
};
