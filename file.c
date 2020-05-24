#include<stdio.h>
void main()
{
      FILE *fp,*fp2;
      char c,ch,name[50];
      int i,pos;
      fp=fopen("reverse.txt","w");
      printf("input to the revere function\n");
      gets(name);
      fprintf(fp,"%s", name);
      fclose(fp);
      fp=fopen("reverse.txt","r");
      if(fp==NULL)
      {
            printf("File does not exist");
      }
      fseek(fp,0,SEEK_END);
      pos=ftell(fp);
      i=0;
      printf("output is\n");
      while(i<pos)    
       {
            i++;
            fseek(fp,-i,SEEK_END);
            ch=fgetc(fp);
            printf("%c",ch);
      }
      fclose(fp);  
      fp=fopen("reverse.txt","r");
      fp2=fopen("copy.txt","w");
      c = fgetc(fp); 
      while (c != EOF) 
      { 
        fputc(c, fp2); 
        c = fgetc(fp); 
      } 
      printf("\ncontent copied from one file(reverse.txt) to another file(copy.txt)\n");
	  fclose(fp);
      fclose(fp2);
}
