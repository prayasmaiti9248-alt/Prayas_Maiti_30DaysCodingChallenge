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

DoublyLinkedListNode* sortedInsert(DoublyLinkedListNode* llist, int data) {
    
    DoublyLinkedListNode* node = new DoublyLinkedListNode(data);

    if (llist == nullptr) {
        return node;
    }

    if (data < llist->data) {
        node->next = llist;
        llist->prev = node;
        return node;
    }

    DoublyLinkedListNode* curr = llist;

    while (curr->next != nullptr && curr->next->data < data) {
        curr = curr->next;
    }

    node->next = curr->next;
    node->prev = curr;

    if (curr->next != nullptr) {
        curr->next->prev = node;
    }

    curr->next = node;

    return llist;
}