//Include all the necessary libraries. 
#include<stdio.h> 
#include<iostream> 
#include<fstream> 
#include<string.h> 

using namespace std; 
class operations{
	
	auto add_student(){
	cout << "Enter the number of students: "; 
	cin >> n; 
	
	count_n = count_n + n; 
	
	for (int i = 0;i < n;i++){ 
		ofstream outfile; 
			outfile.open("Example.txt",ios::app); 
		//The entire data of a single student is stored line-by-line. 
		cout << "Enter your registration number: "; 
		cin >> data; 
		outfile << data << "\t"; 
		
		cout << "Enter your name: "; 
		cin >> data; 
		int len = strlen(data); 
		
		while (len < 15){ 
			data[len] = ' '; 
			len = len + 1; 
		} 
		outfile << data << "\t"; 
		//Inserting empty data initially into the file 
		outfile << empty << "\t"; 
		outfile << empty << "\t";	 
		
		cout << "Enter your proctor ID: "; 
		cin >> proctor; 
		
		outfile << proctor << endl; 
	}}
	auto add_marks(){
		for(int i = 0;i < count_n;i++){ 
				fstream file("Example.txt"); 

								//The seek in file has been done according to the length 
			//of the data being inserted. It needs to adjusted accordingly 
			//for diffferent lengths of data. 

			if(strcmp(subcode,code1.c_str()) == 0){ 
						file.seekp(26+37*i,std::ios_base::beg); 
					cout << "Enter the mark of student#" << (i+1) << " : "; 
				cin >> mark; 
				file.write(mark.c_str(),2);} 
			
			if(strcmp(subcode,code2.c_str()) == 0){ 
				file.seekp(29+37*i,std::ios_base::beg); 
				cout << "Enter the mark of student#" << (i+1) << " : "; 
				cin >> mark; 
				file.write(mark.c_str(),2);} 
			} return 0;
			
		}
	auto view_details(){
		
		else if(option == 2){ 
		infile.open("Example.txt",ios::in); 
		if (strcmp(subcode,code1.c_str()) == 0){ 
			cout << "Registration number - Marks\n" << endl; 
			while(infile >> data){ 
			cout << data; 
			infile >> data; 
				infile >> data; 
			cout << " - " << data << endl; 
			infile >> data; 
			infile >> data; 
			check = 1; 
			} 
		} 
		
		
	auto student_login(){
	char regno[9]; 
		cout << "Enter your registration number: "; 
		cin >> regno; 
		ifstream infile; 
		int check = 0; 
		infile.open("Example.txt",ios::in); 
		
		//This loop prints out the data according to the registration number specified. 
		while (infile >> data){ 
		if (strcmp(data,regno) == 0){ 
			cout << "\nRegistration Number: " << data << endl; 
			infile >> data; 
			cout << "Name: " << data << endl; 
			
			infile >> data; 
				cout << "CSE1001 mark: " << data << endl; 
			
			infile>>data; 
			cout<<"CSE1002 mark: "<<data<<endl; 
			
			infile>>data; 
			cout<<"Proctor ID: "<<data<<endl; 
			
			infile.close(); 
			check = 1;} 
		} 
		
		if (check == 0){ 
			cout<<"No such registration number found!"<<endl;} 
		
	} 
	
	auto faculty_login(){
		
		char subcode[7]; 
		cout << "Enter your subject code: "; 
		cin >> subcode; 
		string code1 = "CSE1001", code2 = "CSE1002",mark = ""; 
		ifstream infile; 
		int check = 0; 
		
		cout << "\nAvailable operations: \n1. Add data about marks\n"
				<< "2. View data\nEnter option: "; 
		cin >> option;
		if (option == 1){
			add_marks()
		}
		else if(option == 2){
			view_details()
		}
	}
	
	auto proctor_login(){
				char procid[7]; 
		cout << "Enter your proctor ID: "; 
		cin >> procid; 
			int check = 1; 
		char temp1[100], temp2[100], temp3[100]; 
		char temp4[100], id[100]; 
		ifstream infile; 
		infile.open("Example.txt",ios::in); 
		
		while (infile >> temp1){ 
			infile >> temp2;			 
		infile >> temp3; 
		infile >> temp4; 
		infile >> id; 
		
		if (strcmp(id,procid) == 0){			 
			cout << "\nRegistration Number: " << temp1 << endl; 
			cout << "Name: " << temp2 << endl; 
			cout << "CSE1001 Mark: " << temp3 << endl; 
			cout << "CSE1002 Mark: " << temp4 << endl; 
			check = 1; 
		}  
		
		if (check == 0){ 
			cout << "No such proctor ID found!" << endl; 
		}} 
	auto admin_view(){
		char password[25]; 
		cout << "Enter the admin password: "; 
		cin >> password; 

		//This variable value can be changed according to your requirement 
		//of the administrator password. 

		string admin_pass = "admin"; 
		
		if (strcmp(password,admin_pass.c_str()) == 0){ 
			cout << "Reg No.	 \tName\tCSE1001\tCSE1002\tProctor ID" << endl; 
			ifstream infile; 
			infile.open("Example.txt",ios::in); 
			char data[20]; 
			
			while(infile >> data){ 
				cout << data << "\t"; 
				infile >> data; 
				cout << data << "\t"; 
				infile >> data; 
				cout << data << "\t"; 
				infile >> data; 
				cout << data << "\t"; 
				infile >> data; 
				cout << data << endl; 
			} 
		} 
	} 
		
		}		


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
