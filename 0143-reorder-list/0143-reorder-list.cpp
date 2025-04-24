/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    void reorderList(ListNode* head) {
       vector<ListNode*> nodes ; 
       ListNode* node = head ; 

       while(node){
           nodes.push_back(node) ;  
           node = node->next ; 
       } 
       node = head; // reset node to head again

       int i = 0 , j = nodes.size()-1 ; 
       while(i < j){
        nodes[i]->next = nodes[j] ; 
        i++ ; 
        nodes[j]->next = nodes[i] ; 
        j--; 
       }
       nodes[i]->next = nullptr ; 
    }
};