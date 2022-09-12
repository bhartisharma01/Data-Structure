// Given the head of a singly linked list, return the middle node of the linked list.

// If there are two middle nodes,return the second middle node.
// Input : head = [ 1, 2, 3, 4, 5 ] Output : [ 3, 4, 5 ]
// Explanation : The middle node of the list is node 3.

// Input : head = [ 1, 2, 3, 4, 5, 6 ] Output : [ 4, 5, 6 ]
// Explanation : Since the list has two middle nodes with values 3 and 4, we return the second one.

class Solution
{
public:
    ListNode *middleNode(ListNode *head)
    {
        // using count
        ListNode *temp = head;
        int cnt = 0;
        while (temp)
        {
            cnt++;
            temp = temp->next;
        }
        temp = head;
        for (int i = 0; i < cnt / 2; i++)
        {
            temp = temp->next;
        }
        return temp;
        // using tortoise-hare approach
        ListNode *fast = head;
        ListNode *slow = head;
        while (fast && fast->next)
        {
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }
};

// Naive approach
// Time complexity : o(N) +O(n / 2)
// Space complexity : O(1)

// Tortoise-hare approach
// Time complexity : O(n / 2)
// Space complexity : O(1)