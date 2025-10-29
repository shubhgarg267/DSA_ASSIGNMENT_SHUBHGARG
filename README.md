Question 1 (Array)
Platform - Geeksforgeeks

https://www.geeksforgeeks.org/dsa/find-the-first-missing-number/

Approach – 
1. First, I took input of the range limit (m) and the number of elements (n) from the user and ensured that the condition m > n is satisfied.
2. 	After that, the user entered the array elements in sorted order within the range from 0 to m−1.
If any entered element was greater than or equal to m or less than 0, the program displayed an error message and asked the user to re-enter that element until a valid input was given.
3.	For finding the smallest missing number, I used a loop starting from i = 0 to m−1, and in each iteration, checked whether i existed in the given array elements.
If any number i was not found in the array, the loop was terminated, and that value of i was printed as the smallest missing number.
Otherwise, if all numbers from 0 to m−1 were present, the loop continued till the end.

Question 2 (STACK)
Platform - Geeksforgeeks

https://www.geeksforgeeks.org/dsa/remove-duplicates-from-a-sorted-linked-list/
 
Approach – 
1.	First, I took input of the number of nodes (n) from the user to define the size of the linked list.
2.	After that, I took user input of n elements (linked list values). The program checks whether the entered elements are in non-decreasing sorted order.
3.	If the condition is not satisfied, it displays an error message and asks the user to re-enter the entire list again until the list becomes sorted properly.
4.	Once the list is verified to be sorted, the program displays the original linked list entered by the user.
5.	Then, a loop is used to traverse the linked list and compare each node with the next node.
6.	If two consecutive nodes contain the same data value, the duplicate node is deleted using dynamic memory deallocation (delete).
7.	Otherwise, the traversal continues to the next node.
8.	Finally, the program prints the updated linked list after removing all duplicate elements, which remains in non-decreasing order.
 
