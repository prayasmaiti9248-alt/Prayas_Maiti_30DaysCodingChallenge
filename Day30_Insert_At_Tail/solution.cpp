#include <bits/stdc++.h>
using namespace std;

class SinglyLinkedListNode {
public:
    int data;
    SinglyLinkedListNode* next;

    SinglyLinkedListNode(int nodeData) {
        data = nodeData;
        next = nullptr;
    }
};

SinglyLinkedListNode* insertNodeAtTail(
    SinglyLinkedListNode* head,
    int data
) {

    SinglyLinkedListNode* cur = head;

    SinglyLinkedListNode* val =
        new SinglyLinkedListNode(data);

    if(head == NULL) {
        return val;
    }

    while(cur->next != NULL) {
        cur = cur->next;
    }

    cur->next = val;

    return head;
}

int main() {

    SinglyLinkedListNode* head = nullptr;

    head = insertNodeAtTail(head, 10);
    head = insertNodeAtTail(head, 20);
    head = insertNodeAtTail(head, 30);

    SinglyLinkedListNode* cur = head;

    while(cur != NULL) {
        cout << cur->data << " ";
        cur = cur->next;
    }

    return 0;
}