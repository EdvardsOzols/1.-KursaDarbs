// Main file where everything is connected v                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                   

#include <iostream>
#include <string>
#include <iomanip>

#include "functions.h"


using namespace std;


int main()
{
	cout << endl;
	cout << setw(55) << " WELCOME TO POLICE DATABSE " << endl;	

	enum MainMenuItems		{ view = 1 , add = 2 , edit = 3 , del = 4 , calc = 5 , exit = 6  };
	enum ViewMenuItems		{ view_by_code = 1, view_by_surname = 2, view_by_captureDay = 4, view_by_releaseDay = 5, view_all = 6, back = 7 };
	enum ViewCodeItems		{ view_det_code = 1 , view_offi_code = 2 , view_dep_num = 3, back1_1 = 4 };
	enum ViewSurnameItems	{ view_det_surname = 1, view_offi_surname = 2, back1_2 = 8 };
	enum AddMenuItems		{ add_detainee = 1, add_officer = 2, add_department = 3, back2 = 4};
	enum editRecords		{ edit_det = 1, edit_offi = 2, edit_dep = 3, back3 = 4};
	enum DelMenuItems		{ del_one = 1, del_range = 2, del_whole = 3, back4 = 4};


	int option = 0;
	int option2 = 0;
	int option3 = 0;
	int option4 = 0;

	while (option != exit)
	{
		cout << endl;
		cout << view << ". View added records " << endl;	
		cout << add << ". Add new records " << endl;
		cout << edit << ". Edit records " << endl;
		cout << calc << ". Record counter " << endl;
		cout << del << ". Delete records " << endl;
		cout << exit << ". Exit program " << endl;

		cout << endl << endl;
		cout << endl << " Your choice: ";
		cin >> option;
		/*while (cin.fail())
		{
			cerr << " Wrong input " << endl;
			cin.clear();
			cin.ignore(256, '\n');
		
		}*/
		

		switch (option)
		{
		// View section
			case view:  system("CLS"); 
			
				while (option != back)
				{
					cout << endl << endl;
					cout << view_by_code << ". View by code, number " << endl;
					cout << view_by_surname << ". View by surname " << endl;
					cout << view_by_captureDay << ". View by capture day " << endl;
					cout << view_by_releaseDay << ". View by release day " << endl;
					cout << view_all << ". View all entered records " << endl;
					cout << back << ". Return to main menu " << endl;

					cout << endl << endl;
					cout << " You'r choice: ";
					cin >> option;
					/*while (cin.fail())
					{
						cerr << " Wrong input " << endl;
						cin.clear();
						cin.ignore(256, '\n');
					}*/
				
										
						switch (option)
						{
						case view_by_code: system("CLS");

							while (option != back1_1)
							{
								cout << endl << endl;
								cout << view_det_code << ". View detainee's by code " << endl;
								cout << view_offi_code << ". View officer's by code " << endl;
								cout << view_dep_num << ". View by department's number " << endl;
								cout << back1_1 << ". Return to view menu " << endl;

								cout << endl << endl;
								cout << " You'r choice: ";
								cin >> option;

								switch(option)
								{
								case view_det_code: system("CLS"); viewDetaineeByCode();  
									break;
								case view_offi_code: system("CLS"); viewOfficerByCode();
									break;
								case view_dep_num: system("CLS"); viewDepartmentByNumber();
									break;
								}
							}
							break;

						case view_by_surname: system("CLS");

							while (option != back1_2)
							{
								cout << endl << endl;
								cout << view_det_surname << ". View detainee's by surname " << endl;
								cout << view_offi_surname << ". View officer's by surname" << endl;
								cout << back1_2 << ". Return to view menu " << endl;

								cout << endl << endl;
								cout << " You'r choice: ";
								cin >> option;

								switch (option)
								{
								case view_det_surname: system("CLS"); viewDetaineeBySurname();
									break;
								case view_offi_surname: system("CLS"); viewOfficerBySurname();
									break;

								default: cout << " Theres no such a choice " << endl;
									break;
								}
							}
						case view_all: system("CLS");  viewDetainee(); viewOfficer(); viewDepartment();
							break;	

				
						}
				}
			break;
			
			

		// Add section
			case add: 	system("CLS");  

				while (option != back2)
				{
					cout << endl << endl;
					cout << add_detainee << ". Add detainee " << endl;
					cout << add_officer << ". Add officer " << endl;
					cout << add_department << ". Add department " << endl;
					cout << back2 << ". Return to main menu " << endl;

					cout << endl << endl;
					cout << " You'r choice: ";
					cin >> option;
					/*while (cin.fail())
					{
						cerr << " Wrong input " << endl;
						cin.clear();
						cin.ignore(256, '\n');
					}*/

					switch (option)
					{
					case add_detainee: system("CLS"); addDetainee();
						break;
					case add_officer: system("CLS"); addOfficer();
						break;
					case add_department: system("CLS"); addDepartment();
						break;
					}
				}		
			break;

		// Edit section
			case edit:	system("CLS");

				while (option != back3)
				{
					cout << endl << endl;
					cout << edit_det << ". Edit detainee records " << endl;
					cout << edit_offi << ". Edit officer records " << endl;
					cout << edit_dep << ". Edit department records " << endl;
					cout << back3 << ". Return to main menu " << endl;
					
					cout << endl << endl;
					cout << " You'r choice: ";
					cin >> option;
					
					switch (option)
					{
						case edit_det: system("CLS"); editDetainee();
							break;
						case edit_offi: system("CLS");// editOfficer();
							break;
						case edit_dep: system("CLS");// editDepartment();
							break;
						default: cout << " There's no shuch an option. " << endl;
							break;
					}
				}
				break;
		// Calculation section
			case calc: system("CLS");



				break;

		// Delete section
			case del:	system("CLS");
	
				while (option2 != back4)
				{
					cout << endl << endl;
					cout << del_one << ". Delete one record " << endl;
					cout << del_range << ". Delete range of records " << endl;
					cout << del_whole << ". Delete all file's " << endl;
					cout << back4 << ". Return to main menu " << endl;

					cout << endl << endl;
					cout << " You'r choice: ";
					cin >> option2;
					/*while (cin.fail())
					{
						cerr << " Wrong input " << endl;
						cin.clear();
						cin.ignore(256, '\n');
					}*/

					switch (option2)
					{
						case del_one: system("CLS");  cout << "Haven't careated yet!" << endl;
							break;
						case del_range: system("CLS"); cout << "Haven't created yet!" << endl;
							break;
						case del_whole: system("CLS"); delAllFiles();
							break;
						default: cout << " There's no such an option " << endl;
							break;
					}			
				}			
			break;
		
		//default: cout << " There's no shuch a option "; break;

		}//switch
		
	}//while




	cout << endl << endl;
	return 0;
}

