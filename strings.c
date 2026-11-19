
#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100], str2[100], result[200];
    int choice, len, cmp;

    do
    {
        printf("\n----- STRING OPERATIONS MENU -----\n");
        printf("1. Find Length of String\n");
        printf("2. Copy String\n");
        printf("3. Concatenate Strings\n");
        printf("4. Compare Strings\n");
        printf("5. Reverse String\n");
        printf("6. Convert to Uppercase\n");
        printf("7. Convert to Lowercase\n");
        printf("8. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Enter a string: ");
                scanf(" %[^\n]", str1);

                len = strlen(str1);
                printf("Length of string = %d\n", len);
                break;

            case 2:
                printf("Enter a string: ");
                scanf(" %[^\n]", str1);

                strcpy(result, str1);
                printf("Copied string = %s\n", result);
                break;

            case 3:
                printf("Enter first string: ");
                scanf(" %[^\n]", str1);

                printf("Enter second string: ");
                scanf(" %[^\n]", str2);

                strcpy(result, str1);
                strcat(result, str2);

                printf("Concatenated string = %s\n", result);
                break;

            case 4:
                printf("Enter first string: ");
                scanf(" %[^\n]", str1);

                printf("Enter second string: ");
                scanf(" %[^\n]", str2);

                cmp = strcmp(str1, str2);

                if(cmp == 0)
                    printf("Strings are equal.\n");
                else if(cmp > 0)
                    printf("First string is greater.\n");
                else
                    printf("Second string is greater.\n");
                break;

            case 5:
                printf("Enter a string: ");
                scanf(" %[^\n]", str1);

                len = strlen(str1);

                for(int i = 0; i < len; i++)
                    result[i] = str1[len - i - 1];

                result[len] = '\0';

                printf("Reversed string = %s\n", result);
                break;

            case 6:
                printf("Enter a string: ");
                scanf(" %[^\n]", str1);

                for(int i = 0; str1[i] != '\0'; i++)
                {
                    if(str1[i] >= 'a' && str1[i] <= 'z')
                        str1[i] = str1[i] - 32;
                }

                printf("Uppercase string = %s\n", str1);
                break;

            case 7:
                printf("Enter a string: ");
                scanf(" %[^\n]", str1);

                for(int i = 0; str1[i] != '\0'; i++)
                {
                    if(str1[i] >= 'A' && str1[i] <= 'Z')
                        str1[i] = str1[i] + 32;
                }

                printf("Lowercase string = %s\n", str1);
                break;

            case 8:
                printf("Exiting program...\n");
                break;

            default:
                printf("Invalid choice! Try again.\n");
        }

    } while(choice != 8);

    return 0;
}
