/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(!head) return false; 
        vector<ListNode*> nums ; 
        ListNode* current_node = head ; 
        cout<<current_node << '\n' ; 
        current_node = head; 
        while(current_node){
            if(!nums.empty()){
                if(found_number(nums,current_node)) return true ; 
            }
            nums.push_back(current_node) ; 
            current_node = current_node->next; 
        }


        return false ;
    }

    bool found_number(vector<ListNode*>& nums  ,ListNode* val){
        for (int i = 0 ; i < nums.size() ; ++i){
            if(nums[i] == val) return true ;
        }
        return false; 
    }
};