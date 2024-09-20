void list_add(struct list_element *list_head, struct list_element *new_element){
	new_element -> next = list_head -> next;
	list_head -> next = new_element;
}

void list_remove(struct list_element *element) {
	struct list_element *prev = head;
	while(prev -> next != element) {
		prev = prev -> next;
	}
	prev -> next = element -> next;
}
