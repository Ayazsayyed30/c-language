#include <stdio.h>
 
int main()
 {
  FILE * file;
 
 
  file = fopen("file1.txt", "w");
 
 
  if (file == NULL) {
    printf("Error in creating file");
    return 1;
  }
  printf("File created.");
 
  return 0;
}
 
#include <stdio.h>
 
int main() {
 
   FILE *fp;
   char * string = "C Programming tutorial from TutorialsPoint";
   int i;
   char ch;
 
   fp = fopen("file1.txt", "w");
 
   for (i = 0; i < strlen(string); i++) {
      ch = string[i]; 
      if (ch == EOF)
         break;
      fputc(ch, fp);  
   }
   printf ("\n");
   fclose(fp);
   
   return 0;
}
 
#include <stdio.h>
 
int main(){
 
   FILE *fp ;
   char ch ;
   fp = fopen ("file1.txt", "r");
 
   while(1) {
      ch = fgetc (fp);  //getch()
      if (ch == EOF)
         break;
      printf ("%c", ch);
   }
   printf ("\n");
   fclose (fp);
}