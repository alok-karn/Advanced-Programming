#include<bits/stdc++.h>
using namespace std;

class Queue{
    int front, rear, size;
    unsigned capacity;
    int *array;
public:
    Queue(unsigned capacity){
        this->capacity = capacity;
        front = this->size = 0;
        rear = capacity - 1;
        array = new int[this->capacity];
    }
    bool isFull(Queue *queue){
        return (queue->size == queue->capacity);
    }
    bool isEmpty(Queue *queue){
        return (queue->size == 0);
    }
    void enqueue(int item){
        if(isFull(this))
            return;
        this->rear = (this->rear + 1) % this->capacity;
        this->array[this->rear] = item;
        this->size = this->size + 1;
        cout << item << " enqueued to queue " << endl;
    }
    int dequeue(){
        if(isEmpty(this))
            return INT_MIN;
        int item = this->array[this->front];
        this->front = (this->front + 1) % this->capacity;
        this->size = this->size - 1;
        return item;
    }
    int front(){
        if(isEmpty(this))
            return INT_MIN;
        return this->array[this->front];
    }
    int rear(){
        if(isEmpty(this))
            return INT_MIN;
        return this->array[this->rear];
    }
};

int main(){
    Queue queue(1000);
    queue.enqueue(10);
    queue.enqueue(20);
    queue.enqueue(30);
    queue.enqueue(40);
    cout << queue.dequeue() << " dequeued from queue " << endl;
    cout << "Front item is " << queue.front() << endl;
    cout << "Rear item is " << queue.rear() << endl;
    return 0;
}
