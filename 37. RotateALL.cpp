Node *rotate(Node *head, int k) {
     
     int len=1;
     Node* temp=head;

     while(temp->next!=NULL){
          len++;
          temp=temp->next;
     }

     temp->next=head;

     k=k%len;
     k=len-k;

     while(k--){
          temp=temp->next;
     }

     head=temp->next;
     temp->next=NULL;

     return head;

}
