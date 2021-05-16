#include <stdio.h>
#include <stdlib.h>

void title()
{
    printf("  ");
    for(int i=0; i<50; ++i)
    {
        printf("%c",196);
    }
    printf("ASCII____TABLE");
    for(int i=0; i<50; ++i)
    {
        printf("%c",196);
    }
    printf("\n\n");
}

char* getname(char c)
{
    if(c>=33&&c<=126)
    {
        char* str=(char*)malloc(2);
        str[0]=c;
        str[1]=0;
        return str;
    }
    switch (c)
    {
    case 0:
        return "NULL";
    case 1:
        return "SOH";
    case 2:
        return "STX";
    case 3:
        return "ETX";
    case 4:
        return "EOT";
    case 5:
        return "ENQ";
    case 6:
        return "ACK";
    case 7:
        return "BEL";
    case 8:
        return "BS";
    case 9:
        return "TAB";
    case 10:
        return "LF";
    case 11:
        return "VT";
    case 12:
        return "FF";
    case 13:
        return "CR";
    case 14:
        return "SO";
    case 15:
        return "SI";
    case 16:
        return "DLE";
    case 17:
        return "DC1";
    case 18:
        return "DC2";
    case 19:
        return "DC3";
    case 20:
        return "DC4";
    case 21:
        return "NAK";
    case 22:
        return "SYN";
    case 23:
        return "ETB";
    case 24:
        return "CAN";
    case 25:
        return "EM";
    case 26:
        return "SUB";
    case 27:
        return "ESC";
    case 28:
        return "FS";
    case 29:
        return "GS";
    case 30:
        return "RS";
    case 31:
        return "US";
    case 32:
        return "space";
    case 127:
        return "DEL";
    }

    return "<unknown>";
}

int main()
{
    title();

    for(int i=0;i<4;++i){
    printf("%6s %5s %6s %6s | ","dec","hex","oct","char");
    }
    printf("\n");

    for(int i=0; i<=31; ++i)
    {
        char c=(char)i;
        printf("%6d %5X %6o %6s | ",i,i,i,getname(c));
        while(i<96)
        {
            i+=32;
            c=(char)i;
            printf("%6d %5X %6o %6s | ",i,i,i,getname(c));
        }
        printf("\n");
        i-=96;
    }
}
