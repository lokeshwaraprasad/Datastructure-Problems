#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Define the structure of a node
struct Node {
    int data;
    struct Node* next;
};

// Function to create a new node
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("Memory allocation failed\n");
        exit(1);
    }
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// Function to insert a new node at the end of the list
void insertAtEnd(struct Node** head, int data) {
    struct Node* newNode = createNode(data);
    if (*head == NULL) {
        *head = newNode;
    } else {
        struct Node* temp = *head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

// Function to convert a linked list to circular linked list
void convertToCircular(struct Node* head, int pos) {
    struct Node* temp = head;
    struct Node* connectNode = NULL;
    int count = 0;

    while (temp->next != NULL) {
        count++;
        if (count == pos) {
            connectNode = temp;
        }
        temp = temp->next;
    }

    if (connectNode == NULL || pos > count) {
        printf("Invalid position\n");
        return;
    }

    temp->next = connectNode;
}

// Function to check whether the circular linked list has a cycle
bool hasCycle(struct Node *head) {
    if (head == NULL || head->next == NULL)
        return false;

    struct Node *slow = head;
    struct Node *fast = head->next;

    while (slow != fast) {
        if (fast == NULL || fast->next == NULL)
            return false;
        slow = slow->next;
        fast = fast->next->next;
    }

    return true;
}

// Function to display the circular linked list
void displayList(struct Node* head) {
    struct Node* temp = head;
    if (head != NULL) {
        do {
            printf("%d -> ", temp->data);
            temp = temp->next;
        } while (temp != head);
        printf("\n");
    } else {
        printf("Empty list\n");
    }
}

// Main function
int main() {
    // Initialize an empty linked list
    struct Node* head = NULL;

    // Insert some elements into the list
    insertAtEnd(&head, 3);
    insertAtEnd(&head, 5);
    insertAtEnd(&head, 7);
    insertAtEnd(&head, 9);
    insertAtEnd(&head, 11);

    // Display the linked list before conversion
    printf("Linked List before conversion: ");
    displayList(head);

    int pos = 2; // Example position to connect the last node
    convertToCircular(head, pos);

    // Display the circular linked list after conversion
    printf("Circular Linked List: ");
    displayList(head);

    // Check whether the circular linked list has a cycle
    if (hasCycle(head))
        printf("The circular linked list has a cycle.\n");
    else
        printf("The circular linked list does not have a cycle.\n");

    return 0;
}
