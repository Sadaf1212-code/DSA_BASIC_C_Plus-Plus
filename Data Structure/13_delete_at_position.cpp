#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node* next;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

void print_linked_list(Node* head)
{
    Node* tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

int size(Node* head)
{
    int count = 0;
    Node* tmp = head;

    while (tmp != NULL)
    {
        count++;
        tmp = tmp->next;
    }

    return count;
}

void delete_at_position(Node* &head, int position)
{
    if (head == NULL)
        return;

    if (position == 0)
    {
        Node* deleteNode = head;
        head = head->next;
        delete deleteNode;
        return;
    }

    Node* temp = head;
    for (int i = 1; i <= position - 1; i++)
    {
        temp = temp->next;
    }

    Node* deleteNode = temp->next;
    temp->next = temp->next->next;
    delete deleteNode;
}

int main()
{
    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);
    Node* c = new Node(40);
    Node* d = new Node(50);

    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;

    print_linked_list(head);

    int position;
    cin >> position;

    if (position < 0 || position >= size(head))
    {
        cout << "Invalid" << endl;
    }
    else
    {
        delete_at_position(head, position);
        print_linked_list(head);
    }

    return 0;
}
