These code segments follow the order of Lecture 02 - Part 2 for CSE 24312

Follow the order of the slide set found at https://sites.google.com/a/nd.edu/morrison/courses/cse24312/lecture-notes/

The order of compilation and files to understand the design is as follows:


-------------------------------------------------
Command 1 - make namespace

Files: namespace.cpp

Slides: 10

Shows an example of a namespace conflict to show the student why using namespace std is discouraged in this course.

-------------------------------------------------
Command 2 - make nameGood

Files: nameGood.cpp

Slides: 11

Modified the namespace conflict in namespace.cpp using std::cout

-------------------------------------------------
Command 3 - make nameGood2

Files: nameGood2.cpp

Slides: 13

Adds compiler directives to nameGood.cpp to show how to reduce tediousness of std:: before every cout and endl without having namespace pollution

-------------------------------------------------
Command 4 - make voidTypes

Files: voidTypes.cpp

Slides: 15

Uses a void pointer to allocate a double on the heap, and then a reference void pointer without allocated memory to de-reference that double.

-------------------------------------------------
Command 5 - make voidTypes2

Files: voidTypes2.cpp

Slides: 16-18

Modifies voidTypes.cpp by allocating a float on the heap as well, and printing both the double and the float.

-------------------------------------------------
Command 6 - make voidTypes3

Files: voidTypes2.cpp

Slides: 19

Modifies voidTypes2.cpp by allocating an integer on the heap as well, and printing the double, float, and the int.

-------------------------------------------------
Command 7 - make voidNode

Files: voidNode.cpp

Slides: 19

Modifies voidTypes3.cpp by passing the void pointer by reference to a function and allocating those values on the heap, showing how a node may be allocated and then accessed through functions.

