Problem Description  
One of your friends bought a computer. He used to use the calculator before, because the number displayed on the monitor of the computer is different from the calculator, so he will be depressed when he uses the computer. To help him, you decide to write a program that displays the numbers on your computer as if they were on a calculator.  
  
Input data
The input consists of several lines, each of which represents a number to display. Each line has two integers s and n (1 <= s <= 10, 0 <=n <= 99999999), where n is the number to display and s is the size of the number to display. If a line input includes two zeros, the input ends. This line does not need to be processed.  
  
Output requirements  
The way to display is: use s '-' to represent a horizontal line segment, and s '|' to represent a vertical line segment. In this case, each number takes up s+2 columns and 2s+3 rows. Also, output a blank column between the two numbers. After each number is output, a blank line is output. Note: Spaces in the output must be filled with spaces.  
  
Input sample  
2 12345  
0 0  

Output sample  
![](https://github.com/reignsocket/monitor/blob/master/show.png)

Problem solving  
A digital display unit on a calculator that can be thought of as consisting of the following 7 strokes numbered from 1 to 7:
![](https://github.com/reignsocket/monitor/blob/master/show2.png)

So, we can say that the number 8 covers all the strokes, the number 7 covers the strokes 1, 3 and 6, and the number 1
Cover strokes 3, 6. Note that each stroke consists of s '-' or s '|'.
When outputting, first output the first line, that is, stroke 1 in all the numbers in the integer n, and then output the second line to the s+1th line, that is, stroke 2 and stroke 3 of all numbers, followed by the s+2 line , that is, all the numbers of strokes 4, and then the s+3 lines to 2×s+2 lines, that is, all numbers of strokes 5 and strokes 6, and the last 2×s+3 lines, which are all numbers. Stroke 7. If a number d does not cover a stroke m (m = 1...7), then when the stroke m of the number d is output, the space should be output; if the stroke m is overwritten, the output s '-' or s '|', depending on whether the stroke m is horizontal or vertical. From the above ideas, the key to solving this problem lies in how to record which strokes are covered by each number. In fact, if we record which numbers are covered by each stroke, the program is easier to implement. A pen is covered by which number, and can be recorded with an array. For example, the array of the strokes of the record 1 is as follows:
Char n1[11] = {"- -- -----"};
Where n1[i](i = 0...9) represents whether stroke 1 is covered by number i. If yes, then n1[i] is '-', if not, then n1[i] is a space. The value of the above array reflects that stroke 1 is covered by the numbers 0, 2, 3, 5, 6, 7, 8, 9 .
For vertical strokes 2, consisting of the character '|', the array whose coverage is recorded is as follows:
Char n2[11] = {"| ||| ||"};
The value of this array embodies that stroke 2 is covered by the numbers 0, 4, 5, 6, 8, 9 .

Implementation skills  
The most straightforward idea of which stroke is covered by a number is to record it with an integer array, such as:
Int n1[10] = {1, 0, 1, 1, 0, 1, 1, 1, 1, 1 };
Indicates the coverage of stroke 1. However, when outputting at the position where the stroke 1 of the number i is located, depending on the value of n1[i], the output space is still determined as '-', and it is better to directly use the following char type array to indicate the coverage:
Char n1[11] = {"- -- -----"};
Thus, when the output of the stroke 1 of the digital i is output, it is only necessary to output s n1[i].
This is a good idea. It reminds us that when setting some flags during programming, we should consider whether we can replace the mark of 0,1 directly with something more meaningful.
