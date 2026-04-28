#include <bits/stdc++.h>
using namespace std;

struct SinglyLinkedListNode {
    int data;
    SinglyLinkedListNode* next;

    SinglyLinkedListNode(int x) {
        data = x;
        next = NULL;
    }
};

// Function to find merge point
int findMergeNode(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {
    SinglyLinkedListNode* p1 = head1;
    SinglyLinkedListNode* p2 = head2;

    while (p1 != p2) {
        p1 = (p1 == NULL) ? head2 : p1->next;
        p2 = (p2 == NULL) ? head1 : p2->next;
    }

    return p1->data;
}


void append(SinglyLinkedListNode*& head, int data) {
    if (!head) {
        head = new SinglyLinkedListNode(data);
        return;
    }
    SinglyLinkedListNode* temp = head;
    while (temp->next) temp = temp->next;
    temp->next = new SinglyLinkedListNode(data);
}

int main() {
    // Creating two linked lists manually

    SinglyLinkedListNode* common = new SinglyLinkedListNode(8);
    common->next = new SinglyLinkedListNode(10);

    
    SinglyLinkedListNode* head1 = new SinglyLinkedListNode(3);
    head1->next = new SinglyLinkedListNode(6);
    head1->next->next = new SinglyLinkedListNode(9);
    head1->next->next->next = common;

    
    SinglyLinkedListNode* head2 = new SinglyLinkedListNode(4);
    head2->next = common;

    int result = findMergeNode(head1, head2);
    cout << "Merge Point: " << result << endl;

    return 0;
}