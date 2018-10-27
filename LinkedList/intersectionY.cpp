/* Question: Intersection Point in Y Shapped Linked Lists
	Link: https://practice.geeksforgeeks.org/problems/intersection-point-in-y-shapped-linked-lists/1
*/

/* Should return data of intersection point of two linked
   lists head1 and head2.
   If there is no intersecting point, then return -1. */
int intersectPoint(Node* head1, Node* head2)
{
    int count1=0,count2=0;
    Node *temp1 = head1, *temp2 = head2;
    while(temp1!=NULL){
        count1++;
        temp1=temp1->next;
    }
    while(temp2!=NULL){
        count2++;
        temp2=temp2->next;
    }
    temp1 = head1, temp2 = head2;
    int r = abs(count1-count2);
    //r++;
    if(count1>count2){
        while(r--){
            temp1 = temp1->next;
        }
    }
    else{
        while(r--){
            temp2 = temp2->next;
        }
    }
    while(temp1!=NULL && temp2!=NULL){
        if(temp1==temp2){
            return temp1->data;
        }
        temp1 = temp1->next;
        temp2 = temp2->next;
    }
    return -1;
}
