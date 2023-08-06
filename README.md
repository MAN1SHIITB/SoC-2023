# SoC-2023
Heyal!

This is a short doc on what I have learn in my Season Of Code-2023 (SoC-2023). Well I have jsut satrted learning DSA, also simultaneouly I have entered into compitetive programming. SoC helped me lot in this, all thanks to IIT Bombay WnCC Club.<br>

Well let's begin!

#### Refrence to all the below is : https://awesome-sage-ee5.notion.site/Seasons-Of-Code-CP-1951186564c94c07b80c13181c4b161d 


## Part 1:
This Part was the beggingn Part and I was introduced to the following:
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
Yeah so this was all about Part 1. There were still more Data Structures, but the above are some of the important ones.

<br>

## Part 2:
Moving on to Part 2, in this Part I was introduced to sorting, searching algorithms and divide and conquer techniques.

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
1.  The data structure must be sorted.
2.  Access to any element of the data structure takes constant time.
<br>
In this algorithm, <br>
- Divide the search space into two halves by finding the middle index “mid”. <br>
- Compare the middle element of the search space with the key. <br> 
- If the key is found at middle element, the process is terminated. <br>
- If the key is not found at middle element, choose which half will be used as the next search space.<br>
- If the key is smaller than the middle element, then the left side is used for next search.<br>
- If the key is larger than the middle element, then the right side is used for next search.<br>
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
<br>

## Part 3:
In this Part, I had covered:<br>
* Greedy Programming
* Dynamic Programming
  <br>
  
### Greedy Programming:
Greedy programming is a type of algorithmic strategy that involves making the locally optimal choice at each stage of the algorithm with the hope of eventually reaching a globally optimal solution. It is often used in optimization problems, such as finding the shortest path through a graph or the minimum spanning tree of a network. However, it is important to note that greedy algorithms do not always produce the optimal solution and can sometimes get stuck in local maxima or minima.
<br>
So, note that choosing a Greedy Idea and Proving correctness that it would work is a very difficult task. However, It is easy to prove that a greedy idea works when you know the idea is correct. The important part in this part is to get a greedy idea that works.
<br>

##### What is Greedy Algorithm?
Greedy is an algorithmic paradigm that builds up a solution piece by piece, always choosing the next piece that offers the most obvious and immediate benefit. So the problems where choosing locally optimal also leads to global solution are the best fit for Greedy.
<br>

##### Characteristics of Greedy algorithm
For a problem to be solved using the Greedy approach, it must follow a few major characteristics:
* There is an ordered list of resources(profit, cost, value, etc.)
* Maximum of all the resources(max profit, max value, etc.) are taken.
* For example, in the fractional knapsack problem, the maximum value/weight is taken first according to available capacity.
<br>

##### Standard Greedy Algorithms:
* Activity Selection Problem
* Job Sequencing Problem
* Huffman Coding
* Huffman Decoding
* Water Connection Problem
* Minimum Swaps for Bracket Balancing
* Egyptian Fraction
* Policemen catch thieves
* Fitting Shelves Problem
* Assign Mice to Holes
<br>

### Dynamic Programming:
Dynamic Programming is mainly an optimization over plain recursion. Wherever we see a recursive solution that has repeated calls for same inputs, we can optimize it using Dynamic Programming. The idea is to simply store the results of subproblems, so that we do not have to re-compute them when needed later. This simple optimization reduces time complexities from exponential to polynomial. <br>
For example, if we write simple recursive solution for Fibonacci Numbers, we get exponential time complexity and if we optimize it by storing solutions of subproblems, time complexity reduces to linear.<br>
Tabulation and memoization are two techniques used in dynamic programming to optimize the execution of a function that has repeated and expensive computations. Although both techniques have similar goals, there are some differences between them.<br>
Memoization is a top-down approach where we cache the results of function calls and return the cached result if the function is called again with the same inputs. It is used when we can divide the problem into subproblems and the subproblems have overlapping subproblems. Memoization is typically implemented using recursion and is well-suited for problems that have a relatively small set of inputs.
<br>
Tabulation is a bottom-up approach where we store the results of the subproblems in a table and use these results to solve larger subproblems until we solve the entire problem. It is used when we can define the problem as a sequence of subproblems and the subproblems do not overlap. Tabulation is typically implemented using iteration and is well-suited for problems that have a large set of inputs.
<br>
<br>
## Part 4:
In this part, I was introduced to an important data structure called Binary trees, and a very important concept of graphs, usually only tougher questions are based on this part. <br>

