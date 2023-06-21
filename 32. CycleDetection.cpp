bool detectCycle(Node *head)
{
    if(head==NULL || head->next==NULL){
        return false;
    }
    
    Node* fast=head;
    Node* slow=head;
    

    while(fast!=NULL && fast->next!=NULL && slow!=NULL){
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast){
            return true;
        }
    }

    return false;
}
