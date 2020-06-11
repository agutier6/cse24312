These code segments follow the order of Lecture 06 - Part 2 for CSE 24312

Follow the order of the slide set found at https://sites.google.com/a/nd.edu/morrison/courses/cse24312/lecture-notes/

The order of compilation and files to understand the design is as follows:


-------------------------------------------------

Command 1 - make sol_1

Files: classes/sol1.h and programs/sol_1.cpp

Slides: 6-8

Shows the Dynamic Array called with a default constructor, and added elements per the problem statement. sol1.h prints the elements out in their initial order 

-------------------------------------------------

Command 2 - make sol_2

Files: classes/sol2.h and programs/sol_2.cpp

Slides: 9-10

sol2.h modifies sol1.h by iterating through the array and prints the smallest value and its location and the end. sol_2.cpp calls that function

-------------------------------------------------

Command 3 - make sol_3

Files: classes/sol3.h and programs/sol_3.cpp

Slides: 11-14

sol3.h modifies sol2.h by iterating find the maximum values after the minimum value in the same pass, reducing the time complexity. sol_3.cpp is the same as sol_2.cpp, except it calls sol3.h.

-------------------------------------------------

Command 4 - make sol

Files: classes/sol.h and programs/sol.cpp

Slides: 15-17

sol.h modifies sol3.h by printing the final results as dictated in the problem. sol.cpp is the same as sol_3.cpp, except it calls sol.h.
