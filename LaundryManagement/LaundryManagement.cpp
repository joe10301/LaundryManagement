// LaundryManagement.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<stdio.h>
#include <conio.h>
#include <stdlib.h>

void openAdmin() {
	printf("\n\n\t\t\t\t\t\t\hello\n\n\n");
	// Open a new file and create an object "Student" containing student details 
	// it should contain student name , reg n.o, age , washes left(initialise it to 44)
	//create an array"studentDb[]" of these obeject and store 10 students 
	// all the above should be done before the user chooses this option i.e should be stored somewhere 
	// after the user chooses this option it should only display all the student details 

}

void openStudent() {
	printf("\n\n\t\t\t\t\t\t\hello\n\n\n");
	// asks u to enter your reg.no  "reg"
	//checks if regno is in the database studentDb if not there print invalid 
	//if there moves on to next screeen
	//enter n.o of clothes in "clothes"
	//generate random token and store it in a queue "machine"
	//calculate the time lets say each student 5 mins and store the time in a var "time"
	//every 5 mins you have to pop a token from the queue and store it in a 2-d array "storage[][]"
	// deduct one from the n.o of washes in "studentDb"  clothes > 25 deduct 2
	//print the token n.o and the time to the student  and the n.o of washes left 
	// once n.o of wash is -ve print "due" = rs 200 per load 

}

void openStaff() {
	printf("\n\n\t\t\t\t\t\t\hello\n\n\n");
	//enter the token n.o( student should remember the token n.o assigned and he will tell you)
	//check if the token is in "storage" 
	// if not there check queue to see if the laundry was given 
	// if not there too print token n.o misplaced
	//if there get row and column n.o and find the laundry
	//once laundry is found check "due" id due=0 give student the laundry 
	// anything other than zero ask for money 
	// once paid  make due=0
	//give laundry
}


int main()
{
	int ch;
	printf("\n\n\n\n\n\t\t\t\t\t\t\tMenu:\n\n");
	printf("\t\t---------------------------------------------------------------------------------------------\n\n");
	while(1) {

		printf("\t\t\t\t\t\t1\tAdmin\n\n");
		printf("\t\t\t\t\t\t2\tStudent\n\n");
		printf("\t\t\t\t\t\t3\tStaff\n\n");
		printf("\t\t\t\t\t\t4\tExit\n\n");
		
		printf("\t\t---------------------------------------------------------------------------------------------\n\n");
		printf("\t\t\t\tEnter your option:\n");
		std::cin >> ch;
		switch (ch) {
		case 1: 
			openAdmin();
			break;
		case 2:
			openStudent();
			break;
		case 3:
			openStaff();
			break;
		case 4:
			exit(0);
		default:
			printf("Please enter Valid Option!!");
		}

	}
   
}