### Binary Search Tree (BST): 
A Binary Search Tree (BST) is a special type of binary tree in which the left child of a node has a value less than the node’s value and the right child has a value greater than the node’s value. This property is called the BST property and it makes it possible to efficiently search, insert, and delete elements in the tree.
<br>
The root of a BST is the node that has the largest value in the left subtree and the smallest value in the right subtree. Each left subtree is a BST with nodes that have smaller values than the root and each right subtree is a BST with nodes that have larger values than the root.
<br>
Binary Search Tree is a node-based binary tree data structure that has the following properties: 
* The left subtree of a node contains only nodes with keys lesser than the node’s key.
* The right subtree of a node contains only nodes with keys greater than the node’s key.
* This means everything to the left of the root is less than the value of the root and everything to the right of the root is greater than the value of the root. Due to this performing, a binary search is very easy.
* The left and right subtree each must also be a binary search tree.  
* There must be no duplicate nodes(BST may have duplicate values with different handling approaches)

<br>

Handling approach for Duplicate values in the Binary Search tree:

* You can not allow the duplicated values at all.
  
* We must follow a consistent process throughout i.e either store duplicate value at the left or store the duplicate value at the right of the root, but be consistent with your approach.
  
* We can keep the counter with the node and if we found the duplicate value, then we can increment the counter
  
<br>

Below are the various operations that can be performed on a BST:

<br>

#### Insert a node into a BST:
A new key is always inserted at the leaf. Start searching a key from the root till a leaf node. Once a leaf node is found, the new node is added as a child of the leaf node.

##### Time Complexity: O(N), where N is the number of nodes of the BST 

##### Auxiliary Space: O(1) 
<br>

#### Inorder traversal: 
In case of binary search trees (BST), Inorder traversal gives nodes in non-decreasing order. We visit the left child first, then the root, and then the right child.
##### Time Complexity: O(N), where N is the number of nodes of the BST 
##### Auxiliary Space: O(1) 
<br>

#### Preorder traversal: 
Preorder traversal first visits the root node and then traverses the left and the right subtree. It is used to create a copy of the tree. Preorder traversal is also used to get prefix expression on of an expression tree.
##### Time Complexity: O(N), where N is the number of nodes of the BST 
##### Auxiliary Space: O(1) 
<br>

#### Postorder traversal: 
Postorder traversal first traverses the left and the right subtree and then visits the root node. It is used to delete the tree. In simple words, visit the root of every subtree last.
##### Time Complexity: O(N), where N is the number of nodes of the BST 
##### Auxiliary Space: O(1) 
<br>

#### Level order traversal: 
Level order traversal of a BST is breadth first traversal for the tree. It visits all nodes at a particular level first before moving to the next level.
###### Time Complexity: O(N), where N is the number of nodes of the BST 
###### Auxiliary Space: O(1) 
<br>

#### Delete a Node of BST: 
It is used to delete a node with specific key from the BST and return the new BST.<br>
Different scenarios for deleting the node:
1. Node to be deleted is the leaf node : Its simple you can just null it out.
2. Node to be deleted has one child : You can just replace the node with the child node.
3. Node to be deleted has two child :
    * Need to figure out what will be the replacement of the node to be deleted.
    * Want minimal disruption to the existing tree structure
    * Can table the replacement node from the deleted nodes left or right subtree.
    * If taking if from the left subtree, we have to take the largest value in the left subtree.
    * If taking if from the right subtree, we have to take the smallest value in the right subtree.
    * Choose one approach and stick to it.
<br>

