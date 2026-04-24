void print_reverse(Node* tail) {
    Node* tmp = tail;
    while(tmp != NULL) {
        cout << tmp->val << " ";
        tmp = tmp->prev;
    }
    cout << endl;
}
