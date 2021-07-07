#include<stdio.h>
int main()
{
	int USER_OPTION=0;
    while(USER_OPTION!=7)
	{
	printf("\n1.Display all teams in IPL\n2.Members of all teams respectively with their coaching staff\n3.Tournament schedule with venue.\n4.Stats of this season(2019)\n5.Stats of all the players\n6.Add  teams\n7.Add players.\n8.Exit\n");
	printf("Please Choose the following Option : ");
    scanf("%d",&USER_OPTION);

	if(USER_OPTION>8||USER_OPTION<1)
	printf("\nYou have intered Invalid Input Please Try Again\n ");

	switch(USER_OPTION)
	{
			case 1:
				{
                    FILE *fptr;
                    char c;
                     // Open file
                      fptr = fopen("Teams.txt", "r");
                     // Read contents from file
                    c = fgetc(fptr);
                    while (c != EOF)
                    {
                       printf ("%c", c);
                       c = fgetc(fptr);
                    }
                    fclose(fptr);
                    break;
                }
            case 2:
            {    
                 printf("Oooops!!!!! This module is in Under Process.Please try after sometime\n\n");
                 break;

            }
            case 3:
            {
                 FILE *fptr;
                    char c;
                     // Open file
                      fptr = fopen("schedule.txt", "r");
                     // Read contents from file
                    c = fgetc(fptr);
                    while (c != EOF)
                    {
                       printf ("%c", c);
                       c = fgetc(fptr);
                    }
                    fclose(fptr);
                    break;

            } 
         	case 4:
				{
                    FILE *fptr;
                    char c;
                     // Open file
                      fptr = fopen("stats.txt", "r");
                     // Read contents from file
                    c = fgetc(fptr);
                    while (c != EOF)
                    {
                       printf ("%c", c);
                       c = fgetc(fptr);
                    }
                    fclose(fptr);
                    break;
                }      
            case 5:
				{
                    printf("Oooops!!!!! This module is in Under Process.Please try after sometime\n\n");
                    break;
                }
            case 6:
				{
                    printf("Oooops!!!!! This module is in Under Process.Please try after sometime\n\n");
                    break;
                }
            case 7:
				{
                    printf("Oooops!!!!! This module is in Under Process.Please try after sometime\n\n");
                    break;
                }
             case 8:
			{
				printf("-----------------------------------------------------------------\n");
				printf("              THANK YOU FOR USE                                  \n");
				printf("-----------------------------------------------------------------\n");
				return 0;
			}
    }
    }

}
