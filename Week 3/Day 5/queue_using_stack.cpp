class MyQueue {
public:
    int front, rear;
    int queue[100];
    int size;
    MyQueue() {
        front=-1;
        rear=-1;
        size=100;
    }
    void push(int x) {
        if (rear==size-1) {
            cout<<"Queue Overflow\n";
            return;
        }
        if (front==-1){
            front=0;
        }
        rear++;
        queue[rear]=x;
    }
    int pop() {
        if (front==-1) {
            cout<<"Queue Underflow\n";
            return -1;
        }
        int val=queue[front];
        front++;
        if (front>rear) {
            front=rear=-1;
        }
        return val;
    }
    int peek() {
        if (front==-1) {
            cout<<"Queue Empty\n";
            return -1;
        }
        return queue[front];
    }
    bool empty() {
        return (front==-1);
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */