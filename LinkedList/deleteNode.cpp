/* Question: Delete a Node in Single Linked List
	Link: https://practice.geeksforgeeks.org/problems/delete-a-node-in-single-linked-list/1
*/

Node* deleteNode(Node *head,int x)
{
    if(head==NULL) return head;
    if(x==1){
        head = head->next;
        return head;
    }
    --x;
    Node *temp = head;
    while(--x){
        temp=temp->next;
    }
    temp->next = temp->next->next;
    return head;
}

