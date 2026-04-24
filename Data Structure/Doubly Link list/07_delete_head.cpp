void delete_head(Node* &head, Node* &tail) {
    if(head == NULL) return;

    Node* deleteNode = head;
    head = head->next;

    if(head != NULL)
        head->prev = NULL;
    else
        tail = NULL;

    delete deleteNode;
}
