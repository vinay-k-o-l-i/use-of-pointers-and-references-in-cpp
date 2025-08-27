/* Vinay koli
PRN 24070123133
ENTC B2 */

#include <iostream>
using namespace std;

// Function to calculate 20% of salary using pointer
void function(int* salary) 
{
    int new_salary = (*salary * 20) / 100;
    cout << "\nNew salary (20% of original): Rs " << new_salary << endl;
}

int main() 
{
    int original_salary;
    cout << "Enter the initial salary of the employee: ";
    cin >> original_salary;

    int employee_duration;
    cout << "Enter the work duration of the employee (in years): ";
    cin >> employee_duration;

    int profit;
    cout << "Enter the profit made by the employee: ";
    cin >> profit;

    bool research_project;
    cout << "Has the employee completed at least one research project? (1 - Yes, 0 - No): ";
    cin >> research_project;

    bool research_project_in_pipeline;
    cout << "Is there a research project in pipeline? (1 - Yes, 0 - No): ";
    cin >> research_project_in_pipeline;

    int condition_check = 0;

    if (employee_duration >= 1) 
    {
        condition_check++;
    }
    if (profit >= 100000) 
    {
        condition_check++;
    }
    if (research_project == 1) 
    {
        condition_check++;
    }
    if (research_project_in_pipeline == 1) 
    {
        condition_check++;
    }
    if (condition_check >= 3) 
    {
        cout << "\nThe new salary increment will be 20% of the original salary.\n";
        function(&original_salary); 
    } 
    else 
    {
        cout << "\nAs conditions are not satisfied, there is no change in salary.\n";
    }

    return 0;
}

/* output for this code

Enter the initial salary of the employee: 25000 
Enter the work duration of the employee (in years): 1
Enter the profit made by the employee: 120000
Has the employee completed at least one research project? (1 - Yes, 0 - No): 1
Is there a research project in pipeline? (1 - Yes, 0 - No): 1

The new salary increment will be 20% of the original salary.

New salary (20% of original): Rs 5000

*/
