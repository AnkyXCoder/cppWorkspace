#include <iostream>

using namespace std;

class Node {
public:
  int data;
  Node *next;

  Node(int data) {
    this->data = data;
    next = NULL;
  }
};

void print_linked_list(Node *head) {
  Node *ref = head;
  if (NULL == ref) {
    return;
  }

  do {
    cout << ref->data << "->";
    ref = ref->next;
  } while (NULL != ref);
  cout << "NULL" << endl;
}

Node *takeInput(void) {
  int data;
  cin >> data;
  Node *head = NULL;
  Node *tail = NULL;
  while (-1 != data) {
    Node *n = new Node(data);
    if (NULL == head) {
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

Node *takeInput2(void) {
  int data;
  cin >> data;
  Node *head = NULL;
  while (-1 != data) {
    Node *n = new Node(data);
    if (NULL == head) {
      head = n;
    } else {
      n->next = head;
      head = n;
    }
    cin >> data;
  }
  return head;
}

int getLength(Node *head) {
  int length = 0;
  while (NULL != head) {
    length++;
    head = head->next;
  }
  return length;
}

void print_node(Node *head, int idx) {
  if ((NULL == head) || ((idx < 0) && (idx > getLength(head)))) {
    cout << "-1" << endl;
    return;
  }

  int node_idx = 0;
  while (node_idx < idx) {
    node_idx++;
    head = head->next;
  };
  cout << "Data at idx: " << idx << " is: " << head->data << endl;
}

Node *insert_node_at_index(Node *head, int idx, int data) {
  if (idx < 0) {
    return head;
  }

  Node *n = new Node(data);
  if ((idx == 0) && (NULL != head)) {
    n->next = head;
    head = n;
    return head;
  }

  Node *copyHead = head;
  int count = 1;
  while ((count < idx) && (NULL != head)) {
    head = head->next;
    count++;
  }
  if (NULL != head) {
    n->next = head->next;
    head->next = n;
    return copyHead;
  }
  return copyHead;
}

Node *delete_node_index(Node *head, int idx) {
  if (idx < 0) {
    return head;
  }

  if ((idx == 0) && (NULL != head)) {
    Node *newHead = head->next;
    head->next = NULL;
    delete head;
    return newHead;
  }

  Node *currentHead = head;
  int count = 1;
  while ((count < idx) && (NULL != currentHead)) {
    currentHead = currentHead->next;
    count++;
  }
  if ((NULL != currentHead) && (NULL != currentHead->next)) {
    Node *tempNode = currentHead->next;
    currentHead->next = currentHead->next->next;
    tempNode->next = NULL;
    delete tempNode;
    return head;
  }
  return head;
}

int get_length(Node *head) {
  if (NULL == head) {
    return 0;
  }

  return 1 + get_length(head->next);
}

bool isPresent(Node *head, int data) {
  Node *current = head;
  while (NULL != current) {
    if (data == current->data) {
      return true;
    }
    current = current->next;
  }
  return false;
}

bool findElement(Node *head, int data) {
  if (NULL == head) {
    return false;
  }
  if (data == head->data) {
    return true;
  }
  return findElement(head->next, data);
}

Node *get_mid_node(Node *head) {
  Node *slow = head;
  Node *fast = head->next;
  while ((NULL != fast) && (NULL != fast->next)) {
    slow = slow->next;
    fast = fast->next->next;
  }
  // even number of nodes in Linked List
  if (NULL != fast) {
    return slow->next;
  }
  // odd number of nodes in Linked List
  return slow;
}

Node *reverse_linked_list(Node *head) {
  Node *current = head;
  Node *prev = NULL;
  Node *n;

  while (NULL != current) {
    n = current->next;
    current->next = prev;

    prev = current;
    current = n;
  }
  return prev;
}

Node *removeNthFromEnd(Node *head, int k) {
  if ((NULL == head) || (k <= 0) || (k < get_length(head))) {
    return head;
  }

  Node *one = head;
  Node *two = head;

  while (k--) { /// k times
    two = two->next;
  }
  if (two == NULL) { /// length of ll = k  => delete head node
    return one->next;
  }
  while (two->next != NULL) {
    one = one->next;
    two = two->next;
  }

  /// delete kth node from end
  Node *toDelete = one->next;
  one->next = one->next->next;
  delete toDelete;

  return head;
}

Node *mergeTwoLists1(Node *l1, Node *l2) {
  if (NULL == l1) {
    return l2;
  }
  if (NULL == l2) {
    return l1;
  }

  Node *finalHead = NULL;
  if (l1->data < l2->data) {
    finalHead = new Node(l1->data);
    l1 = l1->next;
  } else {
    finalHead = new Node(l2->data);
    l2 = l2->next;
  }
  Node *newList = finalHead;
  while ((NULL != l1) && (NULL != l2)) {
    if (l1->data < l2->data) {
      newList->next = new Node(l1->data);
      l1 = l1->next;
    } else {
      newList->next = new Node(l2->data);
      l2 = l2->next;
    }
    newList = newList->next;
  }
  if (NULL != l1) {
    newList->next = new Node(l1->data);
  } else {
    newList->next = new Node(l2->data);
  }
  newList = newList->next;
  return finalHead;
}

Node *mergeTwoLists2(Node *l1, Node *l2) {
  if (NULL == l1) {
    return l2;
  }
  if (NULL == l2) {
    return l1;
  }

  Node *newHead = NULL;
  if (l1->data < l2->data) {
    newHead = new Node(l1->data);
    l1 = l1->next;
  } else {
    newHead = new Node(l2->data);
    l2 = l2->next;
  }
  newHead->next = mergeTwoLists2(l1, l2);
  return newHead;
}

int main(void) {
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

  Node *head = &n1;

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

  cout << "Enter data to add in a new Linked List: " << endl;
  head = takeInput();
  cout << "New Linked List: " << endl;
  print_linked_list(head);

  cout << "Length: " << get_length(head) << endl;

  int x;
  cout << "Enter value to check if it is in Linked List: ";
  cin >> x;
  cout << "Value: " << x << ((isPresent(head, x)) ? " is " : " isn't ")
       << "in Linked List" << endl;

  cout << "Enter value to check if it is in Linked List: ";
  cin >> x;
  cout << "Value: " << x << ((findElement(head, x)) ? " is " : " isn't ")
       << "in Linked List" << endl;

  Node *mid_node = get_mid_node(head);
  cout << "Data at the mid Node of Linked List is: " << mid_node->data << endl;

  Node *reverse_list = reverse_linked_list(head);
  cout << "Reversed Linked List: ";
  print_linked_list(reverse_list);

  cout << "Enter the index of Node to Delete from end of the Linked List: ";
  cin >> x;
  reverse_list = removeNthFromEnd(reverse_list, x);
  cout << "Updated Linked List: ";
  print_linked_list(reverse_list);

  cout << "Enter sorted data to add in Linked List l1: " << endl;
  Node *l1 = takeInput();
  cout << "Linked List l1: " << endl;
  print_linked_list(l1);

  cout << "Enter sorted data to add in Linked List l2: " << endl;
  Node *l2 = takeInput();
  cout << "Linked List l2: " << endl;
  print_linked_list(l2);
  cout << "Merging the given linked lists..." << endl;

  Node *mergedList1 = mergeTwoLists1(l1, l2);
  cout << "Merged Linked List (method1): ";
  print_linked_list(mergedList1);

  Node *mergedList2 = mergeTwoLists2(l1, l2);
  cout << "Merged Linked List (method2): ";
  print_linked_list(mergedList2);

  return 0;
}
