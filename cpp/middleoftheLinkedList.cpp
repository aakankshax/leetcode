// Middle of the Linked List

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
    ListNode* middleNode(ListNode* head) {
        int len=0, mid;
        ListNode* temp=head;

        while(temp)
        {
            len++;
            temp=temp->next;
        }

        mid=len/2;

        for(int i=0; i<mid; i++)
            {
                head=head->next;
            }

            return head;

    }
};
