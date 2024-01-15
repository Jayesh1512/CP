#include <stdio.h>
#include <stdlib.h>
struct ListNode {
    int val;
    struct ListNode *next;
};

// Function to merge two sorted linked lists
struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2);

int main() {
    // Create linked list 1: 1 -> 3 -> 5
    struct ListNode* list1 = (struct ListNode*)malloc(sizeof(struct ListNode));
    list1->val = 1;
    list1->next = (struct ListNode*)malloc(sizeof(struct ListNode));
    list1->next->val = 3;
    list1->next->next = (struct ListNode*)malloc(sizeof(struct ListNode));
    list1->next->next->val = 5;
    list1->next->next->next = NULL;

    // Create linked list 2: 2 -> 4 -> 6
    struct ListNode* list2 = (struct ListNode*)malloc(sizeof(struct ListNode));
    list2->val = 2;
    list2->next = (struct ListNode*)malloc(sizeof(struct ListNode));
    list2->next->val = 4;
    list2->next->next = (struct ListNode*)malloc(sizeof(struct ListNode));
    list2->next->next->val = 6;
    list2->next->next->next = NULL;

    // Call mergeTwoLists function
    struct ListNode* mergedList = mergeTwoLists(list1, list2);

    // Print the merged list
    struct ListNode* current = mergedList;
    while (current != NULL) {
        printf("%d ", current->val);
        current = current->next;
    }

    // Free memory
    current = mergedList;
    while (current != NULL) {
        struct ListNode* next = current->next;
        free(current);
        current = next;
    }

    return 0;
}
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2) {
    struct ListNode *ans = (struct ListNode *)malloc(sizeof(struct ListNode));
    ans->next = NULL;

    while (list1 != NULL && list2 != NULL) {
        struct ListNode *temp = (struct ListNode *)malloc(sizeof(struct ListNode));

        if (list1->val > list2->val) {
            temp->val = list2->val;
            list2 = list2->next;
        } else {
            temp->val = list1->val;
            list1 = list1->next;
        }

        temp->next = NULL;
        ans->next = temp;
        ans = ans->next;

        if (list1 == NULL && list2 != NULL) {
            temp->val = list2->val;
            list2 = list2->next;
            ans->next = temp;
            ans = ans->next;
        }
        if (list1 != NULL && list2 == NULL) {
            temp->val = list1->val;
            list1 = list1->next;
            ans->next = temp;
            ans = ans->next;
        }
    }

    return ans->next;
}
