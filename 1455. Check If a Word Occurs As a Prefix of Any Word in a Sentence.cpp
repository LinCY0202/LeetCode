class Solution {
public:
    bool is_same(string a, string b, int s){
        for(int i=0;i<s;i++){
            if(a[i] != b[i])    
                return false;
        }return true;
    }
    int isPrefixOfWord(string sentence, string searchWord) {
        stringstream ss(sentence);
        string str;
        int count=1;
        while(ss >> str){
            if(str.size() >= searchWord.size()){
                if(is_same(str, searchWord, searchWord.size()))
                    return count;
            }
            count++;

        }
        return -1;
    }
};
