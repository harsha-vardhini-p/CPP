/*

1.STL is a library of components that are commonly used in C++ programming. 
2.It provides a collection of template classes and functions for data structures, algorithms, and iterators. 
3.The STL allows programmers to write efficient and reusable code by providing a set of pre-defined data structures 
(such as vectors, lists, queues, stacks, etc.) and 
algorithms (such as sorting, searching, etc.) that can be easily used with different types of data.

*/

/*
CONTAINERS:

1.Containers are data structures that store and organize data in a specific way.
2.STL provides several types of containers, including:

- Sequence containers: These include vector, list, deque,stack,queue and priority_queue. They store elements in
a linear sequence and allow for efficient insertion and deletion of elements.

- Associative containers: These include set, multiset, map, and multimap. They store elements 
in a sorted manner and allow for fast searching and retrieval of elements based on keys.

- Unordered associative containers: These include unordered_set, unordered_multiset, unordered_map, and unordered_multimap. 
They store elements in an unordered manner and provide fast access to elements based on keys using hash functions.

*/

/*
ITERATORS:

1.Iterators are objects that allow you to traverse and manipulate the elements of a container.
2.They provide a way to access the elements of a container without exposing the underlying implementation details.
3.STL provides several types of iterators, including:
- Input iterators: These allow you to read elements from a container in a forward direction.
- Output iterators: These allow you to write elements to a container in a forward direction.
- Forward iterators: These allow you to read and write elements in a forward direction.
- Bidirectional iterators: These allow you to read and write elements in both forward and backward
directions.
- Random access iterators: These allow you to read and write elements in any direction and provide
constant time access to any element in the container.


Begin,End Iterators are used to specify the range of elements in a container that you want to operate on.
- The begin() function returns an iterator pointing to the first element of the container.
- The end() function returns an iterator pointing to the position just after the last element of the
container.

*/

/*
ALGORITHMS:

1.Algorithms are a set of instructions that perform specific operations on data.
2.STL provides a wide range of algorithms that can be used with different types of containers and
iterators. Some common algorithms include:
- Sorting algorithms: sort, stable_sort, partial_sort, etc.
- Searching algorithms: find, binary_search, etc.
- Modifying algorithms: copy, transform, remove, etc.
- Set algorithms: set_union, set_intersection, set_difference, etc.
- Numeric algorithms: accumulate, inner_product, etc.

count algorithm is used to count the number of occurrences of a specific value in a container.
- It takes a range of elements (specified by iterators) and a value to search for, and returns the count of occurrences of that value in the specified range.

max,min algorithm is used to find the maximum or minimum element in a range of elements.
- It takes a range of elements (specified by iterators) and returns the maximum or minimum
element in that range.

reverse algorithm is used to reverse the order of elements in a range.
- It takes a range of elements (specified by iterators) and reverses the order of
elements in that range.

*/


/*
STL FUNCTION OBJECTS(FUNCTORS):
1.Function objects, also known as functors, are objects that can be called as if they were functions.
2.They are created by defining a class that overloads the operator() function, which allows the object to be called like a function.
3.Function objects can be used in STL algorithms to provide custom behavior or to encapsulate state.
4.STL provides several predefined function objects, such as:
- Arithmetic function objects: plus, minus, multiplies, divides, etc.
- Comparison function objects: equal_to, not_equal_to, greater, less, etc.
- Logical function objects: logical_and, logical_or, logical_not, etc.

*/
