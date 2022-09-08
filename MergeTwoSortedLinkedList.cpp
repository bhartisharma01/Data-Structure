// You are given the heads of two sorted linked lists list1 and list2.

// Merge the two lists in a one sorted list. The list should be made by splicing together the nodes of the first two lists.

// Return the head of the merged linked list
// Input: list1 = [1,2,4], list2 = [1,3,4]
// Output: [1,1,2,3,4,4]
// Example 2:

// Input: list1 = [], list2 = []
// Output: []
// Example 3:

// Input: list1 = [], list2 = [0]
// Output: [0]

class Solution
{
public:
    ListNode *mergeTwoLists(ListNode *list1, ListNode *list2)
    {
        if (list1 == NULL)
            return list2;
        if (list2 == NULL)
            return list1;

        if (list1->val > list2->val)
        {
            swap(list1, list2);
        }
        ListNode *res = list1;
        while (list1 != NULL && list2 != NULL)
        {
            ListNode *temp = NULL;

            while (list1 != NULL && list1->val <= list2->val)
            {
                temp = list1;
                list1 = list1->next;
            }

            temp->next = list2;
            swap(list1, list2);
        }

        return res;
    }
};

// Time Complexity :

// We are still traversing both lists entirely in the worst-case scenario. So, it remains the same as O(N+M) where N is the number of nodes in list 1 and M is the number of nodes in list 2.

// Space Complexity :

// We are using the same lists just changing links to create our desired list. So no extra space is used. Hence, its space complexity is O(1).