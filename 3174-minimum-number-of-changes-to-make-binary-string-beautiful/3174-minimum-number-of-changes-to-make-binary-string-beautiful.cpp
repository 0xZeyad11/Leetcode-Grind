class Solution {
public:
    int minChanges(string s) {
        int changes {0} ; 
        char ch = s[0] ; 
        for(int i = 1 ; i  <(int)s.size() ; i+=2){
            if(s[i] != ch) ++changes ; 
            ch = s[i+1] ; 
        }
        return changes ; 
    }
};