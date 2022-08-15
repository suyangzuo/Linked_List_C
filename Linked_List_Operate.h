#include "structs.h"

#ifndef LINKED_LIST_OPERATE_H
#define LINKED_LIST_OPERATE_H

int generate_student_linked_list(student** head, student** tail, int count);
int add_node(student* link_list, student* node, unsigned int index);
int remove_node(student* link_list, unsigned int index);
int reverse_link_list(student* link_list);

#endif
