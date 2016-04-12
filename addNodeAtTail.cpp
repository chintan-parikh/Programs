/*
  Insert Node at the end of a linked list 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* Insert(Node *head,int data)
{
  // Complete this method
    if(head==NULL)
    {
        struct Node *temp=new struct Node;
        temp->next=NULL;
        temp->data=data;
        head=temp;
    }
    else
    {
        struct Node *temp=new struct Node;
        struct Node *temp1=new struct Node;
        temp=head;
        while(temp->next!=NULL)
            temp=temp->next;
        temp->next=temp1;
        temp->next->data=data;
       temp->next->next=NULL;
    }
    return head;
}

