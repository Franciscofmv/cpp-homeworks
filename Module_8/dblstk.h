// MODULE:		dblstk1.h
// PROGRAMMER:	Gary J. Blair
// LANGUAGE:	C++
// DATE:		96/07/03	
//
// PURPOSE:
//		Declarations for class DoubleStack. Showcase the 
//     use of Exceptions within classes and using try-catch block. 

#include	<stdlib.h>

#ifndef DBLSTK_H_
#define DBLSTK_H_
class	DoubleStack
{ 
	private:
		double	*data;		// Pointer to dynamic stack area.
		size_t	stack_size;	//
		size_t	tos;		// Top of stack. tos==0 ==> empty stack.
		size_t stack_capacity;
	public:
	 
		// Constructor.
	
	DoubleStack( size_t	capacity);
	 
		// Copy Constructor.
	
	DoubleStack( const DoubleStack& rhs );
	
		// Destructor.
		
	~DoubleStack(void);
	
		// Assignment operator=.
		
	DoubleStack&	operator=( DoubleStack& rhs);

		// Add item to stack, making it the topmost item.
		// Return value 1=success/0=failure.

	int	push( double&	item );

		// Remove top item from stack and return it in item.
		// Return value 1=success/0=failure.

	int	pop( double&	item );

		// Determine if the stack is empty.
		// Return value 1=empty/0=non-empty.

	int	empty(void);
	
		// Inquire the capacity of the stack.
		
	size_t	capacity(void);
	
		// Inquire the number of items on the stack.
		
	size_t	size(void);

		// Compare 2 stacks to see if they contain the same data.

	int	operator==( DoubleStack&	rhs );

		// Display the stack to the user.
	void display();

		// Throw Exceptions:
	class Exception
	{
		public:
				// Constructor of Exception
			Exception(double* stack_id){id=stack_id;}
				// Method to get id of stack:
			const double*  stack_id(){return  id; };
		private:
			double* id;
	};
		// Catch error for popping an empty stack:
	class UnderflowException : public Exception {
		public:
			UnderflowException(double* stack_id):Exception(stack_id){}
	};
		// Catch error for pushing onto a full stack:
	class OverflowException :public Exception{
		public:
			OverflowException(double* stack_id):Exception(stack_id){}
	};
};

#endif

