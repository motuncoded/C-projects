
/*
Create a new file in write mode and add content
C is a fun programming language.
And, I love using C language
Close the file
Again open the file in read mode and read the content of the file

*/

#include <stdio.h>

int main()
{

    FILE *fptr;

    fptr = fopen("nFile.c", "w");

    fputs("C is a fun programming language.\n", fptr);
    fputs("And, I love using C language", fptr);

    fclose(fptr);

    fptr = fopen("nFile.c", "w");

    char content[1000];

    if (fptr != NULL)
    {

        while (fgets(content, 1000, fptr))
        {
            printf("%s", content);
        }
    }
    else
    {
        printf("File opening is unsuccessful");
    }

    return 0;
} // to run => gcc Project_18.c -o Project_18 && Project_18