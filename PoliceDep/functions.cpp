//This file provides functionality


#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

#include "functions.h"
#include "structure.h"

using namespace std;

// Function which will load records from file about detainee's and output them in table on screen.
void viewDetainee()
{
	ifstream infileD("detainees.txt", ios::in);

	if (!infileD)
	{
		cerr << " Error opening file! " << endl;
	}
	else
	{
		cout << endl << endl;
		cout << " Added detainee's " << endl << endl;
		cout << endl;

		// Printing table
		cout << setfill('-') << setw(1) << "+" << setw(15) << "-" << setw(1) << "+" << setw(15) << "-" << setw(1) << "+" << setw(10) << "-" << setw(1) << "+" << setw(30) << "-" << setw(1) << "+" << setw(11) << "-" << setw(1) << "+" << setw(11) << "-" << setw(1) << "+" << setw(15) << "-" << setw(1) << "+" << endl;
		cout << setfill(' ') << setw(1) << "|" << setw(15) << left << "Detainee code" << setw(1) << "|" << setw(15) << left << "First name" << setw(1) << "|" << setw(10) << left << "Surname" << setw(1) << "|" << setw(30) << left << "Reason of imprisoning" << setw(1) << "|" << setw(11) << left << "Captured" << setw(1) << "|" << setw(11) << left << "Released" << setw(1) << "|" << setw(15) << left << "Captured by" << setw(1) << "|" << endl;
		cout << setfill('-') << setw(1) << "+" << setw(15) << "-" << setw(1) << "+" << setw(15) << "-" << setw(1) << "+" << setw(10) << "-" << setw(1) << "+" << setw(30) << "-" << setw(1) << "+" << setw(11) << "-" << setw(1) << "+" << setw(11) << "-" << setw(1) << "+" << setw(15) << "-" << setw(1) << "+" << endl;

		while (infileD >> detainee.code >> detainee.name >> detainee.surname >> detainee.detaineeReason >> detainee.captured >> detainee.released >> detainee.officer_code)
		{
			// Printing dentainee's
			char size[100];
			//infileD.getline(size, 100);
			infileD.ignore();
			infileD.getline(size, 100);

			cout << setfill(' ') << setw(1) << "|" << setw(15) << left << detainee.code << setw(1) << "|" << setw(15) << left << detainee.name << setw(1) << "|" << setw(10) << left << detainee.surname << setw(1) << "|" << setw(30) << left << detainee.detaineeReason << setw(1) << "|" << setw(11) << left << detainee.captured << setw(1) << "|" << setw(11) << left << detainee.released << setw(1) << "|" << setw(15) << left << detainee.officer_code << setw(1) << "|" << endl;
			cout << setfill('-') << setw(1) << "+" << setw(15) << "-" << setw(1) << "+" << setw(15) << "-" << setw(1) << "+" << setw(10) << "-" << setw(1) << "+" << setw(30) << "-" << setw(1) << "+" << setw(11) << "-" << setw(1) << "+" << setw(11) << "-" << setw(1) << "+" << setw(15) << "-" << setw(1) << "+" << endl;

		}
	}
}

