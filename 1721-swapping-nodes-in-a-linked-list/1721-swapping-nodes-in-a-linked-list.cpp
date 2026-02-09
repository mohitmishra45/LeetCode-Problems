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
    ListNode* swapNodes(ListNode* head, int k) {
        int n=0;
        ListNode *temp=head;
        while(temp!=NULL)
        {
            n++;
            temp=temp->next;
        }
        ListNode *prevX=NULL;
        ListNode *currX=head;
        ListNode *prevY=NULL;
        ListNode *currY=head;
        
        if(k>n) return head;
        for(int i=1;i<k;i++)
        {
            prevX=currX;
            currX=currX->next;
        }
        
        for(int i=1;i<n-k+1;i++)
        {
            prevY=currY;
            currY=currY->next;
        }

        if(prevX!=NULL) prevX->next=currY;
        else head=currY;

        if(prevY!=NULL) prevY->next=currX;
        else head=currX;

        ListNode *t=currX->next;
        currX->next=currY->next;
        currY->next=t;
        return head;
    }
};