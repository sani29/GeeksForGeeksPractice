/* Question: Occurence of an integer in a Linked List
	Link: https://practice.geeksforgeeks.org/problems/occurence-of-an-integer-in-a-linked-list/1
*/

int count(struct node* head, int search_for)
{
    struct node* current = head; 
    int count = 0; 
    while (current != NULL) 
    { 
        if (current->data == search_for) 
           count++; 
        current = current->next; 
    } 
    return count;
}
