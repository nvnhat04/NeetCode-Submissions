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
        if(list1 == nullptr && list2==nullptr){
            return nullptr;
        }
        vector<int> tmp;
        while(list1 != nullptr){
            tmp.push_back(list1->val);
            list1 = list1->next;
        }
        while(list2 != nullptr){
            tmp.push_back(list2->val);
            list2 = list2->next;
        }
        sort(tmp.begin(), tmp.end());
        ListNode* res = new ListNode(tmp[0]);
        ListNode* curr = res;

        for(int i = 1; i < tmp.size(); i++){
            curr->next = new ListNode(tmp[i]);
            curr = curr->next;
        }

        return res;
    }
};
