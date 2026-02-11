class Solution {
public:

    ListNode* findKthNode(ListNode* head, int k) {
        while (head != NULL && k > 1) {
            head = head->next;
            k--;
        }
        return head;
    }

    ListNode* reverse(ListNode* head) {
        ListNode* prev = NULL;
        ListNode* curr = head;

        while (curr != NULL) {
            ListNode* nextNode = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nextNode;
        }
        return prev;
    }

    ListNode* reverseKGroup(ListNode* head, int k) {
        if (head==NULL || k == 1) return head;

        ListNode* temp = head;
        ListNode *prevLast=NULL;
        while (temp != NULL) {

            ListNode* kthNode = findKthNode(temp, k);

            if (kthNode == NULL) break;

            ListNode* nextNode = kthNode->next;
            kthNode->next = NULL;

            ListNode *new1=reverse(temp);

            if (temp == head)
                head =new1;
            else
                prevLast->next =new1;

            prevLast = temp;
            temp->next = nextNode;
            temp = nextNode;
        }

        return head;
    }
};
