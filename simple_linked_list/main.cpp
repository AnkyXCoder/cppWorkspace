#include <iostream>

using namespace std;

class Node
{
public:
    int data;
    Node* next;

    Node(int data)
    {
        this->data = data;
        next = NULL;
    }
};

void print_linked_list(Node* head)
{
    Node* ref = head;
    if(NULL == ref) {
        return;
    }

    do {
        cout << ref->data << "->";
        ref = ref->next;
    } while(NULL != ref);
    cout << "NULL" << endl;
}

Node* takeInput(void)
{
    int data;
    cin >> data;
    Node* head = NULL;
    Node* tail = NULL;
    while(-1 != data) {
        Node* n = new Node(data);
        if(NULL == head) {
            head = n;
            tail = n;
        } else {
            tail->next = n;
            tail = n;
        }
        cin >> data;
    }
    return head;
}

Node* takeInput2(void)
{
    int data;
    cin >> data;
    Node* head = NULL;
    while(-1 != data) {
        Node* n = new Node(data);
        if(NULL == head) {
            head = n;
        } else {
            n->next = head;
            head = n;
        }
        cin >> data;
    }
    return head;
}

int getLength(Node* head)
{
    int length = 0;
    while(NULL != head) {
        length++;
        head = head->next;
    }
    return length;
}

void print_node(Node* head, int idx)
{
    if((NULL == head) || ((idx < 0) && (idx > getLength(head)))) {
        cout << "-1" << endl;
        return;
    }

    int node_idx = 0;
    while(node_idx < idx) {
        node_idx++;
        head = head->next;
    };
    cout << "Data at idx: " << idx << " is: " << head->data << endl;
}

Node* insert_node_at_index(Node* head, int idx, int data)
{
    if(idx < 0) {
        return head;
    }

    Node* n = new Node(data);
    if((idx == 0) && (NULL != head)) {
        n->next = head;
        head = n;
        return head;
    }

    Node* copyHead = head;
    int count = 1;
    while((count < idx) && (NULL != head)) {
        head = head->next;
        count++;
    }
    if(NULL != head) {
        n->next = head->next;
        head->next = n;
        return copyHead;
    }
    return copyHead;
}

Node* delete_node_index(Node* head, int idx)
{
    if(idx < 0) {
        return head;
    }

    if((idx == 0) && (NULL != head)) {
        Node* newHead = head->next;
        head->next = NULL;
        delete head;
        return newHead;
    }

    Node* currentHead = head;
    int count = 1;
    while((count < idx) && (NULL != currentHead)) {
        currentHead = currentHead->next;
        count++;
    }
    if((NULL != currentHead) && (NULL != currentHead->next)) {
        Node* tempNode = currentHead->next;
        currentHead->next = currentHead->next->next;
        tempNode->next = NULL;
        delete tempNode;
        return head;
    }
    return head;
}

int main(void)
{
    Node n1(1);
    Node n2(2);
    Node n3(3);
    Node n4(4);
    Node n5(5);

    n1.next = &n2;
    n2.next = &n3;
    n3.next = &n4;
    n4.next = &n5;
    cout << "n1.data = " << n1.data << endl;
    cout << "n2.data = " << n2.data << endl;

    Node* head = &n1;

    cout << "head->data = " << head->data << endl;

    print_linked_list(head);

    cout << "Enter data to add in a new Linked List: " << endl;
    head = takeInput();
    cout << "New Linked List: " << endl;
    print_linked_list(head);
    cout << "Length: " << getLength(head) << endl;

    cout << "Enter data to add in a new Linked List: " << endl;
    head = takeInput2();
    cout << "New Linked List: " << endl;
    print_linked_list(head);
    cout << "Length: " << getLength(head) << endl;

    int idx, data;
    cout << "Enter Node index to print data: ";
    cin >> idx;
    print_node(head, idx);

    cout << "Enter new data: ";
    cin >> data;
    cout << "at index: ";
    cin >> idx;
    insert_node_at_index(head, idx, data);
    cout << "Updated Linked List: ";
    print_linked_list(head);

    cout << "Enter Node index to delete: ";
    cin >> idx;

    head = delete_node_index(head, idx);
    cout << "Updated Linked List: ";
    print_linked_list(head);

    return 0;
}
