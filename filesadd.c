#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *inputFile, *outputFile;
    int num1, num2, sum;

    // Open the input file in read mode
    inputFile = fopen("input.txt", "r");
    if (inputFile == NULL) {
        perror("Error opening input file");
        return 1;
    }

    // Read two integers from the file
    if (fscanf(inputFile, "%d %d", &num1, &num2) != 2) {
        perror("Error reading integers from input file");
        fclose(inputFile);
        return 1;
    }

    // Close the input file after reading
    fclose(inputFile);

    // Perform addition
    sum = num1 + num2;

    // Open the output file in write mode
    outputFile = fopen("output.txt", "w");
    if (outputFile == NULL) {
        perror("Error opening output file");
        return 1;
    }

    // Write the result to the output file
    fprintf(outputFile, "The sum is: %d\n", sum);

    // Close the output file after writing
    fclose(outputFile);

    printf("The sum has been written to output.txt\n");

    return 0;
}

