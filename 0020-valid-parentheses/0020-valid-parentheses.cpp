const map<char, char> myMap = {{'[', ']'}, {'{', '}'}, {'(', ')'}};

class Solution {
public:
    bool isValid(string s) {
        stack<char> myStack;
        for (char ch : s) {
            if (myMap.find(ch) != myMap.end()) {
                myStack.push(ch);
                cout<<"We found " <<ch<<'\n' ; 
            } else {
                if(myStack.empty() || myMap.at(myStack.top()) != ch) return false ; 
               else myStack.pop() ; 
            }
        }

        return myStack.empty();
    }
};