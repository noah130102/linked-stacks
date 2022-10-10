#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int x){
        data=x;
        next=NULL;

    }
};
class mystack {
    private:
    int size;
    Node* head;
    public:
    mystack(){
        head=NULL;
        size=0;
    }
    void push (int x){
        Node* temp = new Node(x);
        temp-> next = head;
        head = temp;
        size++;
    }

    int Top(){
        if (head == NULL)
        {
            cout<< "NO ELEMENTS TO PEEK";
        }
        return head->data;
    }

    int pop(){
        if (head == NULL)
        {
            cout<< "NO ELEMENTS TO POP";
        }
        Node* toDelete = head;
        head=head->next;
        
        delete toDelete;
        size--;

    }
    bool empty(){

        return head==NULL;
    }
    int Size(){
        return size;
    }
};
int main()
{
    mystack st;
    st.push(1);
    st.push(2);
    st.push(3);
    cout<<st.Top()<<endl;
    st.pop();
    cout<<st.Top()<<endl;
    // st.pop();
    // st.pop();
    // st.Top();
    cout<<st.empty(); 
    return 0;
}