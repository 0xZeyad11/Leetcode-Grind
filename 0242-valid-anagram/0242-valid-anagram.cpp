class Solution {
public:
    bool isAnagram(string s, string t) {
        if((int)s.size() != (int)t.size()) return false;
        unordered_map <char , int> mp ; 

        for(int i =0 ; i  <(int)s.size() ; ++i){
            char first = s[i] ;
            mp[first]++ ; 
        }

        for(int i =0 ; i < (int)t.size() ; ++i){
            char current_char = t[i] ; 
            if(mp.find(current_char) != mp.end()){
                if (mp[current_char] >1 ){
                    mp[current_char]-- ; 
                }else{
                    mp.erase(current_char) ;
                }
            }
        }

        return mp.size() == 0; 
    
    }


};