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
