#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node *prev;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};
void insertAthead(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    newNode->next=head;
    head->prev = newNode;
    head = newNode;
}
void insertAttail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
}
void insertAtposition(Node *head, int x,int val)
{
    Node* newNode = new Node(val);
    Node* temp= head;
    for(int i=1;i<x;i++)
    {
        temp=temp->next;

    }
    newNode->next = temp->next;
    temp->next = newNode;
    newNode->next->prev = newNode;
    newNode->prev = temp;


}
int size(Node* head)
{
    Node *temp = head;
    int count=0;
    while(temp!=NULL)
    {
        count++;
        temp=temp->next;
    }
    return count;
}
void print_linked_list(Node *head)
{
    Node *temp = head;
    cout<<"L -> ";
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}
void print_reverse(Node *tail)
{
    Node *temp = tail;
    cout<<"R -> ";
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->prev;
    }
    cout << endl;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int q;
    cin>>q;
    while(q--)
    {
        int x,v;
        cin>>x>>v;
    if(x>size(head))
    {
        cout<<"Invalid"<<endl;
    }
    else if(x==0)
    {
        insertAthead(head,tail,v);
        print_linked_list(head);
        print_reverse(tail);

    }
    else if(x==size(head))
    {
        insertAttail(head,tail,v);
        print_linked_list(head);
        print_reverse(tail);
    }
    else{
        insertAtposition(head,x,v);
        print_linked_list(head);
        print_reverse(tail);
    }
    }
    
    return 0;
}