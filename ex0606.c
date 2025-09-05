//A program to copy a file to another
#include<stdio.h>
#include<stdlib.h>
int main()
{
   FILE *sourcefile,*targetfile;
   char sourceName[100],targetName[100];
   char ch;

   //taking inputs of file names
   printf("Enter the source file name: \n");
   scanf("%s",sourceName);
   printf("Enter target file name: \n");
   scanf("%s",targetName);

   //opening source file in read mode
   sourcefile = fopen(sourceName,"r");
   if(sourcefile == NULL)
   {
    printf("ERROR: CANNOT OPEN SOURCE FILE %s\n",sourceName);
    exit(1);
   }
   while((ch=fgetc(sourcefile))!= EOF)
   {
    fputc(ch,targetfile);
   }

   printf("FILE COPIED SUCCESSFULLY FROM %s TO %s\n",sourceName,targetName);
   //closing files
   fclose(sourcefile);
   fclose(targetfile);
   return 0;
}