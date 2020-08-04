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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* cur = head;
        ListNode* prev = nullptr;
        bool isDuplicate = false;
        while(cur!=nullptr)
        {
            if(cur->next!=nullptr)
            {
                if(cur->val==cur->next->val)
                {
                    cur=cur->next;
                    continue;
                }
            }
            if(!prev)
                prev=head=cur;
            else
            {
                prev->next=cur;
                prev=cur;
            }
            cur=cur->next;
        }
        return head;
    }
};
