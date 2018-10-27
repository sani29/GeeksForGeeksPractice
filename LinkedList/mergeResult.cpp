/* Question: Merge 2 sorted linked list in reverse order
	Link: https://practice.geeksforgeeks.org/problems/merge-2-sorted-linked-list-in-reverse-order/1
*/

struct Node * mergeResult(Node *node1,Node *node2)
{
    if(node1==NULL && node2==NULL){
        return NULL;
    }
    Node *res = NULL;
    while(node1!=NULL && node2!=NULL){
        if(node1->data<= node2->data){
            Node *temp = node1->next;
            node1->next = res;
            res = node1;
            node1 = temp;
        }
        else{
            Node *temp = node2->next;
            node2->next = res;
            res = node2;
            node2 = temp;
        }
    }
    while(node1!=NULL){
        Node *temp = node1->next;
        node1->next = res;
        res = node1;
        node1 = temp;
    }
    while(node2!=NULL){
        Node *temp = node2->next;
        node2->next = res;
        res = node2;
        node2 = temp;
    }
    return res;
}
