#include <iostream>
#include <fstream>


int main(int argc, char* argv[]) {
    std::cout << "CPU Simulator" << std::endl << std::endl;

    if (argc == 1) {
        // Simulation w/o file begins here.
    } else if (argc == 2) {
        std::ifstream input_file;

        input_file.open(argv[1]);
        if (!input_file.is_open()) {
            std::cout << "Failed opening " << argv[1] << "." << std::endl << std::endl;
            return EXIT_FAILURE;
        } else {
            std::cout << "Successfully opened " << argv[1] << "." << std::endl << std::endl;
        }

        // Simulation w/ file begins here.

        input_file.close();
    } else {
        std::cout << "Invalid Number of Arguements" << std::endl;
        std::cout << "0 Arguement: Run CPU Simulator without opening a file." << std::endl;
        std::cout << "1 Arguement: Run CPU simulator with opening a file." << std::endl << std::endl;

        return EXIT_FAILURE;
    }

    return EXIT_SUCCESS;
}