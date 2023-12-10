## Some past problems

- Find the median in a stream of integers: https://www.geeksforgeeks.org/median-of-stream-of-integers-running-integers/
- Find the mean of a stream of numbers: https://www.geeksforgeeks.org/average-of-a-stream-of-numbers/
- A* Algorithm: https://www.geeksforgeeks.org/a-search-algorithm/
- Minimum steps to reach target by a Knight: https://www.geeksforgeeks.org/minimum-steps-reach-target-knight/
https://www.geeksforgeeks.org/the-knights-tour-problem-backtracking-1/
- Given a straight path with multiple cars. You have the speed and the beginning and end point for each car. Find the average speed between the given points.
- Find whether an array is subset of another array: https://www.geeksforgeeks.org/find-whether-an-array-is-subset-of-another-array-set-1/
- Given a graph. Tell if the graph can be colored with 2 colors without having any two directly connected vertices with same color.
- Coloring a Cycle Graph: https://www.geeksforgeeks.org/coloring-a-cycle-graph/?ref=rp
- Count inversions in an array: https://www.geeksforgeeks.org/counting-inversions/
- Snake and Ladder Problem: https://www.geeksforgeeks.org/snake-ladder-problem-2/
- Given n companies. Each company provides Bi boxes where i is the company index in array Box. If there are m stores, find the maximum number of boxes that 
can be distributed to each store, such that, each store gets same number of boxes and no store gets the boxes of more than other type.
- Depth First Search - Water droplet problem.
- Underhydrated and Overhydrated nodes in a tree. Given 2 arrays, one is the array with parents and other is the array with the water level(-1,0,1). Anything below -1 will be underhydrated and anything above 1 is overhydrated and gets the assigned penalty. You have to pour water on any one node. Find the minimum penalty.
- Stock price can either reduce by 1 or double. Find the minimum days required for the stock price to be equal to m.
- Longest substring with positive product.
- SQL Query with windowing(moving_average)
- Executor logs and Driver logs in spark job.

- Given a graph with strings like a trie. Compress the strings.
Example:
```
    e - s - f - g - g - l - NULL
        |       |        |_ END
    d - /       \ - t - n - NULL 
    a - b - c - d - e - f - g - NULL
            |               |_ END 
            h - i - j - k - NULL
                |_ END  |_ END
```
Output:
```
    e - sfg - gl - NULL
         |    |_ END
    d _ /      \ - tn - NULL
                    |_ END
    abc - defg - NULL
     |      |_ END
     \  - hi - jk - NULL
           |_END |_ END
```

- Given a matrix, find the longest strictly increasing path. You can move up, down, left and right.
Example:
```
9  9  4
6  6  8
2  1  1

Output: 4, 1->2->6->9
```

- Given two arrays currentValue and futureValue of stocks and a value savings. Find the maximum profit you can make by investing only an amount less than equal to savings.
Example:
```
n = 5
currentValue = [175,133,109,210,97]
futureValue = [200,125,128,228,133]
savings = 260

Output: 55, 97+109 = 206 and 133+128 = 261. Profit = 261-206 = 55. We did not consider stock of current value 175 because, 175+97 > 260.
```

- Given a string find the first non repeating character. Return 0 if all characters are repeating.
- A person is collecting stones while travelling from South California to New York. Given a matrix with different cities depicting number of stones present. Find the maximum number of stones that can be collected while travelling from SC to NY if the person can only move up or right. SC => (r-1,0) and NY => (0,c-1) where r and c are the number of row and columns.
- Find the maximum profit made by buying and selling a single stock when you are given an array of stock prices over n days. Assume that initially you do not have any stocks. Expected complexity is O(n).
```
n = 9
prices = [3,5,18,7,12,19,39,1,100]

Output = 99, buy the stock at 1 and sell at 100.
```

- Design a parking lot with appropriate data structure. Implement the park(), unpark() function.
- Print the list of max sized string with valid paranthesis. That is print the string with valid parathesis sequence with minimal removal given an input string.
- URL Shortener.
- Create a random music player given a list of music. The music player does not repeat the songs untill all the songs of the playlist have been played.
- Create an in-memory storage with O(1) insertion, O(1) deletion and O(1) to pick random value.

