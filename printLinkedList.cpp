void Print(Node *head)
{
	/*
	struct Node{
		int data;
		struct Node *next;
	};
	*/
    test:
    if(head==NULL)
    {
        
    }
    else
    {
        cout<<head->data<<"\n";
        head=head->next;
        goto test;
    }
}