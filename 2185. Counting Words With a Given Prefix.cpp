class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int count=0;
        for(int i=0;i<words.size();i++){
            // int n=pref.size();
            // string tame=words[i].substr(0,n);
            // if(tame == pref)
            //     count++;
            if(words[i].find(pref) == 0)
                count++;
        }return count;
    }
};
