Node* findIntersection(Node *firstHead, Node *secondHead)
{
    Node* temp1=firstHead;
    Node* temp2=secondHead;

    if(temp1==NULL || temp2==NULL){
        return NULL;
    }


    while(temp1!=temp2){
        temp1=temp1==0?secondHead:temp1->next;
        temp2=temp2==0?firstHead:temp2->next;
    }


    return temp1;




    

}
