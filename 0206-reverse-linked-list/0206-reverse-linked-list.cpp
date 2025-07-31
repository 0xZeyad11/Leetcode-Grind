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
    ListNode* reverseList(ListNode* head) {
        if(!head) return {}; 
        vector<ListNode*> nd = BruteForce(head) ; 
        ListNode* res = connectNodes(nd) ; 
        return res;
    }


    vector<ListNode*> BruteForce(ListNode* node){
        vector<ListNode*> nd ; 
        while(node){
            nd.push_back(node) ; 
            node = node->next ;
        }

        int n = nd.size() ; 
        for(int i = 0 ; i < n/2 ; ++i){
            std::swap(nd[i] , nd[n-i-1]) ; 
        }
        return  nd ; 
    }

    void print_debug(vector<ListNode*> &nd){
        for(auto &i : nd){
            std::cout<<i->val<<'\t' ; 
        }
        std::cout<<'\n';
    } 

    ListNode* connectNodes(vector<ListNode*> &nd){
        for (int i  = 0 ; i < nd.size()  ; ++i){
            if(i == nd.size() - 1){
                nd[i]->next = nullptr; 
                break ; 
            }
            nd[i]->next = nd[i+1] ; 
        }

        return nd[0] ; 
    }
};