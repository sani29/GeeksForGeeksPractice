/* Question: Linked List Length Even or Odd?
	Link: https://practice.geeksforgeeks.org/problems/linked-list-length-even-or-odd/1
*/

// Function should return 0 is length is even else return 1
int isLengthEvenOrOdd(struct Node* head)
{
     while (head && head->next) 
    { 
        head = head->next->next; 
    } 
    if (!head) 
        return 0; 
    return 1;
}
