class Solution {
public:
    int evalRPN(vector<string>& tokens) {
       const vector<string> operators = { "+" , "-" , "/", "*" } ;  
       stack<string> container ; 
       int res {0} ; 

       for(auto i : tokens){
        if(ifOperator(i)){
            container.push(i)  ;
        }else {
             EvalStack(container , i);
        }
    }
    return stoi(container.top()) ; 
}

    
    bool ifOperator(const string &op){
        if(op.size() > 1 && op[0] == '-') return true ; 
        return isdigit(op[0]) ; 
    }

    void EvalStack(stack<string> &nums , const string& op){
        int right = stoi(nums.top()); nums.pop() ; 
        int left = stoi(nums.top()) ; nums.pop() ; 
        int res {0} ; 
        if(op == "+") res = left + right ; 
        if(op == "-") res = left - right ;
        if(op == "/") res = left / right ; 
        if (op == "*") res = left * right ; 

        nums.push(to_string(res)) ;         
    }

};