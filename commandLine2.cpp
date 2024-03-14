#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main(int argc, char* argv[]) {
    // Check if filename is provided in the command line arguments
    if (argc < 2) {
        cerr << "Usage: " << argv[0] << " <filename>\n";
        return 1;
    }
    // Open the file for reading
    ifstream file(argv[1]);
    if (!file) {
        cerr << "Error opening file " << argv[1] << "\n";
        return 1;
    }
    // Read and print the contents of the file
    string line;
    while (getline(file, line)) {
        cout << line << endl;
    }
    // Close the file
    file.close();
    return 0;
}