### Red-Black Tree:
When it comes to searching and sorting data, one of the most fundamental data structures is the binary search tree. However, the performance of a binary search tree is highly dependent on its shape, and in the worst case, it can degenerate into a linear structure with a time complexity of O(n). This is where Red Black Trees come in, they are a type of balanced binary search tree that use a specific set of rules to ensure that the tree is always balanced. This balance guarantees that the time complexity for operations such as insertion, deletion, and searching is always O(log n), regardless of the initial shape of the tree.
<br>
Red Black Trees are self-balancing, meaning that the tree adjusts itself automatically after each insertion or deletion operation. It uses a simple but powerful mechanism to maintain balance, by coloring each node in the tree either red or black. 
<br>
Red-Black tree is a binary search tree in which every node is colored with either red or black. It is a type of self balancing binary search tree. It has a good efficient worst case running time complexity.
<br>

#### Properties of Red Black Tree:
The Red-Black tree satisfies all the properties of binary search tree in addition to that it satisfies following additional properties –
1. Root property: The root is black.
2. External property: Every leaf (Leaf is a NULL child of a node) is black in Red-Black tree.
3. Internal property: The children of a red node are black. Hence possible parent of red node is a black node.
4. Depth property: All the leaves have the same black depth.
5. Path property: Every simple path from root to descendant leaf node contains same number of black nodes. 
<br>
The result of all these above-mentioned properties is that the Red-Black tree is roughly balanced.
<br>

#### Rules That Every Red-Black Tree Follows: 
* Every node has a color either red or black.
* The root of the tree is always black.
* There are no two adjacent red nodes (A red node cannot have a red parent or red child).
* Every path from a node (including root) to any of its descendants NULL nodes has the same number of black nodes.
* Every leaf (e.i. NULL node) must be colored BLACK.
<br>

Why Red-Black Trees?
Most of the BST operations (e.g., search, max, min, insert, delete.. etc) take O(h) time where h is the height of the BST. The cost of these operations may become O(n) for a skewed Binary tree. If we make sure that the height of the tree remains O(log n) after every insertion and deletion, then we can guarantee an upper bound of O(log n) for all these operations. The height of a Red-Black tree is always O(log n) where n is the number of nodes in the tree. 
“n” is the total number of elements in the red-black tree. 
<br>

#### Interesting points about Red-Black Tree:
1. The black height of the red-black tree is the number of black nodes on a path from the root node to a leaf node. Leaf nodes are also counted as black nodes. So, a red-black tree of height h has black height >= h/2.
2. Height of a red-black tree with n nodes is h<= 2 log2(n + 1).
3. All leaves (NIL) are black.
4. The black depth of a node is defined as the number of black nodes from the root to that node i.e the number of black ancestors.
5. Every red-black tree is a special case of a binary tree.
<br>

#### Black Height of a Red-Black Tree : 
Black height is the number of black nodes on a path from the root to a leaf. Leaf nodes are also counted black nodes. From the above properties 3 and 4, we can derive, a Red-Black Tree of height h has black-height >= h/2. 
<br>
Number of nodes from a node to its farthest descendant leaf is no more than twice as the number of nodes to the nearest descendant leaf.
<br>
Every Red Black Tree with n nodes has height <= 2Log2(n+1) 
This can be proved using the following facts:
1. For a general Binary Tree, let k be the minimum number of nodes on all root to NULL paths, then n >= 2k – 1 (Ex. If k is 3, then n is at least 7). This expression can also be written as k <= Log2(n+1).
2. From property 4 of Red-Black trees and above claim, we can say in a Red-Black Tree with n nodes, there is a root to leaf path with at-most Log2(n+1) black nodes.
3. From properties 3 and 5 of Red-Black trees, we can claim that the number of black nodes in a Red-Black tree is at least ⌊ n/2 ⌋ where n is the total number of nodes.
From the above points, we can conclude the fact that Red Black Tree with n nodes has a height <= 2Log2(n+1)
<br>

