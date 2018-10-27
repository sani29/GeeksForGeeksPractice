/* Question: Detect Loop in linked list
	Link: https://practice.geeksforgeeks.org/problems/detect-loop-in-linked-list/1
*/

int detectloop(Node *list)
{
   struct Node  *slow_p = list, *fast_p = list; 
   
    while (slow_p && fast_p && fast_p->next ) 
    { 
        slow_p = slow_p->next; 
        fast_p  = fast_p->next->next; 
        if (slow_p == fast_p) 
        {
           return 1; 
        } 
    } 
    return 0;
}
