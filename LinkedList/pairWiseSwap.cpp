/* Question: Pairwise swap elements of a linked list by swapping data
	Link: https://practice.geeksforgeeks.org/problems/pairwise-swap-elements-of-a-linked-list-by-swapping-data/1
*/

void pairWiseSwap(struct node *head)
{
    if(head==NULL || head->next == NULL){
        return;
    }
   node *node1 = head, *node2 = head->next;
   while(node1->next != NULL && node2->next!= NULL){
       int d = node1->data;
       node1->data = node2->data;
       node2->data = d;
       node1 = node2->next;
       node2 = node1->next;
   }
   if(node1!=NULL && node2!=NULL){
       int d = node1->data;
       node1->data = node2->data;
       node2->data = d;
       
   }
}
