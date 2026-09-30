#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

struct Node* createNode(int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;
    return newNode;
}

void insertFront(struct Node** head, int value) {
    struct Node* newNode = createNode(value);
    newNode -> next = *head;    // new box points to the old first box
    *head = newNode;    // head moves to the new box.
}

void displayList(struct Node* head) {
    struct Node* temp = head; // walker, so I don't lose head
    while(temp != NULL) {
        printf("%d -> ",temp->data);
        temp = temp->next;  // move to the next box
    }
    printf("NULL\n");
}

void insertEnd(struct Node** head, int value) {
    struct Node* newNode = createNode(value);
    if(*head == NULL) {     // empty list: new box becomes the head
        *head = newNode;
        return;
    }
    struct Node* temp = *head;
    while(temp != NULL) {       // stop at the last box, not after
        temp=temp->next;
    }
    temp->next=newNode;     // last box now points to the new box
}

void insertAtPos(struct Node** head, int value, int pos) {
    if (pos < 1) {
        printf("Invalid position\n");
        return;
    }
    if (pos == 1) {
        insertFront(head, value);
        return;
    }
    struct Node* temp = *head;
    for(int i=1; i<pos-1 && temp!=NULL; i++) {
        temp = temp-> next;     // walk to the box before the position
    }
    if(temp == NULL) {
        printf("Position out of range\n");
        return;
    }
    struct Node* newNode = createNode(value);
    newNode->next = temp->next;     // save the rest of the list.
    temp->next = newNode;      // link the previous box to new box.
}

void deleteFront(struct Node** head) {
    if(*head == NULL) {
        printf("List is empty\n");
    }
    struct Node* temp = *head;      // save the box we're remote
    *head = temp->next;
    free(temp);
}

void deleteEnd(struct Node** head) {
    if (*head == NULL) { printf("List is empty\n"); return; }
    if ((*head)->next == NULL) {      // only one box
        free(*head);
        *head = NULL;
        return;
    }
    struct Node* temp = *head;
    while (temp->next->next != NULL) { // stop at the second last box
        temp = temp->next;
    }
    free(temp->next);                 // remove the last box
    temp->next = NULL;                // second-last becomes the new end
}

void deleteAtPos(struct Node** head, int pos) {
    if (*head == NULL) { printf("List is empty\n"); return; }
    if (pos < 1) { printf("Invalid position\n"); return; }
    if (pos == 1) { deleteFront(head); return; }
    struct Node* temp = *head;
    for (int i = 1; i < pos - 1 && temp != NULL; i++) {
        temp = temp->next;            // walk to the box BEFORE the target
    }
    if (temp == NULL || temp->next == NULL) {
        printf("Position out of range\n");
        return;
    }
    struct Node* target = temp->next; // save the box to delete
    temp->next = target->next;        // bypass it
    free(target);
}

int main() {
    struct Node* head = NULL;
    insertEnd(&head, 10);
    insertEnd(&head, 20);
    insertEnd(&head, 30);
    insertAtPos(&head, 15, 2);
    displayList(head);        // 10 -> 15 -> 20 -> 30 -> NULL
    deleteFront(&head);
    displayList(head);        // 15 -> 20 -> 30 -> NULL
    deleteEnd(&head);
    displayList(head);        // 15 -> 20 -> NULL
    deleteAtPos(&head, 2);
    displayList(head);        // 15 -> NULL
    return 0;
}