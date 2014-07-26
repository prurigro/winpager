/*
 * xwincheckid - a simple tool to check and verify the current window id
 *
 * by Kevin MacMartin <prurigro@gmail.com>
 * released under the MIT license
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <X11/Xlib.h>

int main(int argc, char *argv[]){
    int revert;
    Window focus;
    Display *display;

    display = XOpenDisplay(NULL);
    XGetInputFocus(display, &focus, &revert);
    if (argc == 1){
        printf("%d\n",focus);
    }
    else if ((Window)atoi(argv[1]) == focus){
        printf("1\n");
    }
    else{
        printf("0\n");
    }
}
