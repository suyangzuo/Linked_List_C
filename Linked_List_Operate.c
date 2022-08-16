#include "Linked_List_Operate.h"
#include <stdlib.h>
#include "structs.h"

int generate_student_linked_list(student** head, student** tail, int count) {
    student* current = NULL;
    for (int i = 1; i <= count; i++) {
        if (*head == NULL) {
            *head = (student*)(malloc(sizeof(student)));
            (*head)->previous = NULL;
            current = (*head);
        }
        if (i < count) {
            student* temp = (student*)(malloc(sizeof(student)));
            current->next = temp;
            temp->previous = current;
            current = current->next;
        } else {
            (*tail) = current;
            (*tail)->next = NULL;
        }
    }
    return (*head) == NULL ? EXIT_FAILURE : EXIT_SUCCESS;
}

int add_node(student* head, student* node, unsigned int position) {
    if (head == NULL || node == NULL)
        return EXIT_FAILURE;

    student* current = head;
    for (int i = 0; i < position - 1; i++) {
        current = current->next;
        if (current == NULL)
            return EXIT_FAILURE;
    }

    student* beforeNode = current->previous;
    node->previous = beforeNode;
    node->next = current;
    beforeNode->next = node;
    current->previous = node;

    return EXIT_SUCCESS;
}

int remove_node(student* head, unsigned int position) {
    if (head == NULL)
        return EXIT_FAILURE;

    student* removeThis = head;
    for (int i = 0; i < position - 1; i++) {
        removeThis = removeThis->next;
        if (removeThis == NULL || removeThis->next == NULL)
            return EXIT_FAILURE;
    }
    student* previous = removeThis->previous;
    student* next = removeThis->next;

    previous->next = next;
    next->previous = previous;

    free(removeThis);
    removeThis = NULL;

    return EXIT_SUCCESS;
}
