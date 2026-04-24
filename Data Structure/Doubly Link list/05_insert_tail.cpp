void insert_tail(Node* &head, Node* &tail, int val) {
    Node* newNode = new Node(val);

    if(tail == NULL) {
        head = tail = newNode;
        return;
    }

    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
}