// Function which will load records from file about officer's and output them in table on screen.
void viewOfficer()
{
	ifstream infileO("Officers.txt", ios::in);

	if (!infileO)
	{
		cerr << " Error opening file! " << endl;
	}
	else
	{
		cout << endl << endl;
		cout << " Added officer's " << endl << endl;
		cout << endl;

		// Printing table
		cout << setfill('-') << setw(1) << "+" << setw(15) << "-" << setw(1) << "+" << setw(15) << "-" << setw(1) << "+" << setw(10) << "-" << setw(1) << "+" << setw(30) << "-" << setw(1) << "+" << setw(11) << "-" << setw(1) << "+" << endl;
		cout << setfill(' ') << setw(1) << "|" << setw(15) << left << "Officer code" << setw(1) << "|" << setw(15) << left << "First name" << setw(1) << "|" << setw(10) << left << "Surname" << setw(1) << "|" << setw(30) << left << "Position" << setw(1) << "|" << setw(11) << left << "Department" << setw(1) << "|" << endl;
		cout << setfill('-') << setw(1) << "+" << setw(15) << "-" << setw(1) << "+" << setw(15) << "-" << setw(1) << "+" << setw(10) << "-" << setw(1) << "+" << setw(30) << "-" << setw(1) << "+" << setw(11) << "-" << setw(1) << "+" << endl;

		while (infileO >> officer.officer_code >> officer.officer_name >> officer.officer_surname >> officer.officer_position >> officer.dep_number)
		{
			char size[100];
			infileO.ignore();
			infileO.getline(size, 100);
			// Printing officer's
			cout << setfill(' ') << setw(1) << "|" << setw(15) << left << officer.officer_code << setw(1) << "|" << setw(15) << left << officer.officer_name << setw(1) << "|" << setw(10) << left << officer.officer_surname << setw(1) << "|" << setw(30) << left << officer.officer_position << setw(1) << "|" << setw(11) << left << officer.dep_number << setw(1) << "|" << endl;
			cout << setfill('-') << setw(1) << "+" << setw(15) << "-" << setw(1) << "+" << setw(15) << "-" << setw(1) << "+" << setw(10) << "-" << setw(1) << "+" << setw(30) << "-" << setw(1) << "+" << setw(11) << "-" << setw(1) << "+" << endl;
		}
	}
}

// Function which will load records from file about department's and output them in table on screen.
void viewDepartment()
{
	ifstream infileDep("departments.txt", ios::in);

	if (!infileDep)
	{
		cerr << " Error opening file! " << endl;
	}
	else
	{
		cout << endl << endl;
		cout << " Added department's " << endl << endl;
		cout << endl;

		// Printing table
		cout << setfill('-') << setw(1) << "+" << setw(17) << "-" << setw(1) << "+" << setw(17) << "-" << setw(1) << "+" << setw(16) << "-" << setw(1) << "+" << setw(29) << "-" << setw(1) << "+" << endl;
		cout << setfill(' ') << setw(1) << "|" << setw(17) << left << "Department number" << setw(1) << "|" << setw(17) << left << "Department name" << setw(1) << "|" << setw(16) << left << "Description" << setw(1) << "|" << setw(29) << left << "Head of department" << setw(1) << "|" << endl;
		cout << setfill('-') << setw(1) << "+" << setw(17) << "-" << setw(1) << "+" << setw(17) << "-" << setw(1) << "+" << setw(16) << "-" << setw(1) << "+" << setw(29) << "-" << setw(1) << "+" << endl;

		while (infileDep >> department.dep_number >> department.dep_name >> department.dep_description >> department.dep_leader)
		{
			char size[100];
			infileDep.ignore();
			infileDep.getline(size, 100);

			// Printing department's
			cout << setfill(' ') << setw(1) << "|" << setw(17) << left << department.dep_number << setw(1) << "|" << setw(17) << left << department.dep_name << setw(1) << "|" << setw(16) << left << department.dep_description << setw(1) << "|" << setw(29) << left << department.dep_leader << setw(1) << "|" << endl;
			cout << setfill('-') << setw(1) << "+" << setw(17) << "-" << setw(1) << "+" << setw(17) << "-" << setw(1) << "+" << setw(16) << "-" << setw(1) << "+" << setw(29) << "-" << setw(1) << "+" << endl;
		}
	}
}

