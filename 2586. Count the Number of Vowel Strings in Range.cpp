class Solution {
public:
    int vowelStrings(vector<string>& words, int left, int right) {
        int count=0;
        for(int i=left;i<=right;i++){
            int s = words[i].length()-1;
            if((words[i][0]=='a' || words[i][0]=='e' || words[i][0]=='i' || words[i][0]=='o' || words[i][0]=='u') && (words[i][s]=='a' || words[i][s]=='e' || words[i][s]=='i' || words[i][s]=='o' || words[i][s]=='u')){
                count++;
            }
                
        }return count;
    }
};
