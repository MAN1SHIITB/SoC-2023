# SoC-2023
Heyal!
This is a short doc on what I have learn in my Season Of Code-2023 (SoC-2023). Well I have jsut satrted learning DSA, also simultaneouly I have entered into compitetive programming. SoC helped me lot in this, all thanks to IIT Bombay WnCC Club.
Well let's begin!

Refrence to all the below is : https://awesome-sage-ee5.notion.site/Seasons-Of-Code-CP-1951186564c94c07b80c13181c4b161d 


Week 1:
This week was the beggingn week and I was introduced to the following:
1. Configuring VsCode in Windows 
2. Basic Number theory 
3. Bitwise Operators
4. Time complexity
5. Data structures in C++ STL

In the Configuring VsCode in Windows part, I had downloaded VS Code for windows 11 and also MinGW for running the code. Moving on to the next part Basic Number Theory, most of it was all the basic stuff coverd upto class 12, some of the important topics were :
- GCD and Euler’s theorem: https://crypto.stanford.edu/pbc/notes/numbertheory/euclid.html
- Modular arithmetic: https://crypto.stanford.edu/pbc/notes/numbertheory/arith.html
- Euler’s totient function: https://crypto.stanford.edu/pbc/notes/numbertheory/units.html

Moving on to Bitwise Operators, i have learnt around 6 different types of bitwise operators:
1. The & (bitwise AND) in C or C++ takes two numbers as operands and does AND on every bit of two numbers. The result of AND is 1 only if both bits are 1.  
2. The | (bitwise OR) in C or C++ takes two numbers as operands and does OR on every bit of two numbers. The result of OR is 1 if any of the two bits is 1. 
3. The ^ (bitwise XOR) in C or C++ takes two numbers as operands and does XOR on every bit of two numbers. The result of XOR is 1 if the two bits are different. 
4. The << (left shift) in C or C++ takes two numbers, the left shifts the bits of the first operand, and the second operand decides the number of places to shift. 
5. The >> (right shift) in C or C++ takes two numbers, right shifts the bits of the first operand, and the second operand decides the number of places to shift. 
6. The ~ (bitwise NOT) in C or C++ takes one number and inverts all bits of it.

Time Comoplexity:
Instead of measuring actual time required in executing each statement in the code, Time Complexity considers how many times each statement executes. 
Different Types:
▪ A logarithmic algorithm – O(logn) : Runtime grows logarithmically in proportion to n. 
▪ A linear algorithm – O(n)  : Runtime grows directly in proportion to n. 
▪ A superlinear algorithm – O(nlogn)  : Runtime grows in proportion to n. 
▪ A polynomial algorithm – O(n^c)  : Runtime grows quicker than previous all based on n. 
▪ A exponential algorithm – O(c^n)  : Runtime grows even faster than polynomial algorithm based on n. 
▪ A factorial algorithm – O(n!)  : Runtime grows the fastest and becomes quickly unusable for even small values of n.

Data Structures:
A data structure is a storage that is used to store and organize data. It is a way of arranging data on a computer so that it can be accessed and updated efficiently.
Popular types of Data Structures:
1. Satck: Stacks are a type of container adaptors with LIFO(Last In First Out) type of working, where a new element is added at one end (top) and an element is removed from that end only.  Stack uses an encapsulated object of either vector or deque (by default) or list (sequential container class) as its underlying container, providing a specific set of member functions to access its elements. 
2. Queue: Queues are a type of container adaptors that operate in a first in first out (FIFO) type of arrangement. Elements are inserted at the back (end) and are deleted from the front. Queues use an encapsulated object of deque or list (sequential container class) as its underlying container, providing a specific set of member functions to access its elements.
3. Priority Queue: A C++ priority queue is a type of container adapter, specifically designed such that the first element of the queue is either the greatest or the smallest of all elements in the queue, and elements are in non-increasing or non-decreasing order (hence we can see that each element of the queue has a priority {fixed order}).
4. Heap: The heap data structure can be implemented in a range using STL which provides faster max or min item retrieval, and faster insertion and deletion on sorted data and also works as a sub-routine for heapsort.
5. Deque: Double-ended queues are sequence containers with the feature of expansion and contraction on both ends. They are similar to vectors, but are more efficient in case of insertion and deletion of elements.
6. Vectors: Vectors are the same as dynamic arrays with the ability to resize itself automatically when an element is inserted or deleted, with their storage being handled automatically by the container. Vector elements are placed in contiguous storage so that they can be accessed and traversed using iterators. In vectors, data is inserted at the end. Inserting at the end takes differential time, as sometimes the array may need to be extended. Removing the last element takes only constant time because no resizing happens. Inserting and erasing at the beginning or in the middle is linear in time.
7. List: Lists are sequence containers that allow non-contiguous memory allocation. As compared to the vector, the list has slow traversal, but once a position has been found, insertion and deletion are quick (constant time). Normally, when we say a List, we talk about a doubly linked list. For implementing a singly linked list, we use a forward_list.


Yeah so this was all about Week 1. There were still more Data Structures, but the above are some of the important ones.



Week 2:
Moving on to Week 2, in this week I was introduced to sorting, searching algorithms and divide and conquer techniques.

Sorting Algorithms:
A Sorting Algorithm is used to rearrange a given array or list of elements according to a comparison operator on the elements. The comparison operator is used to decide the new order of elements in the respective data structure.
Selection sort, bubble sort, merge sort, insertion sort, quick sort and heap sort are some of the important algoritms

1. Selection Sort:
Selection sort is a simple and efficient sorting algorithm that works by repeatedly selecting the smallest (or largest) element from the unsorted portion of the list and moving it to the sorted portion of the list. 
The algorithm repeatedly selects the smallest (or largest) element from the unsorted portion of the list and swaps it with the first element of the unsorted part. This process is repeated for the remaining unsorted portion until the entire list is sorted. 
Time Complexity: The time complexity of Selection Sort is O(N^2) as there are two nested loops:
1. One loop to select an element of Array one by one = O(N)
2. Another loop to compare that element with every other Array element = O(N)
3. Therefore overall complexity = O(N) * O(N) = O(N*N) = O(N^2)

2. Bubble Sort:
Bubble Sort is the simplest sorting algorithm that works by repeatedly swapping the adjacent elements if they are in the wrong order. This algorithm is not suitable for large data sets as its average and worst-case time complexity is quite high.
In this algorithm, traverse from left and compare adjacent elements and the higher one is placed at right side. 
In this way, the largest element is moved to the rightmost end at first. This process is then continued to find the second largest and place it and so on until the data is sorted.
Time Complexity: O(N^2)

3. Merge Sort:
