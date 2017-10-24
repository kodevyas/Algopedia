// Author: Rahul Mishra
// Email: rahul.mishra2003@gmail.com

/*
we will  be using in built STL for implementing queue
as it is memory efficient , easy manipulate, and quite handy

*/


queue<int> s; //defines a queue of ints, thought it can be of any type as per requirements

vector<int> mydeque(2,100);
queue<int> second (mydeque);// initialised queue second with another vector mydeque 

/*
Few of the common operations while using stacks

1. Push  (inserting an element at the top of the stack)
2. Pop   (popping off an element from the top of the stack)


*/

// push operation
s.push(3); // inserts 3 at the last of the queue in FIFO fashion

// pop operation
s.pop(); // pops off first element from the queue , doesn't returns anything

s.front(); //returns the first element of the queue, in FIFO fashion
s.back();  //returns the last element of the queue, in FIFO fashion
s.size(); // returns the number of elements in the queue
s.empty(); // returns True if stack is queue
s.swap(t); // swaps the value of two queue, here s and t are two queue
