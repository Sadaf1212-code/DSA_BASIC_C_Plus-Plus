int main() {
    Node* head = NULL;
    Node* tail = NULL;

    int val;
    while(cin >> val && val != -1) {
        insert_tail(head, tail, val);
    }

    print_forward(head);
    print_reverse(tail);

    return 0;
}
