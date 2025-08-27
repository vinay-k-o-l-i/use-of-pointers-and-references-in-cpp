# Aim
To study and implement the applications of pointers in C++, including call by value, call by reference, and practical use cases such as a salary incrementer.

# Software Used
Compiler: GNU GCC (g++)

IDE: Visual Studio Code

Operating System: Windows/Linux

# Theory
# 1. Call by Value
In call by value, a function receives a copy of the actual arguments.

Any changes made inside the function do not affect the original variables.

It is safe but memory inefficient when handling large data.

Example:

    void swap(int x, int y){
        int temp = x;
        x = y;
        y = temp;
    }
After execution, values inside main() remain unchanged.

# 2. Call by Reference
In call by reference, the function receives the memory address of arguments using pointers.

Changes in the function directly affect the original variables.

Achieved using pointer parameters or reference variables.

Example:

    void swap(int *a, int *b){
        int temp = *a;
        *a = *b;
        *b = temp;
    }
Here, swapping works successfully since we modify values at given memory locations.

# 3. Practical Application – Salary Incrementer
Pointers are also used in real-world problems, such as updating salary records.

A pointer is passed to the function, and the salary value is modified in-place.

Example: Applying a 20% increment when an employee meets given conditions (years worked, profit generated, research projects).

    void comp(float *salary){
        *salary = *salary + (0.2 * (*salary));
    }
# Algorithms
# 1. Calling by reference and value 
Steps

    Start
    
    Initialize two integer variables a and b with values (e.g., a = 20, b = 50)
    
    Call the swap function and pass the addresses of a and b
    
    Inside the swap function:
    
    Store the value at address a in a temporary variable temp
    
    Assign the value at address b to the location pointed by a
    
    Assign the value in temp to the location pointed by b
    
    Return to main function
    
    Display the swapped values of a and b
    
    End
                
    
# 2. Calling value by address
Steps

    Start
    
    Declare two integer variables a and b
    
    Initialize a = 20 and b = 50
    
    Call the swap function with a and b as arguments
    
    Inside the swap function:
    
    Store the value of a in a temporary variable temp
    
    Assign the value of b to a
    
    Assign the value of temp to b
    
    Return to the main function
    
    Display the swapped values of a and b
    
    End

# 3. Employee salary increment 
Steps

    1. Start
    
    2. Input Employee Details
    
    a. Prompt and read original_salary
    
    b. Prompt and read employee_duration (in years)
    
    c. Prompt and read profit (amount made by employee)
    
    d. Prompt and read research_project (1 for Yes, 0 for No)
    
    e. Prompt and read research_project_in_pipeline (1 for Yes, 0 for No)
    
    3. Initialize Condition Counter
    
    a. Set condition_check = 0
    
    4. Evaluate Conditions
    
    a. If employee_duration >= 1, increment condition_check
    
    b. If profit >= 100000, increment condition_check
    
    c. If research_project == 1, increment condition_check
    
    d. If research_project_in_pipeline == 1, increment condition_check
    
    5. Decision Making
    
    a. If condition_check >= 3:
    
    b. Display message: "The new salary increment will be 20% of the original salary"
    
    c. Call function(&original_salary) to calculate and display 20% of salary
    
    d. Else:
    
    e. Display message: "As conditions are not satisfied, there is no change in salary"
    
    6. End
        