#### Search Operation in Red-black Tree:
As every red-black tree is a special case of a binary tree so the searching algorithm of a red-black tree is similar to that of a binary tree.
###### Algorithm:
searchElement (tree, val)<br>
Step 1:<br>
If tree -> data = val OR tree = NULL<br>
    Return tree<br>
Else<br>
If val < data  <br>
        Return searchElement (tree -> left, val) <br>
    Else<br>
        Return searchElement (tree -> right, val)<br>
    [ End of if ]<br>
[ End of if ]<br>
Step 2: END<br>

<br>
<br>

### AVL Tree:
An AVL tree defined as a self-balancing Binary Search Tree (BST) where the difference between heights of left and right subtrees for any node cannot be more than one.
The difference between the heights of the left subtree and the right subtree for any node is known as the balance factor of the node.
The AVL tree is named after its inventors, Georgy Adelson-Velsky and Evgenii Landis, who published it in their 1962 paper “An algorithm for the organization of information
<br>

#### Operations on an AVL Tree:
1. Insertion
2. Deletion
3. Searching [It is similar to performing a search in BST]
<br>

#### Rotating the subtrees in an AVL Tree:
An AVL tree may rotate in one of the following four ways to keep itself balanced:

##### Left Rotation:
When a node is added into the right subtree of the right subtree, if the tree gets out of balance, we do a single left rotation.
##### Right Rotation:
If a node is added to the left subtree of the left subtree, the AVL tree may get out of balance, we do a single right rotation.
##### Left-Right Rotation:
A left-right rotation is a combination in which first left rotation takes place after that right rotation executes.
##### Right-Left Rotation:
A right-left rotation is a combination in which first right rotation takes place after that left rotation executes.
<br>
<br>

### Graph Data Structure And Algorithms:
A Graph is a non-linear data structure consisting of vertices and edges. The vertices are sometimes also referred to as nodes and the edges are lines or arcs that connect any two nodes in the graph. More formally a Graph is composed of a set of vertices( V ) and a set of edges( E ). The graph is denoted by G(E, V).
<br>
Graph data structures are a powerful tool for representing and analyzing complex relationships between objects or entities. They are particularly useful in fields such as social network analysis, recommendation systems, and computer networks. In the field of sports data science, graph data structures can be used to analyze and understand the dynamics of team performance and player interactions on the field.
<br>
Imagine a game of football as a web of connections, where players are the nodes and their interactions on the field are the edges. This web of connections is exactly what a graph data structure represents, and it’s the key to unlocking insights into team performance and player dynamics in sports.
<br>

#### Components of a Graph
* Vertices: Vertices are the fundamental units of the graph. Sometimes, vertices are also known as vertex or nodes. Every node/vertex can be labeled or unlabelled.
* Edges: Edges are drawn or used to connect two nodes of the graph. It can be ordered pair of nodes in a directed graph. Edges can connect any two nodes in any possible way. There are no rules. Sometimes, edges are also known as arcs. Every edge can be labelled/unlabelled.
<br>

#### Types Of Graph
#### 1. Null Graph
A graph is known as a null graph if there are no edges in the graph.
#### 2. Trivial Graph
Graph having only a single vertex, it is also the smallest graph possible.
#### 3. Undirected Graph
A graph in which edges do not have any direction. That is the nodes are unordered pairs in the definition of every edge. 
#### 4. Directed Graph
A graph in which edge has direction. That is the nodes are ordered pairs in the definition of every edge.
#### 5. Connected Graph
The graph in which from one node we can visit any other node in the graph is known as a connected graph. 
#### 6. Disconnected Graph
The graph in which at least one node is not reachable from a node is known as a disconnected graph.
#### 7. Regular Graph
The graph in which the degree of every vertex is equal to K is called K regular graph.
#### 8. Complete Graph
The graph in which from each node there is an edge to each other node.
#### 9. Cycle Graph
The graph in which the graph is a cycle in itself, the degree of each vertex is 2. 
#### 10. Cyclic Graph
A graph containing at least one cycle is known as a Cyclic graph.
#### 11. Directed Acyclic Graph
A Directed Graph that does not contain any cycle. 
#### 12. Bipartite Graph
A graph in which vertex can be divided into two sets such that vertex in each set does not contain any edge between them.
#### 13. Weighted Graph
 A graph in which the edges are already specified with suitable weight is known as a weighted graph. 
 Weighted graphs can be further classified as directed weighted graphs and undirected weighted graphs. 