// Fuction which will find detainee's by code.
void viewDetaineeByCode()
{
	ifstream infileD("detainees.txt", ios::in);

	string code;

	if (!infileD)
	{
		cerr << " Error opening file! " << endl;
	}
	else
	{
		cout << endl;
		cout << "Enter name the detainee code: ";
		cin >> code;
		cout << endl;

		// Printing table
		cout << setfill('-') << setw(1) << "+" << setw(15) << "-" << setw(1) << "+" << setw(15) << "-" << setw(1) << "+" << setw(10) << "-" << setw(1) << "+" << setw(30) << "-" << setw(1) << "+" << setw(11) << "-" << setw(1) << "+" << setw(11) << "-" << setw(1) << "+" << setw(15) << "-" << setw(1) << "+" << endl;
		cout << setfill(' ') << setw(1) << "|" << setw(15) << left << "Detainee code" << setw(1) << "|" << setw(15) << left << "First name" << setw(1) << "|" << setw(10) << left << "Surname" << setw(1) << "|" << setw(30) << left << "Reason of imprisoning" << setw(1) << "|" << setw(11) << left << "Captured" << setw(1) << "|" << setw(11) << left << "Released" << setw(1) << "|" << setw(15) << left << "Captured by" << setw(1) << "|" << endl;
		cout << setfill('-') << setw(1) << "+" << setw(15) << "-" << setw(1) << "+" << setw(15) << "-" << setw(1) << "+" << setw(10) << "-" << setw(1) << "+" << setw(30) << "-" << setw(1) << "+" << setw(11) << "-" << setw(1) << "+" << setw(11) << "-" << setw(1) << "+" << setw(15) << "-" << setw(1) << "+" << endl;



		while (infileD >> detainee.code >> detainee.name >> detainee.surname >> detainee.detaineeReason >> detainee.captured >> detainee.released >> detainee.officer_code)
		{
			if (code == detainee.code)
			{
				// Printing detainee's
				cout << setfill(' ') << setw(1) << "|" << setw(15) << left << detainee.code << setw(1) << "|" << setw(15) << left << detainee.name << setw(1) << "|" << setw(10) << left << detainee.surname << setw(1) << "|" << setw(30) << left << detainee.detaineeReason << setw(1) << "|" << setw(11) << left << detainee.captured << setw(1) << "|" << setw(11) << left << detainee.released << setw(1) << "|" << setw(15) << left << detainee.officer_code << setw(1) << "|" << endl;
				cout << setfill('-') << setw(1) << "+" << setw(15) << "-" << setw(1) << "+" << setw(15) << "-" << setw(1) << "+" << setw(10) << "-" << setw(1) << "+" << setw(30) << "-" << setw(1) << "+" << setw(11) << "-" << setw(1) << "+" << setw(11) << "-" << setw(1) << "+" << setw(15) << "-" << setw(1) << "+" << endl;

			}
		}


		if (code != detainee.code)
			cout << " Theres no detainee with code " << code << endl;
	}

}

// Fuction which will find officer's by code.
void viewOfficerByCode()
{
	ifstream infileO("Officers.txt", ios::in);

	string code;

	if (!infileO)
	{
		cerr << " Error opening file! " << endl;
	}
	else
	{
		cout << endl;
		cout << " Enter the officer code: ";
		cin >> code;
		cout << endl;

		// Printing table
		cout << setfill('-') << setw(1) << "+" << setw(15) << "-" << setw(1) << "+" << setw(15) << "-" << setw(1) << "+" << setw(10) << "-" << setw(1) << "+" << setw(30) << "-" << setw(1) << "+" << setw(11) << "-" << setw(1) << "+" << endl;
		cout << setfill(' ') << setw(1) << "|" << setw(15) << left << "Officer code" << setw(1) << "|" << setw(15) << left << "First name" << setw(1) << "|" << setw(10) << left << "Surname" << setw(1) << "|" << setw(30) << left << "Position" << setw(1) << "|" << setw(11) << left << "Department" << setw(1) << "|" << endl;
		cout << setfill('-') << setw(1) << "+" << setw(15) << "-" << setw(1) << "+" << setw(15) << "-" << setw(1) << "+" << setw(10) << "-" << setw(1) << "+" << setw(30) << "-" << setw(1) << "+" << setw(11) << "-" << setw(1) << "+" << endl;

		while (infileO >> officer.officer_code >> officer.officer_name >> officer.officer_surname >> officer.officer_position >> officer.dep_number)
		{
			if (code == officer.officer_code)
			{
				// Printing officer's
				cout << setfill(' ') << setw(1) << "|" << setw(15) << left << officer.officer_code << setw(1) << "|" << setw(15) << left << officer.officer_name << setw(1) << "|" << setw(10) << left << officer.officer_surname << setw(1) << "|" << setw(30) << left << officer.officer_position << setw(1) << "|" << setw(11) << left << officer.dep_number << setw(1) << "|" << endl;
				cout << setfill('-') << setw(1) << "+" << setw(15) << "-" << setw(1) << "+" << setw(15) << "-" << setw(1) << "+" << setw(10) << "-" << setw(1) << "+" << setw(30) << "-" << setw(1) << "+" << setw(11) << "-" << setw(1) << "+" << endl;
			}
		}

		if (code != officer.officer_code)
			cout << " There's no officer with code " << code << endl;
	}


}

