#include"declaration.h"
#include"menu.h"
#include"newscoresheet.h"
#include"final.h"
int main()
{
    int a,key;
    char b,ch;
    FILE *fnew;

    char lastinput;
    while (TRUE)
    {
        initializeconsolehandles();
        menu();
        locate(32,9);
        ch=getch();
        switch(ch)
        {
            case '1':
            fileopen(ch);
            case '2':
            fileopen(ch);
            getch();
            case '3':
            system ("cls");
            exit(0);
        }
    }
}

