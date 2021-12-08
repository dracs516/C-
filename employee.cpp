#include <iostream>

using namespace std;

class employee
{
	int emp_number;
	char emp_name[20];
	float emp_basic;
	float emp_da;
	float emp_it;
	float emp_net_sal;

public:
	void get_emp_details();
	float find_net_salary(float basic, float da, float it);
	void show_emp_details();
};

void employee ::get_emp_details()
{
	cout << "\nEnter employee number: ";
	cin >> emp_number;
	cout << "\nEnter employee name: ";
	cin >> emp_name;
	cout << "\nEnter employee basic: ";
	cin >> emp_basic;
	emp_da = .52 * emp_basic;
	emp_it = 0.3 * (emp_basic + emp_da);
}

float employee ::find_net_salary(float basic, float da, float it)
{
	return (basic + da) - it;
}

void employee ::show_emp_details()
{
	cout << "\n\n**** Details of  Employee ****";
	cout << "\nEmployee Name      :  " << emp_name;
	cout << "\nEmployee number    :  " << emp_number;
	cout << "\nBasic salary       :  " << emp_basic;
	cout << "\nEmployee DA        :  " << emp_da;
	cout << "\nIncome Tax         :  " << emp_it;
	cout << "\nNet Salary         :  " << find_net_salary(emp_basic, emp_da, emp_it);
	cout << "\n-------------------------------\n\n";
}

int main()
{
	int n;
	cout << "Enter the no. of employees: ";
	cin >> n;

	employee emp[n];

	for (int i = 0; i < n; i++)
	{
		// employee emp;
		emp[i].get_emp_details();
		// emp.show_emp_details();
	}
	for (int i = 0; i < n; i++)
	{
		// employee emp;
		// arr[i].get_emp_details();
		emp[i].show_emp_details();
	}

	return 0;
}
