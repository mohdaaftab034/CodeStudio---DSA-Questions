// Problem - https://www.naukri.com/code360/problems/middle-of-linked-list_973250?utm=codolio&count=25&page=1&search=Middle%20&sort_entity=order&sort_order=ASC&leftPanelTabValue=PROBLEM&customSource=studio_nav


// ------------------Solution----------------------
Node *findMiddle(Node *head) {

    if(head == NULL) {
        return NULL;
    }

    if(head -> next == NULL) {
        return head;
    }

    Node* slow = head;
    Node* fast = head;


    while(fast != NULL && fast -> next != NULL) {
    
        slow = slow -> next; // Moving one step
        fast = fast -> next -> next; // Moving two step
    }

    return slow;
}