<br>

#### Representation of Graphs
There are two ways to store a graph:
* Adjacency Matrix
* Adjacency List
<br>

#### Adjacency Matrix:
In this method, the graph is stored in the form of the 2D matrix where rows and columns denote vertices. Each entry in the matrix represents the weight of the edge between those vertices. 
#### Adjacency List
This graph is represented as a collection of linked lists. There is an array of pointer which points to the edges connected to that vertex. 
<br>

#### Basic Operations on Graphs
Below are the basic operations on the graph:
1. Insertion of Nodes/Edges in the graph – Insert a node into the graph.
2. Deletion of Nodes/Edges in the graph – Delete a node from the graph.
3. Searching on Graphs – Search an entity in the graph.
4. Traversal of Graphs – Traversing all the nodes in the graph.
<br>

#### Usage of graphs
* Maps can be represented using graphs and then can be used by computers to provide various services like the shortest path between two cities.
* When various tasks depend on each other then this situation can be represented using a Directed Acyclic graph and we can find the order in which tasks can be performed using topological sort.
* State Transition Diagram represents what can be the legal moves from current states. In-game of tic tac toe this can be used.
<br>

#### Breadth First Search or BFS for a Graph:
The Breadth First Search (BFS) algorithm is used to search a graph data structure for a node that meets a set of criteria. It starts at the root of the graph and visits all nodes at the current depth level before moving on to the nodes at the next depth level.
<bR>

##### Relation between BFS for Graph and Tree traversal:
Breadth-First Traversal (or Search) for a graph is similar to the Breadth-First Traversal of a tree.
The only catch here is, that, unlike trees, graphs may contain cycles, so we may come to the same node again. To avoid processing a node more than once, we divide the vertices into two categories:
* Visited and
* Not visited.
A boolean visited array is used to mark the visited vertices. For simplicity, it is assumed that all vertices are reachable from the starting vertex. BFS uses a queue data structure for traversal.
<br>

#### How does BFS work?
Starting from the root, all the nodes at a particular level are visited first and then the nodes of the next level are traversed till all the nodes are visited.
To do this a queue is used. All the adjacent unvisited nodes of the current level are pushed into the queue and the nodes of the current level are marked visited and popped from the queue.
<br>

#### Depth First Search or DFS for a Graph:
Depth First Traversal (or DFS) for a graph is similar to Depth First Traversal of a tree. The only catch here is, that, unlike trees, graphs may contain cycles (a node may be visited twice). To avoid processing a node more than once, use a boolean visited array. A graph can have more than one DFS traversal.
<br>

##### How does DFS work?
Depth-first search is an algorithm for traversing or searching tree or graph data structures. The algorithm starts at the root node (selecting some arbitrary node as the root node in the case of a graph) and explores as far as possible along each branch before backtracking.
<br>

## Part 5:
In this part I had learned about the following:
* Shortest Path
* Spanning trees
* Directed graphs

<br>

### Shortest paths 
Finding a shortest path between two nodes of a graph is an important problem that has many practical applications. For example, a natural problem related to a road network is to calculate the shortest possible length of a route between two cities, given the lengths of the roads. In an unweighted graph, the length of a path equals the number of its edges, and we can simply use breadth-first search to find a shortest path. However, in this chapter we focus on weighted graphs where more sophisticated algorithms are needed for finding shortest paths. 
<br>


#### Bellman–Ford algorithm 
The Bellman–Ford algorithm1 finds shortest paths from a starting node to all nodes of the graph. The algorithm can process all kinds of graphs, provided that the graph does not contain a cycle with negative length. If the graph contains a negative cycle, the algorithm can detect this. The algorithm keeps track of distances from the starting node to all nodes of the graph. Initially, the distance to the starting node is 0 and the distance to all other nodes in infinite. The algorithm reduces the distances by finding edges that shorten the paths until it is not possible to reduce any distance. 
<br>

