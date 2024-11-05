class Solution {
public:
    bool rotateString(string s, string goal) {
       if((int)s.size() != (int)goal.size()) return false ; 
       for(int i = 0  ; i < (int)goal.size() ; ++i){
            shift(s) ; 
            if(s == goal) return true ;  
            cout<< s<<'\n' ; 
       } 
       return false ; 
    }
private:
    void shift(string &str){
            char ch = str[0] ; 
            str.push_back(ch) ; 
        for(int i =1  ; i <= (int)str.size() ; ++i){
            str[i-1] = str[i] ; 
        }
        str.pop_back() ; 
    }
};