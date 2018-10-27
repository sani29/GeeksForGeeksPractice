/* Question: Delete N nodes after M nodes of a linked list
	Link: https://practice.geeksforgeeks.org/problems/delete-n-nodes-after-m-nodes-of-a-linked-list/1
*/

void linkdelete(struct node  *head, int M, int N)
{
    if(head == NULL){
        return;
    }
    node *temp = head, *temp2=NULL;
    int count=0;
    if(N>0){
    while(temp!=NULL && temp->next!=NULL){
        ++count;
        if(count==M){
            temp2 = temp->next;
            int m = N;
            while(--m && temp2!=NULL  && temp2->next!=NULL){
                struct node *t = temp2;
                temp2 = temp2->next;
                delete(t);
            }
            count=0;
            temp2 = temp2->next;
            temp->next = temp2;
            
        }
        temp = temp->next;
    }}
}

