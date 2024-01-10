class Solution {
public:
    string makeFancyString(string s) {
        std::ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
        s+="#";
        string ans="";
        int letters=1;
        for(int i=0;i<s.size()-1;i++){
            if(s[i]==s[i+1]){
                letters++;
            }else{
                if(letters>=2){
                    ans+=s[i];
                    ans+=s[i];
                }else{
                    ans+=s[i];
                }
                letters=1;
            }

        }return ans;
    }
};
