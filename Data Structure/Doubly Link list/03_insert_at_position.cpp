void insert_at_position(Node* head, int pos, int val) {
    Node* newNode = new Node(val);
    Node* tmp = head;

    for(int i = 1; i <= pos - 1; i++) {
        tmp = tmp->next;
    }

    newNode->next = tmp->next;
    tmp->next = newNode;

    if(newNode->next != NULL)
        newNode->next->prev = newNode;

    newNode->prev = tmp;
}
