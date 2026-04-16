#include <bits/stdc++.h>
using namespace std;

struct SinglyLinkedListNode {
    int data;
    SinglyLinkedListNode* next;
};

void reversePrint(SinglyLinkedListNode* llist) {
    if (llist == nullptr) return;

    reversePrint(llist->next);
    cout << llist->data << endl;
}