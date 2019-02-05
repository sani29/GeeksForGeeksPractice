/*	Question: Implement Queue using Linked List
	Link: https://practice.geeksforgeeks.org/problems/implement-queue-using-linked-list/1
*/

/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/* 
The structure of the node of the queue is
struct QueueNode
{
    int data;
    QueueNode *next;
};
and the structure of the class is
class Queue {
private:
    QueueNode *front;
    QueueNode *rear;
public :
    void push(int);
    int pop();
};
 */
/* The method push to push element into the queue*/
void Queue:: push(int x)
{
    QueueNode* newNode=new QueueNode;
    newNode->data=x;
    newNode->next=NULL;
    if(!front)
    {
        front=newNode;
        rear=newNode;
        return;
    }
     rear->next=newNode;
     rear=newNode;
    
}
/*The method pop which return the element poped out of the queue*/
int Queue :: pop()
{
        if(!front) return -1;
        QueueNode* temp=front;
        front=front->next;
        if(!front) rear=NULL;
        int x=temp->data;
        delete temp;
        return x;            
}
