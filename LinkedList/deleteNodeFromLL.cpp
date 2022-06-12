//Only reference to that node is given so we copy the value of next node to the current node.

//TC -> O(1)
void deleteNode(Node* node) {
        node->val = node->next->val;
        node->next = node->next->next;
}
