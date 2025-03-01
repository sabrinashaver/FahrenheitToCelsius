/* Sabrina Shaver
 * 11 February 2025
 * Module Five Assignment
 */

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

// Function to convert Fahrenheit to Celsius
double convertToCelsius(int fahrenheit) {
    return ((fahrenheit - 32) * (5.0 / 9.0));
}

int main() {
    ifstream inputFile("FahrenheitTemperature.txt"); // Open the input file
    ofstream outputFile("CelsiusTemperature.txt"); // Open the output file

    // Check if the file opened successfully
    if (!inputFile) {
        cerr << "Error: Unable to open FahrenheitTemperature.txt" << endl;
        return 1;
    }
    if (!outputFile) {
        cerr << "Error: Unable to open CelsiusTemperature.txt" << endl;
        return 1;
    }

    string city;
    int fahrenheit;

    // Read data from the input file and write to the output file
    while (inputFile >> city >> fahrenheit) {
        double celsius = convertToCelsius(fahrenheit);
        outputFile << city << " " << celsius << endl;
    }

    // Close the files
    inputFile.close();
    outputFile.close();

    cout << "Conversion complete. Data written to CelsiusTemperature.txt" << endl;
    
    return 0;
}
