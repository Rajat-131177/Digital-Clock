#include<stdio.h>
#include<windows.h>

void main()
{
    system("color 54");   // 5 for purple BG and 4 for Red text.
    int h=0,m=0,s=0;
    int d=1000;
    printf("Enter time in HH:MM:SS :");
    scanf("%d%d%d",&h,&m,&s);
    // printf("\033[0;32m"); // only for text color (\033for escape) and [0;32m for green color.
    start:
    for(h;h<24;h++)
    {
        for(m;m<60;m++)
        {
            for(s;s<60;s++)
            {
                printf("\n\n\t\t%02d:%02d:%02d ",h,m,s);
                if(h<12)
                    printf("AM");
                else
                    printf("PM");
                printf("\n\n\t\tSunday 7 Nov 2021");
                Sleep(d);
                system("cls");
            }
            s=0;
        }
        m=0;
    }
    h=0;
    goto start;
}
