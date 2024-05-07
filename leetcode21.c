/*21. Merge Two Sorted Lists
Solved
Easy
Topics
Companies
You are given the heads of two sorted linked lists list1 and list2.

Merge the two lists into one sorted list. The list should be made by splicing together the nodes of the first two lists.

Return the head of the merged linked list.

 

Example 1:


Input: list1 = [1,2,4], list2 = [1,3,4]
Output: [1,1,2,3,4,4]
Example 2:

Input: list1 = [], list2 = []
Output: []
Example 3:

Input: list1 = [], list2 = [0]
Output: [0]*/

#include <stdio.h>
#include <stdlib.h>

// Define a structure for each node in the linked list
struct Node {
    int data;
    struct Node* next;
};

// Function to create a new node with the given data
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("Memory allocation failed.\n");
        exit(1);
    }
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// Function to insert a new node at the end of the linked list
void insertAtEnd(struct Node** headRef, int data) {
    struct Node* newNode = createNode(data);
    if (*headRef == NULL) {
        *headRef = newNode;
        return;
    }
    struct Node* current = *headRef;
    while (current->next != NULL) {
        current = current->next;
    }
    current->next = newNode;
}

// Function to merge two sorted linked lists
struct Node* mergeSortedLists(struct Node* list1, struct Node* list2) {
    struct Node* mergedList = NULL;
    
    if (list1 == NULL) return list2;
    if (list2 == NULL) return list1;
    
    if (list1->data <= list2->data) {
        mergedList = list1;
        mergedList->next = mergeSortedLists(list1->next, list2);
    } else {
        mergedList= list2;
        mergedList->next = mergeSortedLists(list1, list2->next);
    }
    
    return mergedList;
}

// Function to print the linked list
void printList(struct Node* head) {
    struct Node* current = head;
    while (current != NULL) {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("NULL\n");
}

// Test the functions
int main() {
    struct Node* list1 = NULL; // Initialize an empty linked list
    struct Node* list2 = NULL; // Initialize another empty linked list

    // Insert elements into the first linked list
    insertAtEnd(&list1, 1);
    insertAtEnd(&list1, 2);
    insertAtEnd(&list1, 4);

    // Insert elements into the second linked list
    insertAtEnd(&list2, 1);
    insertAtEnd(&list2, 3);
    insertAtEnd(&list2, 4);

    printf("List 1: ");
    printList(list1);
    printf("List 2: ");
    printList(list2);

    // Merge the sorted linked lists
    struct Node* mergedList = mergeSortedLists(list1, list2);
    printf("Merged List: ");
    printList(mergedList);

    return 0;
}