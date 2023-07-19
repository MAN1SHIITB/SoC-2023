# SoC-2023
Heyal!

This is a short doc on what I have learn in my Season Of Code-2023 (SoC-2023). Well I have jsut satrted learning DSA, also simultaneouly I have entered into compitetive programming. SoC helped me lot in this, all thanks to IIT Bombay WnCC Club.<br>

Well let's begin!

#### Refrence to all the below is : https://awesome-sage-ee5.notion.site/Seasons-Of-Code-CP-1951186564c94c07b80c13181c4b161d 


## Week 1:
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
<br>
Moving on to Bitwise Operators, I have learnt around 6 different types of bitwise operators:
1. The & (bitwise AND) in C or C++ takes two numbers as operands and does AND on every bit of two numbers. The result of AND is 1 only if both bits are 1.  
2. The | (bitwise OR) in C or C++ takes two numbers as operands and does OR on every bit of two numbers. The result of OR is 1 if any of the two bits is 1. 
3. The ^ (bitwise XOR) in C or C++ takes two numbers as operands and does XOR on every bit of two numbers. The result of XOR is 1 if the two bits are different. 
4. The << (left shift) in C or C++ takes two numbers, the left shifts the bits of the first operand, and the second operand decides the number of places to shift. 
5. The >> (right shift) in C or C++ takes two numbers, right shifts the bits of the first operand, and the second operand decides the number of places to shift. 
6. The ~ (bitwise NOT) in C or C++ takes one number and inverts all bits of it.

<br>

### Time Comoplexity:
Instead of measuring actual time required in executing each statement in the code, Time Complexity considers how many times each statement executes. 
Different Types:
* A logarithmic algorithm – O(logn) : Runtime grows logarithmically in proportion to n. 
* A linear algorithm – O(n)  : Runtime grows directly in proportion to n. 
* A superlinear algorithm – O(nlogn)  : Runtime grows in proportion to n. 
* A polynomial algorithm – O(n^c)  : Runtime grows quicker than previous all based on n. 
* A exponential algorithm – O(c^n)  : Runtime grows even faster than polynomial algorithm based on n. 
* A factorial algorithm – O(n!)  : Runtime grows the fastest and becomes quickly unusable for even small values of n.

<br>

### Data Structures:
A data structure is a storage that is used to store and organize data. It is a way of arranging data on a computer so that it can be accessed and updated efficiently.
#### Popular types of Data Structures:
1. Satck: Stacks are a type of container adaptors with LIFO(Last In First Out) type of working, where a new element is added at one end (top) and an element is removed from that end only.  Stack uses an encapsulated object of either vector or deque (by default) or list (sequential container class) as its underlying container, providing a specific set of member functions to access its elements. 
2. Queue: Queues are a type of container adaptors that operate in a first in first out (FIFO) type of arrangement. Elements are inserted at the back (end) and are deleted from the front. Queues use an encapsulated object of deque or list (sequential container class) as its underlying container, providing a specific set of member functions to access its elements.
3. Priority Queue: A C++ priority queue is a type of container adapter, specifically designed such that the first element of the queue is either the greatest or the smallest of all elements in the queue, and elements are in non-increasing or non-decreasing order (hence we can see that each element of the queue has a priority {fixed order}).
4. Heap: The heap data structure can be implemented in a range using STL which provides faster max or min item retrieval, and faster insertion and deletion on sorted data and also works as a sub-routine for heapsort.
5. Deque: Double-ended queues are sequence containers with the feature of expansion and contraction on both ends. They are similar to vectors, but are more efficient in case of insertion and deletion of elements.
6. Vectors: Vectors are the same as dynamic arrays with the ability to resize itself automatically when an element is inserted or deleted, with their storage being handled automatically by the container. Vector elements are placed in contiguous storage so that they can be accessed and traversed using iterators. In vectors, data is inserted at the end. Inserting at the end takes differential time, as sometimes the array may need to be extended. Removing the last element takes only constant time because no resizing happens. Inserting and erasing at the beginning or in the middle is linear in time.
7. List: Lists are sequence containers that allow non-contiguous memory allocation. As compared to the vector, the list has slow traversal, but once a position has been found, insertion and deletion are quick (constant time). Normally, when we say a List, we talk about a doubly linked list. For implementing a singly linked list, we use a forward_list.

<br> 
Yeah so this was all about Week 1. There were still more Data Structures, but the above are some of the important ones.

<br>

