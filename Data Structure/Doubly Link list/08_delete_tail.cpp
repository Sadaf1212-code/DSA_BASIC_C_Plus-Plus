void delete_tail(Node* &head, Node* &tail) {
    if(tail == NULL) return;

    Node* deleteNode = tail;
    tail = tail->prev;

    if(tail != NULL)
        tail->next = NULL;
    else
        head = NULL;

    delete deleteNode;
}
