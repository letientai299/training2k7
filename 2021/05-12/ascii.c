#include <stdio.h>
#include <stdlib.h>

char* getname(char c)
{
  if (33 <= c && c <= 126) {
    char* str = (char*)malloc(2);
    str[0] = c;
    str[1] = 0;
    return str;
  }

  switch (c) {
  case 0:
    return "Null";
  case 1:
    return "Start of Heading";
  case 2:
    return "Start of Text";
  case 3:
    return "End of Text";
  case 4:
    return "End of Transmission";
  case 5:
    return "Enquiry";
  case 6:
    return "Acknowledgement";
  case 7:
    return "Bell";
  case 8:
    return "Backspace";
  case 9:
    return "Horizontal Tab";
  case 10:
    return "Line Feed";
  case 11:
    return "Vertical Tab";
  case 12:
    return "Feed";
  case 13:
    return "Carriage Return";
  case 14:
    return "Shift Out";
  case 15:
    return "Shift In";
  case 16:
    return "Data Link Escape";
  case 17:
    return "Control 1";
  case 18:
    return "Control 2";
  case 19:
    return "Control 3";
  case 20:
    return "Control 4";
  case 21:
    return "Negative Acknowledgement";
  case 22:
    return "Synchronous Idle";
  case 23:
    return "End of Transmission Block";
  case 24:
    return "Cancel";
  case 25:
    return "End of Medium";
  case 26:
    return "Substitute";
  case 27:
    return "Escape";
  case 28:
    return "Separator";
  case 29:
    return "Separator";
  case 30:
    return "Record Separator";
  case 31:
    return "Unit Separator";
  case 32:
    return "Space";
  case 127:
    return "Del";
  }

  return "<unknown>";
}

int main(int argc, char* argv[])
{
  printf("%6s %6s %6s %25s | ", "DEC", "HEX", "OCT", "MEANING");
  printf("%6s %6s %6s %10s\n", "DEC", "HEX", "OCT", "MEANING");

  for (int i = 0; i < 64; i++) {
    char c = (char)i;
    printf("%6d %6X %6o %25s | ", i, i, i, getname(c));

    i += 64;
    c = (char)i;
    printf("%6d %6X %6o %10s\n", i, i, i, getname(c));

    i -= 64;
  }

  return 0;
}
