class Solution {
public:
    bool isPalindrome(string s) {
        string word =  process(s) ; 
        int l = 0 ; 
        int r  = (int)word.size()-1   ; 
        if(s.empty() || word.size() == 1) return true ; 
        while(l < r){
            if(word[l] != word[r]) return false;
            else{
                l++ ; 
                r-- ; 
            }
        }
        return true;
    }
private: 
    string process(string &s){
        string processed {}; 
        for(int i = 0  ; i < (int)s.size() ; ++i){
            if(!isalnum(s[i])) continue ; 
            else{
                processed += tolower(s[i]) ; 
            }
        }

        return processed ; 
    }
};