#### Implementation
The following implementation of the Bellman–Ford algorithm determines the shortest distances from a node x to all nodes of the graph. The code assumes that the graph is stored as an edge list edges that consists of tuples of the form (a,b,w), meaning that there is an edge from node a to node b with weight w.
The algorithm consists of n−1 rounds, and on each round the algorithm goes through all edges of the graph and tries to reduce the distances. The algorithm constructs an array distance that will contain the distances from x to all nodes of the graph. 
The constant INF denotes an infinite distance.
<br>
for (int i = 1; i <= n; i++) distance[i] = INF;
distance[x] = 0;
for (int i = 1; i <= n-1; i++) {
for (auto e : edges) {
int a, b, w;
tie(a, b, w) = e;
distance[b] = min(distance[b], distance[a]+w);
}
}
<br>

The time complexity of the algorithm is O(nm), because the algorithm consists of n−1 rounds and iterates through all m edges during a round. If there are no negative cycles in the graph, all distances are final after n −1 rounds, because each shortest path can contain at most n−1 edges.
In practice, the final distances can usually be found faster than in n−1 rounds.
Thus, a possible way to make the algorithm more efficient is to stop the algorithm if no distance can be reduced during a round.
<br>

#### Dijkstra’s algorithm
Dijkstra’s algorithm2 finds shortest paths from the starting node to all nodes of the graph, like the Bellman–Ford algorithm. The benefit of Dijsktra’s algorithm is that it is more efficient and can be used for processing large graphs. However, the algorithm requires that there are no negative weight edges in the graph. Like the Bellman–Ford algorithm, Dijkstra’s algorithm maintains distances to the nodes and reduces them during the search. Dijkstra’s algorithm is efficient, because it only processes each edge in the graph once, using the fact that there are no negative edges.
<br>

#### Implementation
The following implementation of Dijkstra’s algorithm calculates the minimum distances from a node x to other nodes of the graph. The graph is stored as adjacency lists so that adj[a] contains a pair (b,w) always when there is an edge from node a to node b with weight w.
An efficient implementation of Dijkstra’s algorithm requires that it is possible to efficiently find the minimum distance node that has not been processed. An
appropriate data structure for this is a priority queue that contains the nodes ordered by their distances. Using a priority queue, the next node to be processed
can be retrieved in logarithmic time.<br>
In the following code, the priority queue q contains pairs of the form (−d, x), meaning that the current distance to node x is d. The array distance contains
the distance to each node, and the array processed indicates whether a node has been processed. Initially the distance is 0 to x and ∞ to all other nodes.
<br>
for (int i = 1; i <= n; i++) distance[i] = INF;
distance[x] = 0;
q.push({0,x});
while (!q.empty()) {
int a = q.top().second; q.pop();
if (processed[a]) continue;
processed[a] = true;
for (auto u : adj[a]) {
int b = u.first, w = u.second;
if (distance[a]+w < distance[b]) {
distance[b] = distance[a]+w;
q.push({-distance[b],b});
}
} 
}<br>


Note that the priority queue contains negative distances to nodes. The reason for this is that the default version of the C++ priority queue finds maximum elements, while we want to find minimum elements. By using negative distances, we can directly use the default priority queue3. Also note that there may be
several instances of the same node in the priority queue; however, only the instance with the minimum distance will be processed.
The time complexity of the above implementation is O(n+ mlogm), because the algorithm goes through all nodes of the graph and adds for each edge at most one distance to the priority queue.
<br>

#### Floyd–Warshall algorithm
The Floyd–Warshall algorithm4 provides an alternative way to approach the problem of finding shortest paths. Unlike the other algorithms of this chapter, it finds all shortest paths between the nodes in a single run. The algorithm maintains a two-dimensional array that contains distances between the nodes. First, distances are calculated only using direct edges between the nodes, and after this, the algorithm reduces distances by using intermediate
nodes in paths.

<br>

