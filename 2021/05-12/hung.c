#include <stdio.h>
#include <stdlib.h>

char* getname(char c)
{
  if (33 <= c && c <= 126) {
    char* str = (char*) malloc(2);
    str[0] = c;
    str[1] = 0;
    return str;
  }

  switch (c) {
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
    return "SP";
  case 127:
    return "DEL";
  }
  return "<unknown>";
}

int main()
{
  printf("%4s %4s %4s %4s|", "Dec", "Hex", "Oct", "Char");
  printf("%4s %4s %4s %4s|", "Dec", "Hex", "Oct", "Char");
  printf("%4s %4s %4s %4s|", "Dec", "Hex", "Oct", "Char");
  printf("%4s %4s %4s %4s|\n", "Dec", "Hex", "Oct", "Char");
  for (int i = 0; i <= 31; i++) {
    char c = (char)i;
    printf("%4d %4x %4o %4s|", i, i, i, getname(c));
    i += 32;
    c = (char)i;
    printf("%4d %4x %4o %4s|", i, i, i, getname(c));
    i += 32;
    c = (char)i;
    printf("%4d %4x %4o %4s|", i, i, i, getname(c));
    i += 32;
    c = (char)i;
    printf("%4d %4x %4o %4s|\n", i, i, i, getname(c));
    i -= 96;
  }
}
