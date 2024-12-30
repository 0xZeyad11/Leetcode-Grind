const map<char, char> myMap = {{'[', ']'}, {'{', '}'}, {'(', ')'}};

class Solution {
public:
    bool isValid(string s) {
        stack<char> myStack;
        for (char ch : s) {
            if (myMap.find(ch) != myMap.end()) {
                myStack.push(ch);
            } else {
                if (!myStack.empty()) {
                    if (myMap.at(myStack.top()) == ch) {
                        myStack.pop();
                    }else return false; 
                }else return false ;
            }
        }
            return myStack.empty();
        }
    };