## Week 2:
Moving on to Week 2, in this week I was introduced to sorting, searching algorithms and divide and conquer techniques.

### Sorting Algorithms:
A Sorting Algorithm is used to rearrange a given array or list of elements according to a comparison operator on the elements. The comparison operator is used to decide the new order of elements in the respective data structure. 
<br> Selection sort, bubble sort, merge sort, insertion sort, quick sort and heap sort are some of the important algoritms
<br>
#### 1. Selection Sort:
Selection sort is a simple and efficient sorting algorithm that works by repeatedly selecting the smallest (or largest) element from the unsorted portion of the list and moving it to the sorted portion of the list. 
<br>
The algorithm repeatedly selects the smallest (or largest) element from the unsorted portion of the list and swaps it with the first element of the unsorted part. This process is repeated for the remaining unsorted portion until the entire list is sorted. 
##### Time Complexity: The time complexity of Selection Sort is O(N^2) as there are two nested loops:
<br>
1. One loop to select an element of Array one by one = O(N)<br>
2. Another loop to compare that element with every other Array element = O(N)<br>
3. Therefore overall complexity = O(N) * O(N) = O(N*N) = O(N^2)<br>
<br>

#### 2. Bubble Sort:
Bubble Sort is the simplest sorting algorithm that works by repeatedly swapping the adjacent elements if they are in the wrong order. This algorithm is not suitable for large data sets as its average and worst-case time complexity is quite high.
<br>
In this algorithm, traverse from left and compare adjacent elements and the higher one is placed at right side. 
<br>
In this way, the largest element is moved to the rightmost end at first. This process is then continued to find the second largest and place it and so on until the data is sorted.
<br>
##### Time Complexity: O(N^2)
<br>

#### 3. Merge Sort:
Merge sort is defined as a sorting algorithm that works by dividing an array into smaller subarrays, sorting each subarray, and then merging the sorted subarrays back together to form the final sorted array.
<br>
In simple terms, we can say that the process of merge sort is to divide the array into two halves, sort each half, and then merge the sorted halves back together. This process is repeated until the entire array is sorted.
<br>

##### Time Complexity: 
O(N log(N)),  Sorting arrays on different machines. Merge Sort is a recursive algorithm and time complexity can be expressed as following recurrence relation. 
T(n) = 2T(n/2) + θ(n)
<br>
The above recurrence can be solved either using the Recurrence Tree method or the Master method. It falls in case II of the Master Method and the solution of the recurrence is θ(Nlog(N)). The time complexity of Merge Sort isθ(Nlog(N)) in all 3 cases (worst, average, and best) as merge sort always divides the array into two halves and takes linear time to merge two halves.
<br>
#### 4. Insertion Sort:
Insertion sort is a simple sorting algorithm that works similar to the way you sort playing cards in your hands. The array is virtually split into a sorted and an unsorted part. Values from the unsorted part are picked and placed at the correct position in the sorted part.
##### Time Complexity of Insertion Sort:
* The worst case time complexity of Insertion sort is O(N^2)
* The average case time complexity of Insertion sort is O(N^2)
* The time complexity of the best case is O(N).

#### 5. Quick Sort:
QuickSort is a sorting algorithm based on the Divide and Conquer algorithm that picks an element as a pivot and partitions the given array around the picked pivot by placing the pivot in its correct position in the sorted array.
<br>
The key process in quickSort is a partition(). The target of partitions is to place the pivot (any element can be chosen to be a pivot) at its correct position in the sorted array and put all smaller elements to the left of the pivot, and all greater elements to the right of the pivot. Partition is done recursively on each side of the pivot after the pivot is placed in its correct position and this finally sorts the array.
<br>
#### 6. Heap Sort:
Heap sort is a comparison-based sorting technique based on Binary Heap data structure. It is similar to the selection sort where we first find the minimum element and place the minimum element at the beginning. Repeat the same process for the remaining elements.
<br>
Heap sort is an in-place algorithm. Its typical implementation is not stable, but can be made stable. Typically 2-3 times slower than well-implemented QuickSort.  The reason for slowness is a lack of locality of reference.
<br>
<br>

### Searching Algorithms:
Searching Algorithms are designed to check for an element or retrieve an element from any data structure where it is stored.
<br>
Some of the important ones are lsited below:

