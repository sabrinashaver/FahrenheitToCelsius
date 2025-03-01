# FahrenheitToCelsius
This program reads a list of cities and their temperatures (in Fahrenheit) from an input file (FahrenheitTemperature.txt), and converts those temperatures to Celsius. The conversion results are then written to an output file (CelsiusTemperature.txt). The main problem this program solves is automating temperature conversion, easing the process of storing converted temperatures for further use.

This program implements file I/O operations, with appropriate error checking to ensure files are opened correctly. The code is well-structured, readable and reusable. The program also provides clear console feedback to inform the user when the process is complete.

One area for improvement is input validation. It would be beneficial to check whether Fahrenheit is a valid integer before proceeding with conversion of the temperature. Another feature that could be added to this code is checking whether the input file is empty, and displaying an error message if so. Additionally, a check could be added for temperatures below absolute zero (-459.67 degrees Fahrenheit).

My challenge with writing this code was ensuring that the program properly handles missing or corrupted input files. The solution involved using ifstream's fail-checking capabilities (if !inputFile), and providing informative error messages for the user. Learning about setprecision() from <iomanip> helped with correct formatting of the Celsius output.

Some tools & resources for support in the implementation of this code include C++ reference documentation, Stack Overflow & other coding forums, and IDE debuggers (in this case, VSCode).

Skills from this project that are transferable to other projects include:
- File I/O operations
- Data processing & conversion
- Error handling
- Code organization

I made this program maintainable, readable, and adaptable through the use of clear function names, i.e. "convertToCelsius()", consistent formatting & comments, and separation of concerns. For example, the file handling, conversion logic, and output writing are separate, making future modifications easier to implement.
