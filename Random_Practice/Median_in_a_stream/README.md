## Find Median in a Stream

Given an input stream of N integers. The task is to insert these numbers into a new stream and find the median of the stream formed by each insertion of X to the new stream.

Input:
The first line of input contains an integer N denoting the number of elements in the stream. Then the next N lines contains integer x denoting the number to be inserted into the stream.
Output:
For each element added to the stream print the floor of the new median in a new line.
 
Constraints:<br>
1 <= N <= 106<br>
1 <= x <= 106<br>
 
## Example:

Input:<br>
4<br>
5<br>
15<br>
1<br>
3<br>
Output:<br>
5<br>
10<br>
5<br>
4<br>
 
## Explanation:

Testcase 1:<br>
Flow in stream : 5, 15, 1, 3<br>
5 goes to stream --> median 5 (5)<br>
15 goes to stream --> median 10 (5, 15)<br>
1 goes to stream --> median 5 (5, 15, 1)<br>
3 goes to stream --> median 4 (5, 15, 1, 3)<br>
