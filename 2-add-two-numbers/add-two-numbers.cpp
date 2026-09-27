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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        struct ListNode* head=NULL;
        struct ListNode* tail=NULL;
        int digit=0,carry=0;
        while(l1!=NULL || l2!=NULL)
        {
            if(l1==NULL)
            {
                l1=new ListNode(0);
            }
            else if(l2==NULL)
            {
                l2=new ListNode(0);
            }
            digit=(l1->val + l2->val+carry)%10;
            carry=(l1->val + l2->val + carry)/10;
            ListNode* newn=new ListNode(digit);
            if(!head)
            {
                head=newn;
                tail=newn;
            }
            else
            {
                tail->next=newn;
                tail=newn;
                tail->next=NULL;
            }
            l1=l1->next;
            l2=l2->next;
            
        }
        if(carry !=0)
        {
            tail->next=new ListNode(carry);
            tail->next->next=NULL;
        }
        return head;
    }
};