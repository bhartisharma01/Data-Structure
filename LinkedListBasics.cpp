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

void insertAtPosition(Node* &tail, Node* &head, int pos, int data){
    Node* temp = head;
    Node* nodeToInsert = new Node(data);
    int count =1;
    if(pos == 1){
        insertAtHead(head, data);
        return;
    }

    if(temp -> next == NULL){
        insertAtTail(tail, data);
        return;
    }
    while(count < pos-1){
        temp = temp ->next;
        count++;
    }

    nodeToInsert ->  next = temp -> next;
    temp -> next = nodeToInsert;


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
    cout<<endl;
    cout << "Insert at end" << endl;
    insertAtTail(tail, 120);
    insertAtTail(tail, 150);
    printLinkedList(head);
cout<<endl;
    cout<<"Inserting at particular position"<<endl;
    insertAtPosition(tail, head, 6, 22);
    printLinkedList(head);
    return 0;
}