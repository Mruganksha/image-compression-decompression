#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <string.h>
#include<math.h>

#include "ImageCompression.h"

int main(int argc, char **argv){
    // Step 1: Ensure the correct number of command-line arguments
    if (argc < 2)
    {
        printf("Please enter the name of the image file.\n");
        return 1;  // Exit if no file name is provided
    }

    // Step 2: Store the file name from command-line arguments
    char *filename = argv[1];
    printf("Name of the file is %s\n", filename);

    // Step 3: Check if the file has a ".bmp" extension
    int length = strlen(filename);
    if (length < 4 || strcmp(filename + length - 4, ".bmp") != 0)
    {
        printf("\nThe file is not a valid BMP image file. Please use a '.bmp' file.\n");
        return 1;  // Exit if the file extension is not ".bmp"
    }

    // Step 4: If the file is a BMP image, proceed with image compression
    printf("\nThe file is a valid BMP image.\n");
    imageCompression(filename);

    return 0;  // Successful completion
}
