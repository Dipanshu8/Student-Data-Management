#include<stdio.h> 
#include<iostream> 
#include<fstream> 
#include<string.h> 

using namespace std;
Add_stu :: Add_stu()
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
