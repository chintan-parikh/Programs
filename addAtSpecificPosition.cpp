/*
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* InsertNth(Node *head, int data, int position)
{
    struct Node *temp=new struct Node;
    struct Node *actual=new struct Node;
    actual->data=data;
    if(position==0)
    {
        if(head==NULL)
        {
            actual->next=NULL;
        }
        else
        {
            actual->next=head;
            head=actual;
        }
    }
    else
    {
        temp=head;
        for(int a=position-1;a>0;a--)
        {
            temp=temp->next;
        }
        actual->next=temp->next;
        temp->next=actual;
    }
}
