/* Question: Insert in a Sorted List
	Link: https://practice.geeksforgeeks.org/problems/insert-in-a-sorted-list/1
*/

void sortedInsert(struct node** head_ref, int data)
{
    node* new_Node = newNode(data);
    if(*head_ref == NULL || (*head_ref)->data  >= new_Node->data){
        new_Node->next = *head_ref;
        *head_ref = new_Node;
    }
    else{
        node* temp = *head_ref;
        while(temp->next!=NULL && temp->next->data < new_Node->data){
            temp = temp->next;
        }
        new_Node->next = temp->next;
        temp->next = new_Node;
    }
}

