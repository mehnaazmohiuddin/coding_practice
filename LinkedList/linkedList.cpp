#include <iostream>
#include <cstdlib>

using namespace std;


typedef struct  Node
{
	int data;
	Node* next;
}Node;


int insertNodeToHead(  Node ** ptrToHeadptr, int value){ 
	Node* newNode = (Node*) malloc(sizeof(Node)*1);
	if(newNode == NULL){
	    cout <<"no mem "<<endl;
		return -1;
	}
	newNode->data = value;
	if(*ptrToHeadptr == NULL){
		newNode->next = NULL;
	}else{
		newNode->next = *ptrToHeadptr;
	}
	*ptrToHeadptr = newNode;
	return 0;

}


int insertNodeToTail ( Node **ptrToHeadptr, int value){
	Node* newNode = (Node*) malloc(sizeof(Node)*1);
	if(newNode == NULL){
	    cout <<"no mem "<<endl;
		return -1;
	}
	newNode->data = value;
	newNode->next = NULL;
	if(*ptrToHeadptr == NULL){
		*ptrToHeadptr = newNode;
	}else{
			Node* traveller = *ptrToHeadptr; 
			while(traveller->next != NULL){
				traveller = traveller->next;
			}
			traveller->next = newNode;
	}
	return 0;
}

int insertNodeInMiddle(Node **ptrToHeadptr, int value){
	
	Node* newNode = (Node*) malloc(sizeof(Node)*1);
	if(newNode == NULL){
	    	    cout <<"no mem "<<endl;
		return -1;
	}
	newNode->data = value;
	newNode->next = NULL;

	// find the middle.  
	if(*ptrToHeadptr == NULL){
		// no node at all.
		*ptrToHeadptr = newNode;
	}else{
		Node * fast = *ptrToHeadptr;
		Node * slow = *ptrToHeadptr;
		while(fast->next != NULL){
		   
			slow = slow->next;
			fast = (fast->next)->next;
			 cout<<"in here"<<endl;
			if(fast == NULL)
		    	break;
		}
			cout <<"problem? here"<<endl;
		Node* position=slow->next;
		cout <<"problem?"<<endl;
		newNode->next = position;
		slow->next = newNode;
		cout<<"we have added in the middle"<<endl;
	}
}

int deleteLinkedList (Node ** ptrToHead){
     Node * mover = *ptrToHead;
	while(mover ){
		cout <<( mover)->data<<endl;
	    Node *new_mover = mover->next;
	    delete(mover);
	    mover = new_mover;
	    
	    
	}
    *ptrToHead = NULL;
}

bool isThereACycleInList(Node ** head){
    if(*head == NULL){
        
        return false;
    }else{
        
        Node * fastPointer = *head;
        Node * slowPointer = *head;
        
        while(fastPointer&& fastPointer->next !=NULL && fastPointer->next != slowPointer){
            fastPointer = fastPointer->next->next;
            slowPointer = slowPointer->next;
        }
        if(fastPointer == NULL|| fastPointer->next == NULL)
        return false;
        if(fastPointer->next == slowPointer){
            return true;
        }
        
    }
    
    
}

void print(Node ** head){
    Node * mover = *head;
    int limit = 100;
    if(!isThereACycleInList(head))
	while(mover ){
		cout <<( mover)->data<<"->";
	    mover = mover->next;
	    
	    // nnot printing more tha 100 . cause there might be a cycle in the list. have coded that


	}
}


void cycleMaker (Node** head){
     Node * mover = *head;
	int length = 0;
	while(mover ){
		cout <<( mover)->data<<endl;
	    mover = mover->next;
	    length++;
	}
	int index = (rand()*1000)%length;
	mover = *head;
	while(index){
	    mover = mover->next;
	    index--;
	}
	mover->next = *head;
}
int main(){
	Node* head;
	insertNodeToHead(&head,1);
		insertNodeToHead(&head,2);
 		insertNodeToHead(&head,21);
 	//		insertNodeToHead(&head,21);
insertNodeInMiddle(&head,5);
 //		insertNodeInMiddle(&head,5);
 	//	insertNodeToTail(&head, 45);
cout<<	isThereACycleInList(&head)<<endl;
		cycleMaker(&head);
		cout <<"is there? now"<<endl;
	cout <<	isThereACycleInList(&head);		
	//print(&head);	
// 	cout <<"done with printint linked list"<<endl;

		
// 		Node* headNew;
// 	 insertNodeToTail(&headNew,12);
// 	  insertNodeToTail(&headNew,13);
// 	   insertNodeToTail(&headNew,14);
	   
	   
	   
// 	cout << insertNodeToTail(&headNew,15)<<endl;	
	
    //	print(&headNew);
}