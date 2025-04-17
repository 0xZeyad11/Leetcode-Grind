class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int> res(temperatures.size() , 0) ; 
        stack <int> container; 
        
        for(int i = 0 ; i < temperatures.size() ; ++i){
            while(!container.empty() && temperatures[i] > temperatures[container.top()]){
                int prev_idx = container.top() ; 
                container.pop() ; 
                res[prev_idx] = i - prev_idx;
            }
            container.push(i) ; 
        }
        return res ; 
    }

    
};