void delete_at_position(Node* head, int pos) {
    Node* tmp = head;

    for(int i = 1; i <= pos - 1; i++) {
        tmp = tmp->next;
    }

    Node* deleteNode = tmp->next;
    tmp->next = tmp->next->next;

    if(tmp->next != NULL)
        tmp->next->prev = tmp;

    delete deleteNode;
}
