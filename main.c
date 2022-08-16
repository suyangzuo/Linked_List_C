#include <stdio.h>
#include <stdlib.h>
#include "Linked_List_Operate.h"
#include "structs.h"

int main(void) {
    student* head = NULL;
    student* tail = NULL;
    int count = 15;
    int result = generate_student_linked_list(&head, &tail, count);

    /* student* temp = (student*)malloc(sizeof(student));
    temp->age = 50;
    add_node(head, temp, 4); */

    // remove_node(head, 8);

    student* current = head;
    int count = 1;
    while (current) {
        printf("%2d: %p\n", count, current);
        current = current->next;
        count++;
    }
}
