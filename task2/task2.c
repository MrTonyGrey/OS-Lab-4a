#include <stdio.h>
#include <stdlib.h>

/* IMPLEMENT ME: Declare your functions here */
void add (int num1, int num2);
void subtract (int num1, int num2);
void multiply (int num1, int num2);
void divide (int num1, int num2);
void exitProg (int num1, int num2);


int main (void)
{
	/* IMPLEMENT ME: Insert your algorithm here */
  int input, val1 , val2;
  //Define 'a' and 'b'
  val1 = 9;
  val2 = 25;
  
  printf("Specify the operation to perform (0 : add | 1 : subtract | 2 : Multiply | 3 : divide | 4 : exit):");
  scanf("%d", &input);
  
  //function pointer array
  void (*func_ptr_arr[])(int,int) = {add, subtract, multiply, divide, exitProg};
  
  //Enters the program loop. While the user doesn't select '4' to exit, the program will execute functions
  while (input != 4)
  {
    for (int index = 0; index == input; index++) // Add function
    {
      (*func_ptr_arr[input])(val1,val2);
    }
    for (int index = 1; index == input; index++) // Subtract function
    {
      (*func_ptr_arr[input])(val1,val2);
    }
    for (int index = 2; index == input; index++) //Multiply function
    {
      (*func_ptr_arr[input])(val1,val2);
    }
    for (int index = 3; index == input; index++) // Divide function
    {
      (*func_ptr_arr[input])(val1,val2);
    }
    
    //This statement gets the next user input
    printf("Specify the operation to perform (0 : add | 1 : subtract | 2 : Multiply | 3 : divide | 4 : exit):");
    scanf("%d", &input);
  }
  
  //This statements exits the program
  for (int index = 4; index == input; index++){
      //call ext_ptr function with values a & b from file
      (*func_ptr_arr[input])(val1,val2);
  }
  
	return 0;
}

/* IMPLEMENT ME: Define your functions here */
void add (int num1, int num2) { 
  printf ("Adding 'a' and 'b' = %d\n", num1+num2);  
}
void subtract (int num1, int num2) { 
  printf ("Subtracting 'a' and 'b' = %d\n", num1-num2);  
}
void multiply (int num1, int num2) { 
  printf ("Multiplying 'a' and 'b' = %d\n", num1*num2);  
}
void divide (int num1, int num2) { 
  printf ("Dividing 'a' and 'b' = %d\n", num1/num2);  
}
void exitProg (int num1, int num1) { 
  printf ("Exiting program"); 
  exit(0); 
}