// Fuction which will find department's by number.
void viewDepartmentByNumber()
{
	ifstream infileDep("departments.txt", ios::in);

	string number;

	if (!infileDep)
	{
		cerr << " Error opening file! " << endl;
	}
	else
	{
		cout << endl;
		cout << " Enter department number: ";
		cin >> number;
		cout << endl;

		// Printing table
		cout << setfill('-') << setw(1) << "+" << setw(17) << "-" << setw(1) << "+" << setw(17) << "-" << setw(1) << "+" << setw(16) << "-" << setw(1) << "+" << setw(29) << "-" << setw(1) << "+" << endl;
		cout << setfill(' ') << setw(1) << "|" << setw(17) << left << "Department number" << setw(1) << "|" << setw(17) << left << "Department name" << setw(1) << "|" << setw(16) << left << "Description" << setw(1) << "|" << setw(29) << left << "Head of department" << setw(1) << "|" << endl;
		cout << setfill('-') << setw(1) << "+" << setw(17) << "-" << setw(1) << "+" << setw(17) << "-" << setw(1) << "+" << setw(16) << "-" << setw(1) << "+" << setw(29) << "-" << setw(1) << "+" << endl;

		while (infileDep >> department.dep_number >> department.dep_name >> department.dep_description >> department.dep_leader)
		{
			if (number == department.dep_number)
			{
				cout << setfill(' ') << setw(1) << "|" << setw(17) << left << department.dep_number << setw(1) << "|" << setw(17) << left << department.dep_name << setw(1) << "|" << setw(16) << left << department.dep_description << setw(1) << "|" << setw(29) << left << department.dep_leader << setw(1) << "|" << endl;
				cout << setfill('-') << setw(1) << "+" << setw(17) << "-" << setw(1) << "+" << setw(17) << "-" << setw(1) << "+" << setw(16) << "-" << setw(1) << "+" << setw(29) << "-" << setw(1) << "+" << endl;
			}

		}

		if (number != department.dep_number)
			cout << " There's no department with number " << number << endl;
	}
}

