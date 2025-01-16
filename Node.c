#include <stdlib.h>
#include <stdbool.h>

#include "Node.h"

Node * node_constructor(Element * element) {
    Node * new_node = (Node *) calloc(1, sizeof(Node));

    new_node->record = element->record;
    new_node->is_black = true;
    new_node->parent = NULL;
    new_node->left_child = NULL;
    new_node->right_child = NULL;

    return new_node;
}

void toggle_color(Node * node) {
    node->is_black = !node->is_black;
}

void change_to_this_color(Node * node, bool new_color) {
    node->is_black = new_color;
}

void put_as_parent(Node * base_node, Node * relative_node, bool is_left_child) {
    base_node->parent = relative_node;
    if (is_left_child) {
        relative_node->left_child = base_node;
    }
    else {
        relative_node->right_child = base_node;
    }
}

void put_as_left_child(Node * base_node, Node * relative_node) {
    base_node->left_child = relative_node;
    relative_node->parent = base_node;
}

void put_as_right_child(Node * base_node, Node * relative_node) {
    base_node->right_child = relative_node;
    relative_node->parent = base_node;
}
