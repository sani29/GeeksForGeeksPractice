/* Question: Count nodes of linked list
	Link: https://practice.geeksforgeeks.org/problems/count-nodes-of-linked-list/1
*/

int getCount(struct node* head){
    int len=0;
    node* temp=head;
    while(temp!=NULL){
       len++;
       temp = temp->next;
   }
   return len;
}

