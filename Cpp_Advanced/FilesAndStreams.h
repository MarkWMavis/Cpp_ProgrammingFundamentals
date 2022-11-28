#pragma once
#include <iostream> //File processing library
#include <fstream>	//File processing Library

/* OPENING A FILE
* 
* A file must be opened before you can read it or write it. Either ofstream or fstream object
* may be used to open a file for writing. And ifstream object is used to open a file for reading
* pupose only
* 
* ======= Open file for writing =========
*	- ofstream (output file stream)
*	- fstream (Input/Output file stream)
* 
* ======= Open file for reading ========= 
*	- ifstream (in file stream)
*/

// void open(const char* filename, ios_base::openmode mode = ios_base::in);

void RunFilesAndStreams();