### Spanning trees:
A spanning tree of a graph consists of all nodes of the graph and some of the edges of the graph so that there is a path between any two nodes. Like trees in general, spanning trees are connected and acyclic. Usually there are several ways to construct a spanning tree.
It turns out that several greedy methods can be used to construct minimum and maximum spanning trees. In this chapter, we discuss two algorithms that process the edges of the graph ordered by their weights. We focus on finding minimum spanning trees, but the same algorithms can find maximum spanning trees by processing the edges in reverse order.

#### Kruskal’s algorithm
In Kruskal’s algorithm1 , the initial spanning tree only contains the nodes of the graph and does not contain any edges. Then the algorithm goes through the edges ordered by their weights, and always adds an edge to the tree if it does not create a cycle. The algorithm maintains the components of the tree. Initially, each node of the graph belongs to a separate component. Always when an edge is added to the tree, two components are joined. Finally, all nodes belong to the same component, and a minimum spanning tree has been found.
<br>

#### Implementation:
When implementing Kruskal’s algorithm, it is convenient to use the edge list representation of the graph. The first phase of the algorithm sorts the edges in the list in O(mlogm) time. After this, the second phase of the algorithm builds the minimum spanning tree as follows:
 for (...) { 
if (!same(a,b)) unite(a,b);
 }
 The loop goes through the edges in the list and always processes an edge a–b where a and b are two nodes. Two functions are needed: the function same determines if a and b are in the same component, and the function unite joins the components that contain a and b. The problem is how to efficiently implement the functions same and unite. One possibility is to implement the function same as a graph traversal and check if we can get from node a to node b. However, the time complexity of such a function would be O(n+ m) and the resulting algorithm would be slow, because the function same will be called for each edge in the graph. We will solve the problem using a union-find structure that implements both functions in O(logn) time. Thus, the time complexity of Kruskal’s algorithm will be O(mlogn) after sorting the edge list. 
<br>


#### Union-find structure:
A union-find structure maintains a collection of sets. The sets are disjoint, so no element belongs to more than one set. Two O(logn) time operations are supported: the unite operation joins two sets, and the find operation finds the representative of the set that contains a given element.
<br>

#### Prim’s algorithm 
Prim’s algorithm is an alternative method for finding a minimum spanning tree. The algorithm first adds an arbitrary node to the tree. After this, the algorithm always chooses a minimum-weight edge that adds a new node to the tree. Finally, all nodes have been added to the tree and a minimum spanning tree has been found. Prim’s algorithm resembles Dijkstra’s algorithm. The difference is that Dijkstra’s algorithm always selects an edge whose distance from the starting node is minimum, but Prim’s algorithm simply selects the minimum weight edge that adds a new node to the tree.
<br>

### Directed graphs
In this, we focus on two classes of directed graphs:
#### • Acyclic graphs: 
There are no cycles in the graph, so there is no path from any node to itself.
#### • Successor graphs:
The outdegree of each node is 1, so each node has a unique successor. It turns out that in both cases, we can design efficient algorithms that are based on the special properties of the graphs.
<br>

#### Topological sorting 
A topological sort is an ordering of the nodes of a directed graph such that if there is a path from node a to node b, then node a appears before node b in the ordering.
An acyclic graph always has a topological sort. However, if the graph contains a cycle, it is not possible to form a topological sort, because no node of the cycle can appear before the other nodes of the cycle in the ordering. It turns out that depth-first search can be used to both check if a directed graph contains a cycle and, if it does not contain a cycle, to construct a topological sort.
<br>

#### Strong connectivity 
In a directed graph, the edges can be traversed in one direction only, so even if the graph is connected, this does not guarantee that there would be a path from a node to another node. For this reason, it is meaningful to define a new concept that requires more than connectivity. A graph is strongly connected if there is a path from any node to all other nodes in the graph
<br>


#### Kosaraju’s algorithm 
Kosaraju’s algorithm1 is an efficient method for finding the strongly connected components of a directed graph. The algorithm performs two depth-first searches: the first search constructs a list of nodes according to the structure of the graph, and the second search forms the strongly connected components.
















