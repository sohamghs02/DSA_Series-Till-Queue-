#include<iostream>
#include<map>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    //constructor 
    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }
    //destructor
    ~Node(){
        int value = this -> data;
        //memory free
        if(this->next != NULL) {
            delete next;
            this->next = NULL;
        }
        cout << " memory is free for node with data " << value << endl;
    }
};

//elements will be printed in descending order
void InsertAtHead(Node* &head, int d){ 
    //new node creation
    Node* temp = new Node(d);
    temp -> next = head;
    head = temp;
}

//elements will be printed in ascending order
void InsertAtTail(Node* &tail, int d){
    Node* temp = new Node(d);
    tail -> next = temp;
    tail = temp;
}

void InsertAtPosition(Node* &tail, Node* &head, int position, int d){
    //Insert at Start
    if(position == 1){
        InsertAtHead(head, d);
        return;
    }
    Node* temp = head;
    int cnt = 1;
    while(cnt < position-1){
        temp = temp -> next;
        cnt++;
    }
    //Inserting at last position
    if(temp->next == NULL){
        InsertAtTail(tail, d);
        return;
    }
    //creating a node for d
    Node* nodetoInsert = new Node(d);
    nodetoInsert -> next = temp -> next;
    temp -> next = nodetoInsert;
}

//Deletion of a node in LL
void deleteNode(int position, Node* &head, Node* &tail){
    //deleting first or start node
    if(position == 1){
        Node* temp = head;
        head = head -> next;
        //freeing memory of start node
        temp -> next = NULL;
        delete temp;
    }
    else{
        //deleting any middle node or last node
        Node* curr = head;
        Node* prev = NULL;
        int cnt = 1;
        while(cnt < position){
            prev = curr;
            curr = curr -> next;
            cnt++;
        }
        if(curr -> next == NULL){
            prev -> next = curr -> next;
            tail = prev;
        }
        else{
            prev -> next = curr -> next;
        }        
        curr -> next = NULL;
        delete curr;
    }
}

//Approach 1: to detect loop amd to check whether list is circular or not
bool isCircularList(Node* head){
    //empty list
    if(head == NULL){
        return true;
    }
    Node* temp = head -> next;
    while(temp != NULL && temp != head){
        temp = temp -> next;
    }

    if(temp == head){
        return true;
    }
    return false;
}

//Approach 2: to detect loop amd to check whether list is circular or not using map
bool detectLoop(Node* head){
    if(head == NULL)
        return false;
    map<Node*, bool> visited;
    Node* temp = head;

    while(temp !=NULL){
        //cycle is present
        if(visited[temp] == true){
            return true;
        }
        visited[temp] = true;
        temp = temp -> next;
    }
    return false;
}

//Approach 3: to detect loop amd to check whether list is circular or not using Floyd cycle detection
Node* floydDetectLoop(Node* head){
    if(head == NULL)
        return NULL;
    Node* slow = head;
    Node* fast = head;
    while(slow!=NULL && fast!=NULL){
        fast = fast->next;
        if(fast!=NULL){
            fast = fast->next;
        }
        slow = slow->next;
        if(slow==fast){
            cout<<"present at "<<slow->data<<endl;
            return slow;
        }
    }
    return NULL;
}

//find starting node of loop from above approach
Node* getStartingNode(Node* head){
    if(head == NULL){
        return NULL;
    }
    Node* intersection = floydDetectLoop(head);
    Node* slow = head;
    while(slow!=intersection){
        slow = slow->next;
        intersection = intersection->next;
    }
    return slow;
}

//to remove a loop in a linked list
void removeLoop(Node* head){
    if(head == NULL)
        return;
    Node* startOfLoop = getStartingNode(head);
    Node* temp = startOfLoop;
    while(temp->next != startOfLoop){
        temp = temp->next;
    }
    temp->next = NULL; 
}

//how to traverse a linked list
void print(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        cout << temp -> data <<" ";
        temp = temp -> next; 
    }
    cout<<endl;
}

int main(){
    //created a new node
    Node* node1 = new Node(10);
    //cout << node1 -> data << endl;
    //cout << node1 -> next <<endl;

    //head pointed to node1
    Node* head = node1;    
    //print(head);
    //InsertAtHead(head,12);
    //print(head);
    //InsertAtHead(head,15);
    //print(head);

    //tail pointed to node1
    Node* tail = node1;
    //print(head);
    InsertAtTail(tail,12);
    //print(head);
    InsertAtTail(tail,15);
    //print(head);

    //Inserting element at any random position in a LL
    //cout<<endl;
    //cout<<"Inserting a new element at 3rd position:"<<endl; 
    InsertAtPosition(tail, head , 3 , 22);
    //print(head);
    //cout<<"Inserting a new element at 1st position:"<<endl;
    InsertAtPosition(tail, head , 1 , 29);
    //print(head);
    //cout<<"Inserting a new element at Last position:"<<endl;
    InsertAtPosition(tail, head , 6 , 30);
    print(head);
    cout<<endl;
    //cout<<"head: "<<head -> data<<endl;
    //cout<<"tail: "<<tail -> data<<endl;

    tail->next = head->next;
    //cout<<"head: "<<head -> data<<endl;
    //cout<<"tail: "<<tail -> data<<endl;

    /*
    //Deleting element at any random position in a LL
    cout<<endl;
    cout<<"Deleting 1st element from LL:"<<endl;
    deleteNode(1, head, tail);
    print(head);
    cout<<"Deleting Last element from LL:"<<endl;
    deleteNode(5, head, tail);
    print(head);
    cout<<"Deleting any random middle element from LL:"<<endl;
    deleteNode(2, head, tail);
    print(head);
    cout<<endl;
    cout<<"head: "<<head -> data<<endl;
    cout<<"tail: "<<tail -> data<<endl
    */

    if(floydDetectLoop(tail) != NULL){
        cout << " Linked List is Circular in nature" << endl;
    }
    else{
        cout << "Linked List is not Circular " << endl;
    }

    Node* loop = getStartingNode(head);
    cout<<"Loop starts at "<<loop->data<<endl;

    removeLoop(head);
    print(head);

    return 0;
}