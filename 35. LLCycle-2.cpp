Node *firstNode(Node *head)
{
    Node* slow=head;
    Node* fast=head;
    if(head==NULL || head->next==NULL){
        return NULL;
    }

    while(slow!=NULL && fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;

        if(slow==fast){
            break;
        }
    }

    if(slow!=fast){
        return NULL;
    }

    slow=head;
    while(slow!=fast){
        slow=slow->next;
        fast=fast->next;
    }

    return slow;

}
