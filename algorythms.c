//11.03 in of week 3
//https://cs50.harvard.edu/x/2020/weeks/3/
//Linear Search: Search each element in an array one at a time in a line.  aka an alogorythm ie: searching for the number 50
//for i from 0 to n-1
  //if the i'th element is 50, return true;  (The  bool)

//if not found: return false;



//Bineary Search Divide and conquer aka binary search

//if not in list
 //return false
 //if middle item is 50: return true
 //elsif 50 < middle element
 //Next, search left half
 //elsif 50 > middle element
 //search the right half

11.16
//The Chart
//Straight up refers to linear
//bend to the right is more logorythmic
  
  //n times steps  (linear)
  //n/2  steps (binary)
  
  //Moving away from search and now focussing on well designed algorythms
  
  //Big O italisized    aka in the order of
  
  //What is the efficiency of your algorythm (Your code)? You can give an approximation of this
  
  //Options:
//'Your algorythm is in the order of n, or on the order of n over 2 or on the order of log base2 n.
  
  //Since this is only an approximation, we can have :
  //'Your algorythm is in the order of n, or on the order of n, or on the order of log(n). (Throwing away 'n over 2' and log base 2)
  
  //A reason for getting rid of n over 2 and base2 is because as problems get bigger, n and n/2 get closer together, as does log(n) and log base2 n
  
  //14.03 in
  
  //Running time: How long it takes for your program to complete
  The lowwer down the chart, the faster your program
  
  O(n2) Means n to the power of 2
  O(n log n)
  O(n)        Linear search  :Worst case is that the search takes 'n' steps
  O(log n)    Binary Search
  O(1)
  Above represents worst case and below (omega) represents best cases
  
  Omega is the opposite to big O. Omega looks at the best case. The first step may complete your search in linear/binary search
  Omega (n2) Means n to the power of 2
  Omega (n log n)
  Omega (n)         
  Omega (log n)    
  Omega (1)        Linear search Binary Search
  //16.54 in
  
  
  
  
  
  
