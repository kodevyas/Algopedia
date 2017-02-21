/*
Before moving to any other data structure from the STL , lets dicusss and know
more about iterators.


Source:"www.cplusplus.com"

An iterator is any object that, pointing to some element in a range of elements (such as an array or a container), has the ability to iterate through the elements of that range using a set of operators (with at least the increment (++) and dereference (*) operators).
The most obvious form of iterator is a pointer: A pointer can point to elements in an array, and can iterate through them using the increment operator (++). But other kinds of iterators are possible. For example, each container type (such as a list) has a specific iterator type designed to iterate through its elements.
Notice that while a pointer is a form of iterator, not all iterators have the same functionality of pointers; Depending on the properties supported by iterators, they are classified into five different categories:


1.1 Input -> they can be used in sequential input operations, where each values pointed by the iterator is read only once and then the iterator is incremented.
1.2 Output -> Can be dereferenced as an lvalue
2. Forward -> have the functionality of input iterators if not constant iterators , and also the functionaliy of output iterators although limit to one direction in which to iterate through a range.
3. Bidirectional -> they are like forward but can iterate backwards also.
4. Random access -> has functionality of bidectional iterators , but can also access ranges of elements non sequential fashion.


*/


// Let's take example of vectors to explain iterators




#include<bits/stdc++.h>
using namespace std;
int main()
{

	// vector with four elements and value 200
	vector<int> num(4,200);
	// defining iterator for the vector
	vector<int>::iterator it;
//.begin() is constant iterator that points the first element of the sequence containter
//.end() is constant iterator that points the last element of the sequence containter
    for (it = num.begin(); it!=num.end();it++)
    {

        cout<<*it<<endl;

    }

    int elements [] ={1,2,3,4,5};
    //initalising a vector with an array
    vector <int> bum(elements,elements+5);
    // defining a reverse iterator
    vector<int>::reverse_iterator rit;
    //.rbegin() is iterator that points to the first element from the end.
    // .rend() is iterator that points to the last element from the end.
    // incrementing the reverse iterator , it moves in opposite direction


    for (rit = bum.rbegin(); rit!=bum.rend();rit++)
    {

        cout<<*rit<<endl;

    }

	return 0;
}