#### 1. Linear Search:
Linear Search is defined as a sequential search algorithm that starts at one end and goes through each element of a list until the desired element is found, otherwise the search continues till the end of the data set.
<br>
In Linear Search Algorithm, every element is considered as a potential match for the key and checked for the same. If any element is found equal to the key, the search is successful and the index of that element is returned. If no element is found equal to the key, the search yields “No match found”.
##### Time Complexity:
1. Best Case: In the best case, the key might be present at the first index. So the best case complexity is O(1) <br>
2. Worst Case: In the worst case, the key might be present at the last index i.e., opposite to the end from which the search has started in the list. So the worst-case complexity is O(N) where N is the size of the list. <br>
3. Average Case: O(N)
<br>

#### 2. Binary Search:
Binary Search is defined as a searching algorithm used in a sorted array by repeatedly dividing the search interval in half. The idea of binary search is to use the information that the array is sorted and reduce the time complexity to O(log N). <br>
##### To apply Binary Search algorithm:
* The data structure must be sorted.
* Access to any element of the data structure takes constant time.
<br>
In this algorithm, <br>
* Divide the search space into two halves by finding the middle index “mid”. 
* Compare the middle element of the search space with the key. 
* If the key is found at middle element, the process is terminated.
* If the key is not found at middle element, choose which half will be used as the next search space.
* If the key is smaller than the middle element, then the left side is used for next search.
* If the key is larger than the middle element, then the right side is used for next search.
<br>
This process is continued until the key is found or the total search space is exhausted.
<br>

#### 3. Interpolation Search:
Given a sorted array of n uniformly distributed values arr[], write a function to search for a particular element x in the array. 
Linear Search finds the element in O(n) time, Jump Search takes O(√ n) time and Binary Search takes O(log n) time. 
<br>
The Interpolation Search is an improvement over Binary Search for instances, where the values in a sorted array are uniformly distributed. Interpolation constructs new data points within the range of a discrete set of known data points. Binary Search always goes to the middle element to check. On the other hand, interpolation search may go to different locations according to the value of the key being searched. For example, if the value of the key is closer to the last element, interpolation search is likely to start search toward the end side.
##### Time Complexity: O(log2(log2 n)) for the average case, and O(n) for the worst case 
<br>
<br>

### Divide and Conquer Algorithms:
A divide-and-conquer algorithm recursively breaks down a problem into two or more sub-problems of the same or related type, until these become simple enough to be solved directly. The solutions to the sub-problems are then combined to give a solution to the original problem.
<br>
Some commonly used are:
<br>
#### 1. Merge Sort:
Merge sort is defined as a sorting algorithm that works by dividing an array into smaller subarrays, sorting each subarray, and then merging the sorted subarrays back together to form the final sorted array.
<br>
In simple terms, we can say that the process of merge sort is to divide the array into two halves, sort each half, and then merge the sorted halves back together. This process is repeated until the entire array is sorted.
Time Complexity: O(N log(N)),  Sorting arrays on different machines. Merge Sort is a recursive algorithm and time complexity can be expressed as following recurrence relation. 
T(n) = 2T(n/2) + θ(n)
<br>
The above recurrence can be solved either using the Recurrence Tree method or the Master method. It falls in case II of the Master Method and the solution of the recurrence is θ(Nlog(N)). The time complexity of Merge Sort isθ(Nlog(N)) in all 3 cases (worst, average, and best) as merge sort always divides the array into two halves and takes linear time to merge two halves.
<br>
#### 2. Quick Sort: 
QuickSort is a sorting algorithm based on the Divide and Conquer algorithm that picks an element as a pivot and partitions the given array around the picked pivot by placing the pivot in its correct position in the sorted array.
<br>
The key process in quickSort is a partition(). The target of partitions is to place the pivot (any element can be chosen to be a pivot) at its correct position in the sorted array and put all smaller elements to the left of the pivot, and all greater elements to the right of the pivot. Partition is done recursively on each side of the pivot after the pivot is placed in its correct position and this finally sorts the array.
<br>

#### 3. Binary Search Tree:
Binary Search Tree is a node-based binary tree data structure which has the following properties:
* The left subtree of a node contains only nodes with keys lesser than the node’s key.
* The right subtree of a node contains only nodes with keys greater than the node’s key.
* The left and right subtree each must also be a binary search tree.
<br>
Binary search trees are also efficacious in sortings and search algorithms. However, the search complexity of a BST depends upon the order in which the nodes are inserted and deleted; since in worst case, successive operations in the binary search tree may lead to degeneracy and form a singly linked list (or "unbalanced tree") like structure, thus has the same worst-case complexity as a linked list.
<br>
