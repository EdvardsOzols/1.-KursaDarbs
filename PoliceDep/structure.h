#ifndef STRUCTURE_H
#define STRUCTURE_H
#include <iostream>
using namespace std;

struct Detain
{	
	char code[10];
	char name[20];
	char surname[20];
	char detaineeReason[100];
	char captured[11];
	char released[11];
	char officer_code[20];

}detainee;

struct Offic
{
	char officer_code[20];
	char officer_name[20];
	char officer_surname[20];
	char officer_position[20];
	char dep_number[20];

}officer;

struct Depart
{
	char dep_number[20];
	char dep_name[20];
	char dep_description[40];
	char dep_leader[20];

}department;

#endif