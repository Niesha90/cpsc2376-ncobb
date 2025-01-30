#include <iostream>
#include <fstream>
#include <string>


void readWriteConflict(const std::string& filename) {
    std::ofstream outFile(filename);
    std::ifstream inFile(filename);

    if (outFile.is_open() && inFile.is_open()) {
        outFile << "Writing to file." << std::endl;
        std::string line;
        while (getline(inFile, line)) {
            std::cout << line << std::endl;
        }
    }
    else {
        std::cerr << "Failed to open file." << std::endl;
    }
}

int main() {
    readWriteConflict("example.txt");
    return 0;
}