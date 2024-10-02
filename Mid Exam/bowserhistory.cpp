#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    string address;
    Node *next;
    Node *prev;
    Node(string address)
    {
        this->address = address;
        this->next = NULL;
        this->prev = NULL;
    }
};
void insert_address(Node *&head,Node *&tail,string address)
{
    Node *newNode = new Node(address);
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
string visit(Node*head, Node *&curr,string val)
{
    Node *temp = head;
    while (temp!=NULL)
    {
        if(temp->address == val)
        {
            curr=temp;
            return curr->address;
        }
        temp=temp->next;
    }

    return "Not Available";
}
string next(Node *&curr)
{

    if(curr->next!=NULL)
    {
        curr=curr->next;
        return curr->address;
    }
    else{
        return "Not Available";
    } 

}
string prev(Node *&curr)
{

    if(curr->prev != NULL)
    {
        curr=curr->prev;
        return curr->address;
    }
    else{
        return "Not Available";
    }
    
}
int main()
{
    Node *head=NULL;
    Node *tail=NULL;
    Node *curr=head;
    string address;
    while (true)
    {
        cin >> address;
        if (address == "end")
            break;
        insert_address(head,tail,address);
    }
    
    int q;
    cin>>q;
    
    while(q--)
    {
        string command;
        cin>>command;
        if(command=="visit")
        {
            string val;
            cin>>val;
           cout<< visit(head,curr,val)<<endl;
            
        }
        else if(command =="next")
        {
           cout<< next(curr)<<endl;
        }
        else if(command=="prev")
        {
           cout<< prev(curr)<<endl;
        }

    }
   
    return 0;
}