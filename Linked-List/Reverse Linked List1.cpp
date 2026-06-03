// Problem - https://www.naukri.com/code360/problems/reverse-the-singly-linked-list_799897?utm=codolio&leftPanelTabValue=PROBLEM



// -----------------Solution - 1------------------
LinkedListNode<int> *reverse(LinkedListNode<int> * curr, LinkedListNode<int>* prev) {

    if(curr == NULL) {
        return prev;
    }

    LinkedListNode<int>* fut = curr-> next;
    curr-> next = prev;
    reverse(fut, curr);
}


LinkedListNode<int> *reverseLinkedList(LinkedListNode<int> *head) 
{
    return reverse(head, NULL);
}



// -----------------Solution - 2---------------------
#include <bits/stdc++.h>

LinkedListNode<int> *reverseLinkedList(LinkedListNode<int> *head) 
{
    if(head == NULL){
        return head;
    }

    vector<int>arr;

    while(head != NULL) {

        arr.push_back(head-> data);
        head = head-> next;

    }

    reverse(arr.begin(), arr.end());

    LinkedListNode<int> *temp = new LinkedListNode<int>(arr[0]);
    LinkedListNode<int> *res = temp;

    for (int i = 1; i < arr.size(); i++) {

        temp-> next = new LinkedListNode<int>(arr[i]);
        temp = temp-> next;

    }

    return res;
}
