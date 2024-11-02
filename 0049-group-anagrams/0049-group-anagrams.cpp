class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> final_answer = mptoSet(strs) ; 
        return final_answer;        
    }
private: 

    vector<vector<string>> mptoSet(vector<string>& strs){
        vector<vector<string>> final_answer ;
        map<string, vector<string>> mp ; 
        for (int i = 0 ; i < (int)strs.size() ; ++i){
            string word = generateKey(strs[i]) ; 
            mp[word].push_back(strs[i]) ; 
        }

        for(auto &i : mp){
            final_answer.push_back(i.second) ; 
        }

        return final_answer;
    }

    string generateKey(string word){
        string final_word ;
        sort(word.begin() , word.end()) ; 
        final_word  = word ;
        return final_word; 
    }

};

/*
* 
1. create a map with a key of the word after entering the set with  a value with all words that would has the same key
2.  eat , tea , ate => aet
map = > aet : [eat , tea ,ate]

for auto i : word[i] = > final answer .push_back (value)
*/