- Connect nodes at same level in a b-tree [Use additional pointer in every node which would point to it’s right node in the same level. Rightmost node in a level would point to NULL]
- Find kth ancestor of a given node in b-tree
- Check if a given array is desirable or not when desirable means there exists at least one case of i<j<k such that, arr[i]<arr[k]<arr[j].
- Given an array of heights of different boxes. Find the number of ways 2 boxes can be stacked such that their height sum is a power of 2
- Segregate anagrams from a string array. 
```
Input: [‘cat’, ‘dog’, ‘tac’, ‘god’]
Output: [[‘cat’, ‘tac’], [‘dog’, ‘god’]]
```

- How would you implement employee hierarchy system in a company? Give OO approach.
- Design an elevator system having multiple cabins (in a hall typically)


Interview Questions:
1.) Find mth element from start/end in a Single Linked List of size n
2.) Level Order Traversal of a binary tree: https://www.geeksforgeeks.org/level-order-tree-traversal/
3.) Snowpack (CP): https://github.com/rajkumardubey/MyInterviewChecklist/blob/master/src/self/learning/interview/coding/Snowpack.java
$ 4.) Minimum steps to reach target by a Knight: https://www.geeksforgeeks.org/minimum-steps-reach-target-knight/
$ 5.) Find the median in a stream of integers: https://www.geeksforgeeks.org/median-of-stream-of-integers-running-integers/
6.) Implement a queue without STL(use OO approach) -> Enqueue, Dequeue
7.) First Non Repeating Character in a string (CP)
8.) Apache Log (CP): Ask in case of C++ proficiency
9.) Find the mean of a stream of numbers: https://www.geeksforgeeks.org/average-of-a-stream-of-numbers/
$ 10.) Reverse Level Order Traversal: https://www.geeksforgeeks.org/reverse-level-order-traversal/
11.) Height of a binary tree: max(h1,h2) + 1
12.) Minimum weighted branch of the binary tree: min(h1,h2) + weight if h1 != 0 and h2 != 0 https://www.geeksforgeeks.org/find-minimum-depth-of-a-binary-tree/
$ 13.) Coloring a graph with minimum colors: https://www.geeksforgeeks.org/minimum-number-of-colors-required-to-color-a-graph/
$ 14.) Detect a cycle in the graph: https://www.geeksforgeeks.org/detect-cycle-in-a-graph/




**Various Linux Commands**

Question: given a list of files in format name-date-region.log, find the file row count and header and footer of files for a specific business dates/regions.

ls: The list command - functions in the Linux terminal to show all of the major directories filed under a given file system. For example, the command:

ls /applications

will show the user all of the folders stored in the overall applications folder. The ls command is used for viewing files, folders and directories.

cd: The change directory command allows the user to change between file directories. As the name command name suggest, you would use the cd command to circulate between two different directories. For example, if you wanted to change from the home directory to the applications directory, you would input the following command:

cd /home/applications

All Linux commands follow a logical path.

grep: The grep command which stands for “global regular expression print,” processes text line by line and prints any lines which match a specified pattern. The grep command is used to search text or searches the given file for lines containing a match to the given strings or words. By default, grep displays the matching lines. For example

grep arushi

will search and print all the lines that contain the word “arushi”.

man: The man command - the manual command - is used to show the manual of the inputted command. Just like a film on the nature of film, the man command is the meta command of the Linux CLI. Inputting the man command will show you all information about the command you are using. An example:

man cd

The inputting command will show the manual or all relevant information for the change directory command.

mkdir: The mkdir - make directory - command allows the user to make a new directory. Just like making a new directory within a PC or Mac desktop environment, the mkdir command makes new directories in a Linux environment. An example of the mkdir command

mkdir testdirectory

The example command made the directory "testdirectory".

rmdir:The rmdir - remove directory - command allows the user to remove an existing command using the Linux CLI. An example of the rmdir command:

rmdir testdirectory

The example command removed the directory "testdirectory".

touch: The touch command - a.k.a. the make file command - allows users to make files using the Linux CLI. Just as the mkdir command makes directories, the touch command makes files. Just as you would make a .doc or a .txt using a PC desktop, the touch command makes empty files. An example of the touch command:

touch testfile.txt

The example touch command effectively created the file testfile.txt. As noted by the extension, the file created is a .txt or text file. To equate, a .txt file in Linux is akin to a .txt notebook file within a Windows or Mac OS.

rm: The rm command - remove - like the rmdir command is meant to remove files from your Linux OS. Whereas the rmdir command will remove directories and files held within, the rm command will delete created files. An example of the rm command:

rm testfile.txt

The aforementioned command removed testfile.txt. Interestingly, whereas the rmdir command will only delete an empty directory, the rm command will remove both files and directories with files in it. This said, the rm command carries more weight than the rmdir command and should be used with more specificity.


