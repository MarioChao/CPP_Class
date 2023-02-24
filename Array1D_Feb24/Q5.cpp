#include <iostream>
#include <fstream>
using namespace std;

int main() {
  // Create and open a text file
  ofstream MyFile("Ethan_ilovecoding.txt");

  // Write to the file
  MyFile << "To create a file, use either the ofstream or fstream class, and specify the name of the file. \n" ;
  MyFile << "To write to the file, use the insertion operator (<<). \n"; 
  MyFile << "To read from a file, use either the ifstream or fstream class, and the name of the file. \n ";

  // Close the file
  MyFile.close();
}