/*
Interleave two halves of the queue
Given a queue of integers of even length, rearrange the elements by interleaving
the first half of the queue with second half of the queue.

Input:
In the function integer queue is passed
11 12 13 14 15 16 17 18 19 20

Output:
Return the interleaved queue
11 16 12 17 13 18 14 19 15 20
*/

#include <bits/stdc++.h>
using namespace std;

queue<int> interLeave(queue<int> q){
    int n = q.size();
    queue<int> q1,q2;
    for(int i = 0; i < (n/2) ; i++){
        q1.push(q.front());
        q.pop();
    }
    for(int i = 0; i < (n/2) ; i++){
        q2.push(q.front());
        q.pop();
    }
    for(int i = 0; i < (n/2) ; i++){
        q.push(q1.front());
        q1.pop();
        q.push(q2.front());
        q2.pop();
    }
    return q;
}