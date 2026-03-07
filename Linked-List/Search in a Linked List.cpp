// Problem - https://www.naukri.com/code360/problems/search-in-a-linked-list_975381?utm=codolio&count=25&page=1&search=Search%20in%20a%20&sort_entity=order&sort_order=ASC&leftPanelTabValue=PROBLEM&customSource=studio_nav



// -------------------Solution-------------------------
int searchInLinkedList(Node<int> *head, int k) {
    Node<int>* temp = head;

    while(temp != NULL) {
        if(temp -> data == k) {
            return true;
        }

        temp = temp -> next;
    }
    return false;
}
