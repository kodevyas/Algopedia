/*
we will  be using in built STL for implement stack
as it is memory efficient , easy manipulate, and quite handy

*/


stack<int> s; //defines a stack of ints, thought it can be of any type as per requirements

vector<int> mydeque(2,100);
stack<int> second (mydeque);// initialised stack second with another vector mydeque 

/*
Few of the common operations while using stacks

1. Push  (inserting an element at the top of the stack)
2. Pop   (popping off an element from the top of the stack)


*/

// push operation
s.push(3); // inserts 3 at top of stack
// pop operation
s.pop(); // pops off top element from the stack , doesn't returns anything
s.top(); //returns the top element of the stack

s.size(); // returns the number of elements in the stack
s.empty(); // returns True if stack is empty
s.swap(t); // swaps the value of two stacks, here s and t are two stacks
