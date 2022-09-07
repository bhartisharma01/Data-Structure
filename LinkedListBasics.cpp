#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
    ~Node()
    {
        int value = this->data;
        if (this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
        cout << "Memory free for the value " << value << endl;
    }
};

void insertAtHead(Node *&head, int data)
{
    Node *temp = new Node(data);
    temp->next = head;
    head = temp;
}

void insertAtTail(Node *&tail, int data)
{
    Node *temp = new Node(data);
    tail->next = temp;
    tail = temp;
}

void insertAtPosition(Node *&tail, Node *&head, int pos, int data)
{
    Node *temp = head;
    Node *nodeToInsert = new Node(data);
    int count = 1;
    if (pos == 1)
    {
        insertAtHead(head, data);
        return;
    }

    if (temp->next == NULL)
    {
        insertAtTail(tail, data);
        return;
    }
    while (count < pos - 1)
    {
        temp = temp->next;
        count++;
    }

    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;
}

void deleteNode(int position, Node *&head, Node *&tail)
{
    Node *prev = head;
    Node *curr = head;
    //  deleting head node
    if (position == 1)
    {
        Node *temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }
    // deleting at particular position node
    else
    {
        Node *curr = head;
        Node *prev = NULL;
        // Node *tail = head;
        int cnt = 1;
        while (cnt < position)
        {
            prev = curr;
            curr = curr->next;
            cnt++;
        }
        prev->next = curr->next;
        // remove deleted node's pointer from the linked list's data
        curr->next = NULL;
        delete curr;
        // for updating tail pointer
        while (prev->next != NULL)
        {
            prev = prev->next;
            tail = prev;
        }
    }
}
void printLinkedList(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}
int main()
{
    Node *node1 = new Node(10);
    // cout << node1-> data << endl;
    // cout << node1-> next << endl;
    Node *head = node1;
    Node *tail = node1;
    cout << "inert at beginning" << endl;
    insertAtHead(head, 12);
    insertAtHead(head, 15);
    printLinkedList(head);
    cout << endl;
    cout << "Insert at end" << endl;
    insertAtTail(tail, 120);
    insertAtTail(tail, 150);
    printLinkedList(head);
    cout << endl;
    cout << "Inserting at particular position" << endl;
    insertAtPosition(tail, head, 6, 22);
    printLinkedList(head);
    cout << endl;
    deleteNode(6, head, tail);
    cout << "head at " << head->data << endl;
    cout << "tail at " << tail->data << endl;
    printLinkedList(head);
    return 0;
}