// Fuction which will find detainne's by surname
void viewDetaineeBySurname()
{
	ifstream infileD("detainees.txt", ios::in);

	string surname;

	if (!infileD)
	{
		cerr << " Error opening file! " << endl;
	}
	else
	{
		cout << endl;
		cout << " Enter detainee's surname to find: ";
		cin >> surname;
		cout << endl;

		// Printing table
		cout << setfill('-') << setw(1) << "+" << setw(15) << "-" << setw(1) << "+" << setw(15) << "-" << setw(1) << "+" << setw(10) << "-" << setw(1) << "+" << setw(30) << "-" << setw(1) << "+" << setw(11) << "-" << setw(1) << "+" << setw(11) << "-" << setw(1) << "+" << setw(15) << "-" << setw(1) << "+" << endl;
		cout << setfill(' ') << setw(1) << "|" << setw(15) << left << "Detainee code" << setw(1) << "|" << setw(15) << left << "First name" << setw(1) << "|" << setw(10) << left << "Surname" << setw(1) << "|" << setw(30) << left << "Reason of imprisoning" << setw(1) << "|" << setw(11) << left << "Captured" << setw(1) << "|" << setw(11) << left << "Released" << setw(1) << "|" << setw(15) << left << "Captured by" << setw(1) << "|" << endl;
		cout << setfill('-') << setw(1) << "+" << setw(15) << "-" << setw(1) << "+" << setw(15) << "-" << setw(1) << "+" << setw(10) << "-" << setw(1) << "+" << setw(30) << "-" << setw(1) << "+" << setw(11) << "-" << setw(1) << "+" << setw(11) << "-" << setw(1) << "+" << setw(15) << "-" << setw(1) << "+" << endl;

		while (infileD >> detainee.code >> detainee.name >> detainee.surname >> detainee.detaineeReason >> detainee.captured >> detainee.released >> detainee.officer_code)
		if (surname == detainee.surname)
		{
			// Printing detainee's
			cout << setfill(' ') << setw(1) << "|" << setw(15) << left << detainee.code << setw(1) << "|" << setw(15) << left << detainee.name << setw(1) << "|" << setw(10) << left << detainee.surname << setw(1) << "|" << setw(30) << left << detainee.detaineeReason << setw(1) << "|" << setw(11) << left << detainee.captured << setw(1) << "|" << setw(11) << left << detainee.released << setw(1) << "|" << setw(15) << left << detainee.officer_code << setw(1) << "|" << endl;
			cout << setfill('-') << setw(1) << "+" << setw(15) << "-" << setw(1) << "+" << setw(15) << "-" << setw(1) << "+" << setw(10) << "-" << setw(1) << "+" << setw(30) << "-" << setw(1) << "+" << setw(11) << "-" << setw(1) << "+" << setw(11) << "-" << setw(1) << "+" << setw(15) << "-" << setw(1) << "+" << endl;

		}

	}
}

