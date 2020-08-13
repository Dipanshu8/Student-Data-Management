//Include all the necessary libraries. 
#include<stdio.h> 
#include<iostream> 
#include<fstream> 
#include<string.h> 

using namespace std; 

int main(){ 
	//Considering the max length of data entered (name) to be 15. 
	char data[15]; 
	int n = 0, option = 0, count_n = 0; 
	//This is the initial mark alloted to a subject. 
	string empty = "00";	 
	string proctor = ""; 
	//Name of the file in which DB is stored. 
	ifstream f("Example.txt");	 
	string line; 
	
	//The following for loop counts the total number of lines in the file. 
	for (int i = 0; std::getline(f, line); ++i){	 
		count_n++;} 
	operations o1// Object for operations
	
	while(option != 6){ 
//This prints out all the available options in the DB 
	cout << "\nAvailable operations: \n1. Add New Students\n2."
		<< "Student Login\n3. Faculty Login\n4. Proctor Login\n5. Admin View\n"
		<< "6. Exit\nEnter option: "; 
	cin >> option; 

	if(option == 1){ 
		o1.add_student()
	}
	
	else if (option == 2){ 
		o1.student_login()
		
	} 
	
	 
	else if (option == 3){
		o1.faculty_login()
		
	} 

	//This loop displays all the details of students under the same proctor ID. 

	else if (option == 4){ 
		o1.proctor_login
		
		} 
	
	//This loop acts as an admin view to see all the data in the file. 

	else if(option == 5){ 
		o1.admin_view()
			} 
}} }
