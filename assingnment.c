/* 04  */
#include <stdio.h>
#include <string.h>

#define MAX_FOOD 50 //최대 요리개수

struct recipe
{
   char name[20];
   char ingredient[100];

};

int main(void)
{
   struct recipe rcp[MAX_FOOD];

   int i, j;
   char foodname[15];
   int choice;
   char buffer[100];
   char *token;
   //int line = MAX_FOOD * 2;


   FILE *f1, *f2;
   f1 = fopen("foodrecipe.txt", "r");
   f2 = fopen("c:\\project\\result.txt", "a+");

   if (f1 == NULL)  //파일 오류 예외처리
   {
      printf("파일 열기 오류\n");
      return 0;
   }


   for (i = 0; i < MAX_FOOD; i++)
   {

      if (i == 0 || i % 2 == 0) {
         fgets(buffer, sizeof(buffer), f1);
         strcpy(rcp[i].name, buffer);
         //fprintf(f2, "음식명: ");
         //fputs(buffer, f2);
      }
      else if (i == 1 || i % 2 != 0)
      {
         j = i - 1;
         fgets(buffer, sizeof(buffer), f1);
         strcpy(rcp[j].ingredient, buffer);
         //fprintf(f2, "재료 및 양: ");
         //fputs(buffer, f2);
      }
      
   }
      
   printf("음식을 입력하세요 : ");                                                                                                
   scanf("%s", &foodname);


   for (i = 0; i < MAX_FOOD; i++)
   {
      j = i * 2;
      if (strcmp(foodname, rcp[j].name) == 0)
      {
         printf("음식명 : %s\n \n재료 및 양:%s\n", rcp[j].name,  rcp[j].ingredient);
      }
   }
   
   

   /*
   fclose(f1);

   printf("파일에 추가하시겠습니까? 1.네 2.아니요");
   scanf("%d",&choice);

   if (choice == 1)
   {
      f2 = fopen("c:\\project\\result.txt", "a+");

      for (i = 0; i < MAX_FOOD; i++)
      {
         fputs(buffer, f2);

         //fprintf(f2, "음식명 : %-20s\n재료 및 양: -10%s\n -10%s\n -10%s\n -10%s \n", &rcp[i].name, &rcp[i].ingre1, &rcp[i].ingre2, &rcp[i].ingre3, &rcp[i].ingre4);
      }
   }

   */

   return 0;
}
