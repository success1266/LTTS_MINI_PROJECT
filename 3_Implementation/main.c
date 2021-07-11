#include<stdio.h>
int main()
{
    int USER_OPTION=0;
    while(USER_OPTION!=8)
    {
        printf("\n1.Display all teams in IPL\n2.Members of all teams respectively with their coaching staff\n3.Tournament schedule with venue.\n4.Stats of this season(2019)\n5.Stats of all the players\n6.Know about Umpires in IPL 2019.\n7.Owners of all the IPL teams\n8.exit\n");
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
            printf("\n\nenter the the team of which you want see the members of :");
            printf("\n 1.CSK\n 2.DC\n 3.KX1P\n 4.KKR\n 5.MI\n 6.RR\n 7.RCB\n 8.SH\n");
            int team_name=0;
            scanf("%d",&team_name);
            switch(team_name)
            {
            case 1:
            {
                FILE *fptr;
                char c;
                // Open file
                fptr = fopen("csk.txt", "r");
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
                FILE *fptr;
                char c;
                // Open file
                fptr = fopen("dc.txt", "r");
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
            case 3:
            {
                FILE *fptr;
                char c;
                // Open file
                fptr = fopen("kxip.txt", "r");
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
                fptr = fopen("mi.txt", "r");
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
                FILE *fptr;
                char c;
                // Open file
                fptr = fopen("rr.txt", "r");
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
            case 6:
            {
                FILE *fptr;
                char c;
                // Open file
                fptr = fopen("rcb.txt", "r");
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
            case 7:
            {
                FILE *fptr;
                char c;
                // Open file
                fptr = fopen("sh.txt", "r");
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
            case 8:
            {

                break;

            }

            }
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

            printf("\nstats of players in categories as follows select as you want:");
            printf("\n1.Most runs.");

            printf("\n2.Most wickets");
            printf("\n3.Players with Purple cap");
            printf("\n4.Players with orange cap\n");
            int stats_player=0;
            scanf("%d",&stats_player);

            switch (stats_player)
            {

            case 1:
            {

                FILE *fptr;
                char c;
                // Open file
                fptr = fopen("mostruns.txt", "r");
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

                FILE *fptr;
                char c;
                // Open file
                fptr = fopen("mostwickets.txt", "r");
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
            case 3:
            {

                FILE *fptr;
                char c;
                // Open file
                fptr = fopen("purple.txt", "r");
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
                fptr = fopen("orange.txt", "r");
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


            }
            break;
        }
        case 6:
        {
           
                FILE *fptr;
                char c;
                // Open file
                fptr = fopen("umpires.txt", "r");
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
        case 7:
        {
            
                FILE *fptr;
                char c;
                // Open file
                fptr = fopen("owners.txt", "r");
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
