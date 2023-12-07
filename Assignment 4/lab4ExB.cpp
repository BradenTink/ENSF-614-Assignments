 //  ENSF 614 fall 2023 Lab 4 - Exercise B
#include <iostream>
#include <fstream>
#include <sstream>
#include <stdlib.h>
#include <string>
#include <iomanip>
const int size1 = 6;
using namespace std;
struct City {
    double x, y;
    char name[30];
};

void write_binary_file(City cities[], int size, char* filename);
/* PROMISES: attaches an ofstream object to a binary file named "filename" and
 * writes the content of the array cities into the file.
 */

void print_from_binary(char* filename);
/* PROMISES: uses ifstream library object to open the binary file named
 * "filename", reads the content of the file which are objects of struct City
 * (one record at a time), and displays them on the screen. It also saves the records
 * into a text-file that its name must be the filename argument, but with the extension
 * of .txt
 */


int main() {
    char bin_filename[] = "cities.bin";
    
    City cities[size1] = {{100, 50, "Calgary"},
        {100, 150, "Edmonton"},
        {50, 50, "Vancouver"},
        {200, 50, "Regina"},
        {500, 50, "Toronto"},
        {200, 50, "Montreal"}};
  
    write_binary_file(cities, size1, bin_filename);
    cout << "\nThe content of the binary file is:" << endl;
    print_from_binary(bin_filename);
    return 0;
}

void write_binary_file(City cities[], int size, char* filename){
    ofstream stream(filename, ios::out | ios::binary);
    if(stream.fail()){
        cerr << "failed to open file: " << filename << endl;
        exit(1);
    }
    
    for(int i =0; i < size1; i++)
        stream.write((char*)&cities[i], sizeof(City));
    stream.close();
}

void print_from_binary(char* filename) {

	std::ifstream is(filename, std::ios::binary);
    if (!is) {
        std::cerr << "Failed to open the file." << std::endl;
    }

    City cities[size1]; // Assuming there are 5 cities in the file
	
    for (int i = 0; i < size1; i++) {
		
        is.read(reinterpret_cast<char*>(&cities[i]), sizeof(City));

        if (!is) {
            std::cerr << "Failed to read the file." << std::endl;
           // return 1;
        }
    }

    is.close();
	
    // Print the parsed data
    for (int i = 0; i < size1; i++) {
        std::cout << "Name: " << cities[i].name << ", x coordinate: " << std::fixed << std::setprecision(2) << cities[i].x << ", y coordinate: " << std::fixed << std::setprecision(2) << cities[i].y << std::endl;
    }
	std::ofstream os("filename_argument.txt");
    if (!os) {
        std::cerr << "Failed to open the file for writing." << std::endl;
        return;
    }

    for (int i = 0; i < size1; i++) {
        os << "Name: " << cities[i].name << ", x coordinate: " << std::fixed << std::setprecision(2) << cities[i].x << ", y coordinate: " << std::fixed << std::setprecision(2) << cities[i].y << std::endl;
    }

    os.close();
}




