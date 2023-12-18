#include <iostream>

// Function to calculate the volume of a cube
double calculateCubeVolume(double sideLength) {
    return sideLength * sideLength * sideLength;
}

int main() {
    double sideLength;

    // Get the side length from the user
    std::cout << "Enter the side length of the cube: ";
    std::cin >> sideLength;

    // Calculate and display the volume of the cube
    double cubeVolume = calculateCubeVolume(sideLength);

    std::cout << "Volume of the cube: " << cubeVolume << std::endl;

    return 0;
}
