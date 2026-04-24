#include <bits/stdc++.h>
using namespace std;

struct SinglyLinkedListNode {
    int data;
    SinglyLinkedListNode* next;

    SinglyLinkedListNode(int x) {
        data = x;
        next = nullptr;
    }
};

// Function to detect cycle
bool has_cycle(SinglyLinkedListNode* head) {
    SinglyLinkedListNode* slow = head;
    SinglyLinkedListNode* fast = head;

    while (fast != nullptr && fast->next != nullptr) {
        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast) {
            return true;
        }
    }

    return false;
}

void insert(SinglyLinkedListNode*& head, int data) {
    SinglyLinkedListNode* newNode = new SinglyLinkedListNode(data);

    if (!head) {
        head = newNode;
        return;
    }

    SinglyLinkedListNode* temp = head;
    while (temp->next) temp = temp->next;

    temp->next = newNode;
}

int main() {
    SinglyLinkedListNode* head = nullptr;

    // Creating list: 1 -> 2 -> 3 -> 4 -> 5
    insert(head, 1);
    insert(head, 2);
    insert(head, 3);
    insert(head, 4);
    insert(head, 5);

    
    head->next->next->next->next->next = head->next->next;

    if (has_cycle(head)) {
        cout << "Cycle Detected\n";
    } else {
        cout << "No Cycle\n";
    }

    return 0;
}