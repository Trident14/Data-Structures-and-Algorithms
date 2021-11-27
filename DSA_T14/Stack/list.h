class List; //forward declaration
class Node{
    int data;
public:
    Node *next;
    Node(int d):data(d),next(NULL){}; //intilization list
    /*since list cannot access the data and node so we make a friend
     with list class inorder to share private data members*/
    int getData(){
        return data;
    }

    friend class List;
};

class List{
    Node*head;
    Node*tail;
public:
    List():head(NULL),tail(NULL){};

    Node *begin(){
        return head;
    }

    void push_front(int data){
        if(head==NULL){
            Node*n=new Node(data);
            head=tail=n;
        }else{
            Node*n=new Node(data);
            n->next=head;
            head=n;
        }
    }

    void push_back(int data){
        if(head==NULL){
            Node*n=new Node(data);
            head=tail=n;
        }else{
            Node*n=new Node(data);
            tail->next=n;
            tail=n;
        }
    }
    void insert(int data,int pos){
        if(pos==0){
            push_front(data);
        }else{
            Node* temp=head;
            for(int jump=0;jump<=pos-1;jump++){
                temp=temp->next;
            }
            Node* n=new Node(data);
            n->next=temp->next;
            temp->next=n;
        }
    }

    bool search(Node* head,int key){
            Node *temp=head;
            while(temp!=NULL){
                if(head->getData()==key){
                    return true;
                }
                head=head->next;
            }
            return false;
    }
};