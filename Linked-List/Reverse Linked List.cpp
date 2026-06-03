// Problem - https://www.naukri.com/code360/problems/reverse-linked-list_920513?utm=codolio&leftPanelTabValue=PROBLEM




// -----------------Solution - 1------------------
Node* reverse(Node* curr, Node* prev) {
    if(curr == NULL) {
        return prev;
    }

    Node* fut = curr-> next;
    curr-> next = prev;

    reverse(fut, curr);
}

Node* reverseLinkedList(Node *head)
{
    return reverse(head, NULL);
}



// -------------------Solution - 2---------------------
#include<algorithm>;


Node* reverseLinkedList(Node *head)
{
    vector<int> arr;

    if(head == NULL) {
        return head;
    }

    while(head != NULL) {

        arr.push_back(head->data);
        head = head-> next;

    }

    reverse(arr.begin(), arr.end());

    Node* temp = new Node(arr[0]);
    Node* res = temp;

    for(int i = 1; i < arr.size(); i++) {

        Node* val = new Node(arr[i]);
        temp-> next = val;
        temp = temp-> next;
    }

    return res;
}
