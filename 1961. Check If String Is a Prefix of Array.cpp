class Solution {
public:
    bool isPrefixString(string s, vector<string>& words) {
        for(int i=0;i<words.size();i++){
            if(s.find(words[i])==0)
                s=s.substr(words[i].size(),s.size());
            else
                return false;
            if(!s.size())
                return true;
        }return false;
    }
};
