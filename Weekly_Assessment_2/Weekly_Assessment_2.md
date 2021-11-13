# NeoPAT Solutions

# Q-1
Janu wants to check if the given number is a special number or not.
For example, 1729 is a special number since which, when its digits are added together, produces a sum which, when multiplied by its reversal, yields the original number:
1 + 7 + 2 + 9 = 19
19 × 91 = 1729

Write a program to check whether the given number is a special number or not.

### Input format
Number in first line

### Output format
Display the given number is a special number or not along with the given number.

### Sample testcases
Input 1
1729
Output 1
1729 is a special number
Input 2
1728
Output 2
1728 is not a special number


# Q-2
If Cricket is the most popular outdoor game in India, Carrom is not too behind as one of most played indoor games.
Let's now make use of our knowlege in operators & conditional statements to compute the points scored at the end of a round in Carrom Game.
Carrom is a board game where two participants (teams) play. It consists of 9 white coins, 9 black coins and a red coin. The first team that finishes all their coins wins (given that red has been pocketed by one of the teams). The points are awarded based on the number of left-over coins of the opposition (loser) in the board. If the winning team has pocketed the red, they get an additional 5 points. Write a program to compute the score of winner at the end of a round.
If the number of coins left on the board is either less than 1 or greater than 9 display "Invalid Input".

Create a main class with the name "Main".

### Input format
Input consists of a single integer which corresponds to number of coins left on board and a character which corresponds to whether the winning team has pocketed red or not.

### Output format
Output corresponds to the total points won.

Print Invalid Input in case the no of coins is less than one or greater than nine.
### Sample testcases
Input 1

5
y

Output 1

10

# Q-3
Brendon is a little techno-whiz whose IQ is out of the charts. He has set up a laboratory at home for his research and development and was once approached by an Event Management firm to design them a Robot that would log all the activities carried out in an event at various instants during the day. This would help them keep a track and in smooth functioning of events.

Brendon, after long days of hard work designed one such Robot but wanted to test it on his own daily routines. His daily routine is very simple, he starts his day working in a computer, then he eats food and finally proceeds for sleeping thus ending his day. He has programmed his Robot to log the activities of him at various instants during the day.

Today it recorded activities that Brendon was doing at N different instants. These instances are recorded in chronological order (in increasing order of time). This log is provided to you in form of a string s of length N, consisting of characters 'C', 'E' and 'S'. If s[i] = 'C', then it means that at the i-th instant Brendon was working in Computer, 'E' denoting he was eating and 'S' means he was sleeping.

Write a program to tell whether the record log made by the robot could possibly be correct or not.



### Input format
The only line of input contains the string s.

### Output format
Output a single line containing "yes" or "no" (without quotes) accordingly.

### Sample testcases
Input 1

CES

Output 1

yes

Input 2

SCCC

Output 2

no


# Q-4
Mars Spell Bee is the largest self-motivated spelling competition held for school children. The children from different schools who are participating in the competition will be given a registration code. The registration is on a first come first serve basis to a maximum of N entries.

The competition is conducted in two different galleries of the venue. Just for the ease of their management, the Event organizers have announced to divide the children into two groups, to attend the competition in the two chosen galleries. By that note, all those children who have their registration code as an even number will be put in one gallery and those with odd number will be in another gallery.

Help the organizers to find count of number of even registration codes and odd registration codes from the total N.

### Input format
The first line of input consists of a single integer N denoting the number of registration codes issued for the competition.

The second line of input consists of N space separated integers, denoting the registration codes of each child.

### Output format
Output a single with the count of even numbers and odd numbers from N, separated by a single space.

Refer sample input and output for formatting specifications.

### Sample testcases
Input 1

3
1
4
10

Output 1

2 1

Input 2

5
2
6
23
12
11
