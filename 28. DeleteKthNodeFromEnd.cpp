Node* removeKthNode(Node* head, int K)
{
    Node* prev=NULL;
    Node* curr=head;
    Node* temp=head;

    int count=0;
    int posi=1;
    if(K==0 ||head==NULL){
        return head;
    }
    while(temp!=NULL){
        count++;
        temp=temp->next;
    }
    int n=count-K;
    if(count==K){
        Node* temp1=head;
        head=head->next;
        delete temp1;
        return head;
    }

    while(n>0){
        prev=curr;
        curr=curr->next;
        n--;
    }

   
    prev->next=curr->next;
    curr->next=NULL;
    delete curr;


    return head;



}
