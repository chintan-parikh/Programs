/*
  Insert Node at the begining of a linked list
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* Insert(Node *head,int data)
{
  // Complete this method
    struct Node *temp=new struct Node;
    temp->next=head;
    temp->data=data;
    head=temp;
    return head;
}
