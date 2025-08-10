// MODULE:		dblstk1.h
// PROGRAMMER:	Gary J. Blair, Francisco Moyet Vargas
// LANGUAGE:	C++
// DATE:		96/07/0, 07/26/25
// COMPILER: Apple clang version 15.0.0 (clang-1500.3.9.4)
// PURPOSE:
//		Declarations for class UserStack template.

#include	<stdlib.h>
#include 	<string>

#ifndef DBLSTK_H_
#define DBLSTK_H_

template <class T> class UserStack
{ 
	public:
	 
		// Constructor.
	
	UserStack( size_t	capacity){
		this-> data = new(std::nothrow) T[0];
		if (!data){
			std::cerr <<"*** Memory allocation failed.\n";
		}
		this->stack_capacity = capacity;
		this->stack_size = 0;
		this->tos = 0;
	}
	 
		// Copy Constructor.
	
	UserStack( const UserStack& rhs ){
		this->stack_capacity = rhs.stack_capacity;
		this->stack_size = rhs.stack_size;
		this->tos = rhs.tos;
		this->data = new double[this->stack_capacity];
		for (size_t i = 0; i < this->stack_size; ++i){
			this->data[i] = rhs.data[i];  
		}
	}	
	
		// Destructor.
		
	~UserStack(void){
		delete [] this->data;
		this->stack_size = 0;
	}
	
		// Assignment operator=.
		
	UserStack&	operator=( UserStack& rhs){
		// Check for rhs (they share same memory address):
		if (this == &rhs){
			return *this;
		}
		if (this->stack_size != rhs.stack_size){
			this->stack_size = rhs.stack_size;
		}
		if (this->stack_capacity != rhs.stack_capacity){
			this->stack_capacity = rhs.stack_capacity;
		}
		if (this->tos != rhs.tos){
			this->tos = rhs.tos;
		}
		delete [] this->data;
		this->data = new(std::nothrow) T[rhs.stack_size];
		if(rhs.stack_size != 0){
			for(size_t i = 0; i < rhs.stack_size; ++i){
				this->data[i] = rhs.data[i];
			}
		}
		return *this;


	};

		// Add item to stack, making it the topmost item.
		// Return value 1=success/0=failure.

	int	push( T&	item ){
    size_t new_size = this->stack_size + 1;
 
    // Check if we still have the capacity to push a new number:
    if (new_size <= this->stack_capacity){
       
        // Create temp array with pushed value:
        T* data_temp = new T[new_size];
        for(size_t i = 0; i < new_size - 1; ++i){
            data_temp[i] = this->data[i];
        }
        data_temp[new_size - 1] = item;
       
        // Now, create this->data array:
        delete [] this->data;
        this->data = new(std::nothrow) T[new_size];
        if (!this->data){
            std::cerr << "*** Memory allocation failed when adding new value.\n";
            return 0;
        }
        this->data = data_temp;
        this->stack_size = new_size;
        this->tos = item;
        std::cout << "\n****\n";
        std::cerr << "*** Number "<< item << " was added succsessfully to the top of stack.\n";
        std::cout << "****\n\n";

    }
    else{
        std::cout << "\n****\n";
        std::cerr << "*** Number "<<item<<" was not added. Stack is at maximum capacity.\n";
        std::cout << "****\n\n";

        return 0;
    }
 
    return 1;
}

		// Remove top item from stack and return it in item.
		// Return value 1=success/0=failure.

	int	pop( T&	item ){
    int new_size = this->stack_size - 1;
    // Check if array is empty:
    if (new_size >= 0){

        // Copy array values in temp array:
        item = this->data[new_size];
        T *data_temp = new(std::nothrow) T[new_size];
        if (!data_temp){
            std::cerr << "*** Memory allocation for temporary array failed.\n";
        }
        for(unsigned int i = 0; i < new_size ; ++i){
            data_temp[i] = this->data[i];
        }
        // Create array:
        delete [] this->data;
        this->stack_size = this->stack_size - 1;
        this->data = new(std::nothrow) T[this->stack_size];
        if (!data){
            std::cout << "\n****\n";
            std::cerr << "*** Memory allocation failed.";
            std::cout << "\n****\n\n";
            return 0;
        }
        this->data = data_temp;
        if(new_size==0){
            this->tos = 1;
        }
        else{
            this->tos = this->data[new_size - 1];
        }

    }
    else{
        std::cout << "\n****\n";
        std::cout << "Stack is empty. ";
        std::cout << "\n****\n\n";
        return 0;
    }

    return 1;

}

		// Determine if the stack is empty.
		// Return value 1=empty/0=non-empty.

	int	empty(void){
		if(this->stack_size == 0){
			return 1;
		}
		else{
			return 0;
		}
	}
	
		// Inquire the capacity of the stack.
		
	size_t	capacity(void){
    	return this->stack_capacity;
	}
	
		// Inquire the number of items on the stack.
		
	size_t	size(void){
    	return this->stack_size;
	}

		// Compare 2 stacks to see if they contain the same data.

	int	operator==( UserStack&	rhs ){
		bool flag_1 = (this->stack_capacity == rhs.capacity());
		bool flag_2 = this->stack_size == rhs.size();
		std::cout << " flag_1: "<< flag_1 << "\n";
		std::cout << "flag 2 " << flag_2 << "\n";
		if (flag_1 && flag_2){
			for(size_t i = 0; i < this->stack_size; ++i){
				if (this->data[i] != rhs.data[i]){
					return 0;
				}
			}
			return 1;
		}
		else
		{
			return 0;
		}
	}

		// Display the stack to the user.
	void display(){
		unsigned int n = this->stack_size;
		std::cout << "\n****\n";
		if (n != 0){
			std::cout << "From First to Last added: ";
			for (unsigned int i = 0; i < n ; ++i){
				std::cout << this-> data[i] << " ";
			}
		}
		else{
			std::cout << "Stack is empty.";
		}
    	std::cout << "\n****\n\n";
	}	
	

	
	private:
		T	*data;		// Pointer to dynamic stack area.
		size_t	stack_size;	//
		size_t	tos;		// Top of stack. tos==0 ==> empty stack.
		size_t stack_capacity;
};

#endif

