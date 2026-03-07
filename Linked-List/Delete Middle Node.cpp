// Problem - https://www.naukri.com/code360/problems/delete-middle-node_763267?utm=codolio&count=25&page=1&search=Middle%20&sort_entity=order&sort_order=ASC&leftPanelTabValue=PROBLEM&customSource=studio_nav



// --------------------Solution-------------------------
Node* deleteMiddle(Node* head){
    if(head == NULL || head -> next == NULL) {
        return NULL;
    }

    Node* slow = head;
    Node* fast = head;

    while(fast != NULL && fast -> next != NULL) {
        slow = slow -> next; // Moving one step
        fast = fast -> next -> next; // Moving two step
    }

    Node* temp = head;
    while(temp -> next != slow) {
        temp = temp -> next;
    }
    
    temp -> next = slow -> next; // Delete slow node

    return head;

}
