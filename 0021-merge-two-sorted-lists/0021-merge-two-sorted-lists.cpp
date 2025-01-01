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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
       vector<int> mergedList = merge(list1 , list2) ;
       return generateList(mergedList, 0) ; 
    }

    vector<int> merge(ListNode* list1 , ListNode* list2){
        vector<int>st ; 
        while(list1){
            st.push_back(list1->val) ; 
            list1 = list1->next ; 
        }
        while(list2){
            st.push_back(list2->val) ; 
            list2 = list2->next ; 
        }

        sort(st.begin() , st.end()) ; 
        return st ; 
    }
    ListNode* generateList(vector<int>& st , int i){
        if (i >= st.size()) return nullptr; 
        ListNode* node = new ListNode(st[i]); 
         node->next = generateList(st , i+1 ) ; 
         return node ;
    }
};