// Function which will find Officer's by surname.
void viewOfficerBySurname()
{
	ifstream infileO("officers.txt", ios::in);

	string surname;

	if (!infileO)
	{
		cerr << " Error opening file! " << endl;
	}
	else
	{
		cout << endl;
		cout << " Enter officer's surname: ";
		cin >> surname;
		cout << endl;

		// Printing table
		cout << setfill('-') << setw(1) << "+" << setw(15) << "-" << setw(1) << "+" << setw(15) << "-" << setw(1) << "+" << setw(10) << "-" << setw(1) << "+" << setw(30) << "-" << setw(1) << "+" << setw(11) << "-" << setw(1) << "+" << endl;
		cout << setfill(' ') << setw(1) << "|" << setw(15) << left << "Officer code" << setw(1) << "|" << setw(15) << left << "First name" << setw(1) << "|" << setw(10) << left << "Surname" << setw(1) << "|" << setw(30) << left << "Position" << setw(1) << "|" << setw(11) << left << "Department" << setw(1) << "|" << endl;
		cout << setfill('-') << setw(1) << "+" << setw(15) << "-" << setw(1) << "+" << setw(15) << "-" << setw(1) << "+" << setw(10) << "-" << setw(1) << "+" << setw(30) << "-" << setw(1) << "+" << setw(11) << "-" << setw(1) << "+" << endl;

		while (infileO >> officer.officer_code >> officer.officer_name >> officer.officer_surname >> officer.officer_position >> officer.dep_number)
		{
			if (surname == officer.officer_surname)
			{
				// Printing officer's
				cout << setfill(' ') << setw(1) << "|" << setw(15) << left << officer.officer_code << setw(1) << "|" << setw(15) << left << officer.officer_name << setw(1) << "|" << setw(10) << left << officer.officer_surname << setw(1) << "|" << setw(30) << left << officer.officer_position << setw(1) << "|" << setw(11) << left << officer.dep_number << setw(1) << "|" << endl;
				cout << setfill('-') << setw(1) << "+" << setw(15) << "-" << setw(1) << "+" << setw(15) << "-" << setw(1) << "+" << setw(10) << "-" << setw(1) << "+" << setw(30) << "-" << setw(1) << "+" << setw(11) << "-" << setw(1) << "+" << endl;
			}

		}
	}
}
// Function which will output detainee records in file.
void addDetainee()
{

	ofstream outfileD("detainees.txt", ios::out | ios::app);

	if (!outfileD)
	{
		cerr << " Error opening file " << endl;
	}
	else
	{
		cerr << " Please fill in the following information about detainee " << endl << endl;
		/*ifstream infileO("Officers.txt", ios::in);
		cin.ignore();*/
		cin.getline(officer.officer_code, 20);

		
		//ifstream infileD("detainees.txt", ios::in);
		// Entering information of detainee.
	
		
		cout << " Code: ";
		cin.getline(detainee.code, 10);
		cout << " Name: ";
		cin.getline(detainee.name, 20);
		cout << " Surename: ";
		cin.getline(detainee.surname, 20);
		cout << " Reason why arested:  ";
		cin.getline(detainee.detaineeReason, 100);
		cout << " Caputre date: ";
		cin.getline(detainee.captured, 11);
		cout << " Release date: ";
		cin.getline(detainee.released, 11);
		cout << " Captured by: ";
		cin.getline(detainee.officer_code, 20);
	

	
				
		
		

		// Writing in file.
		outfileD << detainee.code << '\n';
		outfileD << detainee.name << '\n';
		outfileD << detainee.surname << '\n';
		outfileD << detainee.detaineeReason << '\n';
		outfileD << detainee.captured << '\n';
		outfileD << detainee.released << '\n';
		outfileD << detainee.officer_code << '\n';
		outfileD << "--------------------" << '\n';

		outfileD.flush();
		outfileD.close();

	}
}

// Function which will output officer records in file.
void addOfficer()
{
	ofstream outfileO("officers.txt", ios::out | ios::app);

	if (!outfileO)
	{
		cerr << " Error opening file! " << endl;
	}
	else
	{
		cerr << " Please fill in the following information about officer " << endl << endl;

		// Entering information of officer.
		cin.ignore();
		cout << " Code: ";
		cin.getline(officer.officer_code, 20);
		cout << " Name: ";
		cin.getline(officer.officer_name, 20);
		cout << " Surname: ";
		cin.getline(officer.officer_surname, 20);
		cout << " Position: ";
		cin.getline(officer.officer_position, 20);
		cout << " Department: ";
		cin.getline(officer.dep_number, 20);

		// Writing in file
		outfileO << officer.officer_code << '\n';
		outfileO << officer.officer_name << '\n';
		outfileO << officer.officer_surname << '\n';
		outfileO << officer.officer_position << '\n';
		outfileO << officer.dep_number << '\n';
		outfileO << "--------------------" << '\n';

		outfileO.flush();
		outfileO.close();
	}
}

// Function which will output department records in file.
void addDepartment()
{
	ofstream outfileDep("departments.txt", ios::out | ios::app);

	if (!outfileDep)
	{
		cerr << " Error opening file! " << endl;
	}
	else
	{
		cerr << " Please fill in the following information about department " << endl << endl;

		// Entering information about department
		cin.ignore();
		cout << " Number: ";
		cin.getline(department.dep_number, 20);
		cout << " Name: ";
		cin.getline(department.dep_name, 20);
		cout << " Description: ";
		cin.getline(department.dep_description, 40);
		cout << " Leader: ";
		cin.getline(department.dep_leader, 20);

		// Writing in file
		outfileDep << department.dep_number << '\n';
		outfileDep << department.dep_name << '\n';
		outfileDep << department.dep_description << '\n';
		outfileDep << department.dep_leader << '\n';
		outfileDep << "--------------------" << '\n';

		outfileDep.flush();
		outfileDep.close();
	}
}

