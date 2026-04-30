#include <bits/stdc++.h>
using namespace std;

struct DoublyLinkedListNode {
    int data;
    DoublyLinkedListNode* next;
    DoublyLinkedListNode* prev;

    DoublyLinkedListNode(int x) {
        data = x;
        next = nullptr;
        prev = nullptr;
    }
};

DoublyLinkedListNode* reverse(DoublyLinkedListNode* head) {
    if (!head) return head;

    DoublyLinkedListNode* curr = head;
    DoublyLinkedListNode* temp = nullptr;

    while (curr != nullptr) {
        temp = curr->prev;
        curr->prev = curr->next;
        curr->next = temp;

        head = curr;
        curr = curr->prev;
    }

    return head;
}
void printList(DoublyLinkedListNode* head) {
    while (head) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

int main() {
    DoublyLinkedListNode* head = new DoublyLinkedListNode(1);
    head->next = new DoublyLinkedListNode(2);
    head->next->prev = head;

    head->next->next = new DoublyLinkedListNode(3);
    head->next->next->prev = head->next;

    head->next->next->next = new DoublyLinkedListNode(4);
    head->next->next->next->prev = head->next->next;

    cout << "Original: ";
    printList(head);

    head = reverse(head);

    cout << "Reversed: ";
    printList(head);

    return 0;
}