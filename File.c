#include <stdio.h>
//File handling
int main(){

//To open a file
FILE* fptr;
fptr = fopen("File.c", "r");
if (fptr != NULL){
printf("File Open Successful");
}else{
printf("File Open Unsuccessful");
}


// to read a file

FILE *fptr;

fptr = fopen("File.c", "r");

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

// to close a file

FILE *fptr;

fptr = fopen("File.c", "r");

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
 // to write content

FILE *fptr;

fptr = fopen("newFile.c", "w");

fputs("New message 1\n", fptr);
fputs("New message 2", fptr);

fclose(fptr);

fclose(fptr);

return 0;
}// to run => gcc File.c -o File && File.exe