# Data-Structures
450 DSA sheet questions broken down into steps

ARRAYS

To sort an array containing 0,1 and 2

-Initialize three variables to maintain the count of 0,1 and 2 (count0,count1,count2) in the array.
-From the starting of the array to count0, put 0 in the array.
-From count0 to count0+count1, put 1.
-From count0+count1 to size of the array, put 2.

To find duplicate element in an array

-Initialize i from 0 to size
-Initialize j from i+1 to size
-if arr[i]==arr[j] return arr[i]

Rotate array by one

-Store the last element of the array in a temp variable
-Shift rest of the elements one place towards the right (arr[i]=arr[i-1])
-Place the last element on the first empty index

Reverse an array

-Initialize i from starting of the array to the size, j from size to the starting
- Simultaneously swap the elements while i<j.
-Increment i, decrement j

To move negative numbers to the starting of the array

-Initialize j=0
-Traverse the array. If negative element is found, swap with arr[j] and increment j

Maximum pair product

-Initialize i from 0 to size, j from i+1 to size
-Initialize a variable to initialize max product as 0 (max_prod)
- If arr[i]*arr[j]>max product, max_prod=arr[i]*arr[j]

Maximum contiguous subarray sum (kadane’s algo)

Ref video: https://youtu.be/HCL4_bOd3-4

-Initialize two variable to store current sum and max sum (curr_sum and max_sum) as 0
-curr_sum=curr_sum+arr[i]
-If curr_sum>max_sum, update max_sum
-if curr_sum<0, curr_sum=0 (drop the sum altogether as it will reduce the overall sum)

To find kth min and max element

-sort the array (asc)
-For kth min, print arr[k-1] //kth element
-For kth max, print arr[size-k]

Minimize the heights of towers

Ref video: https://youtu.be/Av7vSnPSCtw
-sort the array
-initialize ans=arr[size-1]-arr[0]
-initialize arr[0]+k as smallest and arr[size-1]-k as largest
-increase i by k and compare with largest (we need max of these two: ma)
-decrease i+k by k and compare with smallest (we need min of these two: mi)
-result would be minimum of ans and ma-mi

Binary search

-sort array in asc order
- initialize start=0,end=size
-mid=start+end/2
-while start<end, if mid=key, return mid
-if mid>key, end=mid-1
-if mid>key, start=mid+1

