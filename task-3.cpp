#include <iostream>
#include <fstream>
#include <string>

int main()
{
    char ch;
    std::ifstream inFile;
    std::string fileName;
    int count = 0;

    std::cout << "Please enter the file name: ";
    std::getline(std::cin, fileName);

    // Opens the file specified by the user in read mode
    inFile.open(fileName.c_str());

    if (!inFile.is_open()) // Check if the file is open
    {
        std::cout << "Error opening the file. Make sure the file exists and is accessible.\n";
        return 1;
    }

    // Gets each character till the end of the file is reached
    while ((ch = inFile.get()) != EOF)
    {
        // Counts each word (assuming words are separated by spaces)
        if (ch == ' ' || ch == '\n')
            count++;
    }

    // Add one to count for the last word (as there might not be a space after the last word)
    count++;

    std::cout << "Number of words present in the given file: " << count << std::endl;
    inFile.close();

    return 0;
}
