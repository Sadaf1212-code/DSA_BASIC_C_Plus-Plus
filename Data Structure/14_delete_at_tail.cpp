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

void delete_at_tail(Node* &head)
{
    if (head == NULL)
        return;

    if (head->next == NULL)
    {
        delete head;
        head = NULL;
        return;
    }

    Node* tmp = head;
    while (tmp->next->next != NULL)
    {
        tmp = tmp->next;
    }

    Node* deleteNode = tmp->next;
    tmp->next = NULL;
    delete deleteNode;
}

int main()
{
    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);

    head->next = a;
    a->next = b;

    print_linked_list(head);
    delete_at_tail(head);
    print_linked_list(head);

    return 0;
}
