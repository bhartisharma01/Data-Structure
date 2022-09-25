//Given the head of a singly linked list, return true if it is a palindrome or false otherwise.



class Solution {
public:
ListNode *reverseList(ListNode *ptr)
{

    ListNode *pre = NULL;
    ListNode *nex = NULL;
    while (ptr != NULL)
    {
        nex = ptr->next;
        ptr->next = pre;
        pre = ptr;
        ptr = nex;
    }
    return pre;
}
bool isPalindrome(ListNode *head)
{
    ListNode *slow = head;
    ListNode *fast = head;
    while (fast->next != NULL && fast->next->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    slow->next = reverseList(slow->next);
    slow = slow->next;
    ListNode *dummy = head;

    while (slow != NULL)
    {
        if (dummy->val != slow->val)
            return false;
        dummy = dummy->next;
        slow = slow->next;
    }
    return true;
}
}
;

// Time Complexity: O(N/2)+O(N/2)+O(N/2)

// Reason: O(N/2) for finding the middle element, reversing the list from the middle element, and traversing again to find palindrome respectively.

// Space Complexity: O(1)