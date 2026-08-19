#include <bits/stdc++.h>
using namespace std;

#define SIZE 100

struct Queue{
    int a[SIZE];
    int front;
    int rear;
};

using Q = Queue;

void init(Q q){
    q.front = -1;
    q.rear = -1;
}

bool isEmpty(Q q){
    if(q.front == -1){
        return true;
    }
    return false;
}

bool isFull(Q q){
    if(q.front == SIZE - 1 || q.front > q.rear){
        return true;
    }
    return false;
}

void enqueue(Q q, int x){
    if (isFull(q)){
        return;
    }
    q.a[q.rear++] = x;
}

void dequeue(Q q){
    if(isEmpty(q)){
        return;
    }
    q.front++;
}