#include "File_Stream.hpp"
#include <iostream>	//File processing library
#include <fstream>	//File processing Library
#include <sstream>
#include <string>

/*	Library that includes the following data types...
*	- ofstream
*	- ifstream
*	- fstream
*/

void FileOutputStreamDemo() {
	char data[100];

	std::ofstream outfile;
	outfile.open("FilesStreamFile.txt");

	std::cout << "Writing to the file" << std::endl;
	std::cout << "Enter your name: " << std::endl;

	std::cin.getline(data, 100);

	outfile << data << std::endl;

	std::cout << "Enter your age: " << std::endl;
	std::cin >> data;
	std::cin.ignore();

	outfile << data << std::endl;

	outfile.close();
}

void FileInputStreamDemo() {
	std::ifstream yearReport_input("PayoutSummaryReport_2021-01-01_2021-12-31.csv"); //Defining object and opening file in same statement
	//std::ofstream yearReport_output;	//Opening an

	if (yearReport_input.is_open()) {

		std::string line;
		while (std::getline(yearReport_input, line)) {
			std::stringstream ss(line);

			std::string reservationID;
			std::getline(ss, reservationID, ',');

			std::string firstName;
			std::getline(ss, firstName, ',');

			std::string lastName;
			std::getline(ss, lastName, ',');

			std::string checkIn;
			std::getline(ss, checkIn, ',');

			std::string checkOut;
			std::getline(ss, checkOut, ',');

			std::string tempstring;
			std::getline(ss, tempstring, ',');
			int nights = atoi(tempstring.c_str());

			std::getline(ss, tempstring, ',');
			double grossBooking = std::stof(tempstring.c_str());

			std::getline(ss, tempstring, ',');
			double deductions = std::stof(tempstring.c_str());

			std::getline(ss, tempstring, ',');
			double payout = std::stod(tempstring.c_str());

			line = "";
		}

	}
	else {
		std::cout << "Error" << std::endl;
	}
	yearReport_input.close();	//Closing the stream to the disk file
}

void IORedirectionDemo() {
	std::fstream file;
	file.open("FilesAndStreams.txt", std::ios::out);

	//backups of the original buffer locations
	std::streambuf* stream_buffer_cout = std::cout.rdbuf();
	std::streambuf* stream_buffer_cint = std::cin.rdbuf();
	std::streambuf* stream_buffer_file = file.rdbuf();
	std::cout.rdbuf(stream_buffer_file);

	std::cout << "Testing the switch" << std::endl;
}

void FilePositionPointers() {
	/* Both istream and ostream provide member functions for repositions the file-position pointer.
	*	istream - seekg (seek get)
	*	ostream - seekp (seek put)
	*/

	std::ifstream infile("PayoutSummaryReport_2021-01-01_2021-12-31.csv");
	if (infile.is_open()) {
		infile.seekg(10);				//Position to the nth byte of fileobject (assumes ios::beg)
		infile.seekg(5, std::ios::cur);	//Position 5 bytes forward in fileObject
		infile.seekg(25, std::ios::end);//Position 25 bytes back from end to fileObject
		infile.seekg(0, std::ios::end); //Position at end of fileObject
	}
}