These code segments follow the order of Lecture 08 - Part 1 for CSE 24312

Follow the order of the slide set found at https://sites.google.com/a/nd.edu/morrison/courses/cse24312/lecture-notes/

The order of compilation and files to understand the design is as follows:


-------------------------------------------------

Command 1 - make LPTest1

Files: classes/LinearProbe1.h and programs/LPTest1.cpp

Slides: 10-11

Sets up a std::vector as a base Dynamic Array. Establishes a constructor that sets the capacity of the array. Print that capacity to the user. In LPTest1, two Hash Tables are created, one of <std::string, int> with an initial capacity of 7, and another of <int, double> with an initial capacity of 0.

-------------------------------------------------

Command 2 - make LPTest2

Files: classes/LinearProbe2.h and programs/LPTest2.cpp

Slides: 12-16

Adds two overloaded private HashFunc methods that translate int and std::string to a long unsigned int. Adds a method findPos that takes in a key, translates that key using HashFunc, and then runs % array.capacity. The operator<< is modified to print the values in each element of the array.

In LPTest2.cpp, two Hash Tables have elements hashed to them. Each Table has an issue we will address later. In the first hash, "Hash" overwrites "Data", introducing the need for collision resolution. In the second table, the size is initially 0, so we get a Floating Point Exception when we % 0. Introduces the need for re-sizing.

-------------------------------------------------

Command 3 - make LPTest3

Files: classes/LinearProbe3.h and programs/LPTest3.cpp

Slides: 16-20

Adds two private methods, isPrime and nextPrime to determine if a size is a Prime Number and what the next largest value is. The constructor is modified to call nextPrime(size) in the member initialization list.

LPTest3.cpp and LPTest2.cpp are the same. When LPTest3 is called, we no longer have the Floating Point Exception, and the element is properly saved in the second hash.

-------------------------------------------------

Command 4 - make LPTest4

Files: classes/LinearProbe4.h and programs/LPTest4.cpp

Slides: 21-25

To provide collision resolution, we need each element in the Hash to have a Key and a Value so we do not overwrite Keys that initially hash to the same location. 

Instead of an array of Values, a private templated struct HashEntry is created to contain a Key and a Value, with default and overloaded constructors. 

The Dynamic Array template is changed from Value to HashEntry.

The insert method is updated to take in a C++ std::pair instead of just a value.

The operator<< is updated to print the key and value at each stage

LPTest4.cpp is identical to LPTest3.cpp. The overwritting issue is not resolved, but all the pieces are in place to fix.


-------------------------------------------------

Command 5 - make LPTest5

Files: classes/LinearProbe5.h and programs/LPTest5.cpp

Slides: 26-34

Here, we initialize the Linear Probing algorithm.

The HashEntry is modified to include a state. An enumerated type EntryState with {ACTIVE, EMPTY} is created, and HashEntry has an EntryState added. The constructors are modified to include the EntryState.

findPos is modified to implement the LinearProbing algorithm with ACTIVE and EMPTY.

insert is modified to not enter a value if the returned location is out of range.

LPTest5.cpp is identical to LPTest4.cpp. We have resolved the Collision of "Data" and "Hash"

-------------------------------------------------

Command 6 - make LPTest6

Files: classes/LinearProbe6.h and programs/LPTest6.cpp

Slides: 35-41

Here, we account for resizing.

We add a private member to the HashTable numHash to keep track of the number of valid hashed values. We modify the HashTable constructor to initialize the number of Hash Elements as 0.

A private method rehash is introduced that resizes the array if numHash exceeds half the array's capacity.

The insert method is modified to account for rehashing. This is significantly different. Since there is a rehash method, we no longer need to worry about exceeding the capacity, so much of the logic changes. Instead, if we exceed half the capacity, we rehash and then insert the std::pair.

The operator<< is modified to print numHash and the state of each HashEntry to the user as well.

LPTest6.cpp is identical to LPTest5.cpp. Resized hash tables are printed to the output.

-------------------------------------------------

Command 7 - make LPTest7

Files: classes/LinearProbe7.h and programs/LPTest7.cpp

Slides: 42-47

Here, we account for Lazy Deletion.

enum HashEntry is modifed for a third case, "DELETED"

findPos is modified to account for DELETED elements in the Hash 

the operator<< is modified to print if the state is DELETED

LPTest7.cpp modifies LPTest6.cpp by removing elements and printing the Hash.

-------------------------------------------------

Command 8 - make LPTest8

Files: classes/LinearProbe.h and programs/LPTest8.cpp

Slides: 48-50

Here, we develop operator[] to get the Value given a Key.

We implement try/throw if the Key is not in the Hash in the operator[] methods 

LPTest8.cpp deliberately calls a bad Key to show the program stopping due to the exception

-------------------------------------------------

Command 9 - make LPTest

Files: classes/LinearProbe.h and programs/LPTest.cpp

Slides: 51-52

Modified LPTest8.cpp by implementing a function that has a try/throw/catch.

LPTest.cpp has the deliberate bad Key, but since the catch only prints to the user, the Hash may be accessed again