// Function which will edit detainee records.
void editDetainee()
{
	
	int entry_count = 0;
	string det_code;
	string code_input, new_det_code, n_e;
	
	ifstream infileD("detainees.txt", ios::in);
	ofstream outfileD("detainees.txt.tmp", ios::out);
	char line[220];

	while (infileD)
	{
		infileD >> line;
		if (strcmp(line, "--------------------") == 0)
		{
			entry_count++;
		}
	}
	infileD.clear(); // novac errorus
	//infileD.seekg(0, ios::end);
	//entry_count = infileD.tellg();

	//cout << "izmers" << entry_count;
	cout << endl;


	cout << " Enter the code of detainee: ";

	cin.ignore();
	getline(cin, det_code);

	while (infileD)
	{
		infileD >> detainee.code >> detainee.name >> detainee.surname >> detainee.detaineeReason >> detainee.captured >> detainee.released >> detainee.officer_code;

		

		if (det_code == detainee.code)
		{
			cout << " They are equal! " << endl;
			cin.ignore();
			infileD.getline(detainee.code, 10);
			/*infileD.getline(detainee.name, 20);
			infileD.getline(detainee.surname, 20);
			infileD.getline(detainee.detaineeReason, 100);
			infileD.getline(detainee.captured, 11);
			infileD.getline(detainee.released, 11);
			infileD.getline(detainee.officer_code, 40);*/
		}
		else cout << "they are not";
	
		/*else
			cout << endl;
		cerr << " Detainee with code: " << " [ " << det_code << " ] " << " wasnt found " << endl;
			cout << endl;
			break;*/


		//cout << " Enter information abot detainee " << endl;

		//// Entering information of detainee.

		//cin.ignore();
		//cout << " Code: ";
		//cin.getline(detainee.code, 10);
		//cout << " Name: ";
		//cin.getline(detainee.name, 20);
		//cout << " Surename: ";
		//cin.getline(detainee.surname, 20);
		//cout << " Reason why arested:  ";
		//cin.getline(detainee.detaineeReason, 100);
		//cout << " Caputre date: ";
		//cin.getline(detainee.captured, 11);
		//cout << " Release date: ";
		//cin.getline(detainee.released, 11);
		//cout << " Captured by: ";
		//cin.getline(detainee.officer_code, 40);


		//// Writing in file.

		//outfileD << detainee.code << '\n';
		//outfileD << detainee.name << '\n';
		//outfileD << detainee.surname << '\n';
		//outfileD << detainee.detaineeReason << '\n';
		//outfileD << detainee.captured << '\n';
		//outfileD << detainee.released << '\n';
		//outfileD << detainee.officer_code << '\n';
		//outfileD << "--------------------" << '\n';


		outfileD.flush();
		outfileD.close();
		infileD >> line;

		if (strcmp(line, "--------------------") == 0)
		{
			entry_count++;
		}

		remove("detainees.txt");
		int result = 1;
		char oldname[] = "detainees.txt.tmp";
		char newname[] = "detainees.txt";
		result = rename(oldname, newname);
		if (result == 0)
			cout << "File renamed!";
		else
			cout << "Error renaming file!";
	}

}

// Function which will delete one record, range of records or whole file.
void delAllFiles()
{
	ofstream outfileD("detainees.txt", ios::trunc);
	ofstream outfileO("officers.txt", ios::trunc);
	ofstream outfileDep("departments.txt", ios::trunc);
	outfileD.close();
	outfileO.close();
	outfileDep.close();
	cout << endl;
	cerr << " FILE'S CONTENT SUCESSFULLY DELETED  ";
}
