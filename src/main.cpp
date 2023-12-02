#include <iostream>


int main(int argc, char* argv[]) {
    std::cout << "CPU Simulator" << std::endl << std::endl;

    if (argc == 1) {
        // Without opening a file.
    } else if (argc == 2) {
        // With opening a file.
    } else {
        std::cout << "Invalid Number of Arguements" << std::endl;
        std::cout << "0 Arguement: Run CPU Simulator without opening a file." << std::endl;
        std::cout << "1 Arguement: Run CPU simulator with opening a file." << std::endl << std::endl;

        return EXIT_FAILURE;
    }

    return EXIT_SUCCESS;
}