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
ListNode *Reverse(ListNode *curr,ListNode *prev)
{
    if(curr==NULL)
    {
        return prev;
    }
    ListNode *front=curr->next;
    curr->next=prev;
    return Reverse(front,curr);
}
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        //  l1=Reverse(l1,NULL);
        //  l2=Reverse(l2,NULL);
        
        ListNode *temp1=l1;
        ListNode *temp2=l2;
        ListNode *dummy=new ListNode(-1);
        ListNode *tail=dummy;
        int sum=0;
            int carry=0;
        while(temp1&&temp2)
        {
            sum=temp1->val+temp2->val+carry;
            tail->next=new ListNode(sum%10);
            carry=sum/10;
            temp1=temp1->next;
            temp2=temp2->next;
            tail=tail->next;
        }
        while(temp1)
        {
            sum=temp1->val+carry;
            tail->next=new ListNode(sum%10);
            temp1=temp1->next;
            tail=tail->next;
            carry=sum/10;
        }
        while(temp2)
        {
            sum=temp2->val+carry;
            tail->next=new ListNode(sum%10);
            temp2=temp2->next;
            tail=tail->next;
            carry=sum/10;
        }
        while(carry)
        {
            tail->next=new ListNode(carry%10);
            tail=tail->next;
            carry/=10;
        }
        // dummy=Reverse(dummy->next,NULL);
        return dummy->next;
    }
};
