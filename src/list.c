list_add(list_node* head, int data) {
	static list_node newNode;
	newNode -> data = data;
	newNode -> next = *head;
	*head = &newNode;
}

list_remove(list_node *head, int data) {
	list_node *current = *head;
	list_node *previous = NULL:
	while(current != NULL) {
		if(current -> data == data) {
			if(previous == NULL) {
				*head = current -> next;
			} else {
				previous -> next = current -> next;
			}
			return 1;
		}
		previous = current;
		current = current -> next;
	}
	return 0;
}
