void deleteNode(LinkedListNode<int> * node) {
    if(node==NULL) return;

    if(node->next==NULL){
        node=NULL;
        return;
    }

    node->data=node->next->data;

    LinkedListNode<int> *temp=node->next;
    node->next=node->next->next;
    delete temp;

}
