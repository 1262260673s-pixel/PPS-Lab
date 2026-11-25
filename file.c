
#include <stdio.h>

int main()
{
    FILE *source, *destination;
    char sourceFile[100], destFile[100];
    int ch;

    printf("Enter source file name: ");
    scanf("%99s", sourceFile);

    printf("Enter destination file name: ");
    scanf("%99s", destFile);

    // Open source file in read mode
    source = fopen(sourceFile, "rb");

    if (source == NULL)
    {
        printf("Unable to open source file.");
        return 1;
    }

    // Open destination file in write mode
    destination = fopen(destFile, "wb");

    if (destination == NULL)
    {
        printf("Unable to create destination file.");
        fclose(source);
        return 1;
    }

    // Copy contents from source to destination
    while ((ch = fgetc(source)) != EOF)
    {
        fputc(ch, destination);
    }

    printf("File copied successfully!");

    // Close both files
    fclose(source);
    fclose(destination);

    return 0;
}
