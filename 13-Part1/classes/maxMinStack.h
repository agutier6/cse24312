/*******************************
 * File name: maxMinStack.h 
 * Author: Matthew Morrison
 * E-mail: matt.morrison@nd.edu 
 * 
 * This file contains the template class
 * for a stack with a max and a min stack.
 * ****************************/

#ifndef MAX_STACK_H
#define MAX_STACK_H

#include "stack.h"

template <class T>
class maxMinStack {
    
	private:
		// Data, Max, and Minimum Stacks
		stack<T> data;
		stack<T> max_data;
		stack<T> min_data;
    
    public:
    
        // Counters for size to report
        // Don't need to unstack to get stack size.
        unsigned int data_size = 0;
        unsigned int max_size = 0;
        unsigned int min_size = 0;
		
		maxMinStack() : data(), max_data(), min_data() {}
 
    	bool empty() const { 
    	    return data.empty(); 
    	}
 	
        T top() { 
            return data.top(); 
        }
		
        T max() const { 
            return max_data.top(); 
        }
         
        T min() const { 
            return min_data.top(); 
        }
       
        void push(const T& value) {
			
			// Print the value to the user
			std::cout << value << " ";
			
			// Push the value onto the data 
            data.push(value);   data_size++;
    
			// Conditions for pushing onto the max stack
            if (max_data.empty() || value >= max_data.top()) {
                max_data.push(value);
                max_size++;
            } 

 			// Conditions for pushing onto the min stack          
            if (min_data.empty() || value <= min_data.top()) {
                min_data.push(value);
                min_size++;
            } 
        }

        /*********************************************
         * Function Name: pop 
         * Preconditions: void
         * Postconditions: none 
         * This function pops the top value of the data 
         * stack, and if the value is equal to the max or 
         * min stack, it pops those values off as well.
         * ******************************************/           
        void pop() {
			
			// Remove if max element is found at the top of data stack
            if(data.top() == max_data.top()){
                std::cout << "Max found! " << data.top() << " popped." << std::endl;
                max_data.pop();
                max_size--;
            }

			// Remove if min element is found at the top of data stack           
            if(data.top() == min_data.top()){
                std::cout << "Min found! " << data.top() << " popped." << std::endl;
                min_data.pop();
                min_size--;
            }
            
			// Remove data element and decrement data size
            data.pop(); data_size--;

        }
};

#endif