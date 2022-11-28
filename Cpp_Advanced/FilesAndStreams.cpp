#include "FilesAndStreams.h"

void RunFilesAndStreams() {
	char data[100];
	
	std::ofstream outfile;
	outfile.open("FilesAndStreams.txt");

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