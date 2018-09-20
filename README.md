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



