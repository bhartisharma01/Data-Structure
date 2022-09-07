// Given the head of a singly linked list, reverse the list, and return the reversed list.

// Input: head = [1,2,3,4,5]
// Output: [5,4,3,2,1]

class Solution
{
public:
    ListNode *reverseList(ListNode *head)
    {
        //        Iterative method
        ListNode *curr = head;
        ListNode *prev = NULL;
        while (curr != NULL)
        {
            ListNode *temp = curr->next;
            curr->next = prev;
            prev = curr;
            curr = temp;
        }
        return prev;

        //         recursive method
        if (head == NULL || head->next == NULL)
            return head;
        ListNode *newHead = reverseList(head->next);
        ListNode *nextHead = head->next;
        nextHead->next = head;
        head->next = NULL;
        return newHead;
    }
};

// Time complexity : O(N)
// Space complexity : O(1)