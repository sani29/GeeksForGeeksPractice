/*	Question: Implement Stack using Linked List
	Link: https://practice.geeksforgeeks.org/problems/implement-stack-using-linked-list/1
*/


/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/* 
The structure of the node of the stack is
struct StackNode
{
    int data;
    StackNode *next;
};
and the structure of the class is
class Stack {
private:
  StackNode *top;
public :
    void push(int);
    int pop();
};
 */
/* The method push to push element into the stack */
void Stack :: push(int x)
{
        // Your Code
        StackNode *node = (StackNode*)malloc(sizeof(StackNode));
        node->data = x;
        node->next = top;
        top = node;
        
}
/*The method pop which return the element poped out of the stack*/
int Stack :: pop()
{
        // Your Code
        if(!top) return -1;
        
        int res = top->data;
        StackNode *temp = top;
        top = top->next;
        delete(temp);
        return res;
}

