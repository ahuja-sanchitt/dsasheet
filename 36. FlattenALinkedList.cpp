Node* Merge(Node* a, Node* b){

	Node* temp=new Node(-1);

	Node* res=temp;
	if(!a){
		return b;
	}

	if(!b){
		return a;
	}

	while(a!=NULL && b!=NULL){
		if(a->data < b->data){
			temp->child=a;
			temp=temp->child;
			a=a->child;
		}
		else{
			temp->child=b;
			temp=temp->child;
			b=b->child;
		}
	}

	if(a){
		temp->child=a;
	}

	else{
		temp->child=b;
	}

	return res->child;

}
Node* flattenLinkedList(Node* head) 
{
	if(head==NULL || head->next==NULL){
		return head;
	}
	Node* down=head;
	Node* right=head->next;
	down->next=NULL;

	right=flattenLinkedList(right);

	Node* ans=Merge(down,right);
	
	return ans;
}
