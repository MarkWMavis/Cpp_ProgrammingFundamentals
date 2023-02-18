#include "File_Stream.hpp"
#include <cstdio>

constexpr int maxstring = 1024;
constexpr int repeat = 5;

int main() {
	const char* fn = "testfile.txt";
	const char* str = "this is a literal c-string";
	
	puts("Writing file");
	FILE* fw = fopen(fn, "w"); //Opens the fn file in write mode
	for (int i = 0; i < repeat; i++) {
		fputs(str, fw);		//Writes all the characters stored in str to the output file stream
	}

	fclose(fw);
	puts("done");


	FileOutputStreamDemo();
	FileInputStreamDemo();
	IORedirectionDemo();
	FilePositionPointers();

}