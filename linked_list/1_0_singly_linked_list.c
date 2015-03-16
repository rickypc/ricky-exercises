/*
 * Singly Linked List
 * Copyright (c) 2008, 2015 Richard Huang. All rights reserved.
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include <stdio.h>
#define COPYRIGHT "Copyright (c) 2008, 2015 Richard Huang. All rights reserved.\n" \
                  "This program comes with ABSOLUTELY NO WARRANTY.\n" \
                  "This is free software, and you are welcome to redistribute it\n" \
                  "under certain conditions.\n\n"
#define MAX 6

struct node {
    int data;
    struct node* next;
};

void copyright(void);
void destroy(struct node* top);
int empty(struct node* top);
void push(struct node** top_ref, int data);
int size(struct node* top);

int main(void) {
    copyright();
    struct node* top = NULL;
    struct node** bottom_ref = &top;
    int i;
    printf("Adding %d nodes.\n", MAX-1);
    printf("List empty: %d, size: %d\n", empty(top), size(top));
    for (i=1; i<6; i++) {
        push(bottom_ref, i);
        bottom_ref = &((*bottom_ref)->next);
        printf("Node number %d added.\n", i);
        printf("List empty: %d, size: %d\n", empty(top), size(top));
    }
    printf("We're done for now.\n");
    destroy(top);
    top = NULL;
    printf("List empty: %d, size: %d\n", empty(top), size(top));
    return 0;
}

void copyright(void) {
    printf(COPYRIGHT);
}

void destroy(struct node* top) {
    struct node* node = top;
    struct node* next;
    while (node != NULL) {
        next = node->next;
        free(node);
        node = next;
    }
}

int empty(struct node* top) {
    return (size(top) == 0);
}

void push(struct node** top_ref, int data) {
    struct node* new_node = malloc(sizeof(struct node));
    new_node->data = data;
    new_node->next = *top_ref;
    *top_ref = new_node;
}

int size(struct node* top) {
    int total = 0;
    struct node* node = top;
    while (node != NULL) {
        total++;
        node = node->next;
    }
    return total;
}
