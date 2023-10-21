#ifndef COLOR
#define COLOR
#include <stdlib.h>
//COLORs
char *rgb(char* s, int r, int g, int b) {
    static char output[276];
    snprintf(output, sizeof(output), "\x1B[38;2;%d;%d;%dm%s\x1B[0m", r, g, b, s);
    return output;
}

char *rgb_bg(char* s, int r, int g, int b) {
    static char output[276];
    snprintf(output, sizeof(output), "\x1B[48;2;%d;%d;%dm%s\x1B[0m", r, g, b, s);
    return output;
}

//Text Formatting
char* bold(char* s){
    static char output[276];
    snprintf(output, sizeof(output), "\x1B[1m%s\x1B[0m", s);
    return output;
}

char* faint(char* s){
    static char output[276];
    snprintf(output, sizeof(output), "\x1B[2m%s\x1B[0m", s);
    return output;
}

char* italic(char* s){
    static char output[276];
    snprintf(output, sizeof(output), "\x1B[3m%s\x1B[0m", s);
    return output;
}

char* underline(char* s){
    static char output[276];
    snprintf(output, sizeof(output), "\x1B[4m%s\x1B[0m", s);
    return output;
}

char* inverse(char* s){
    static char output[276];
    snprintf(output, sizeof(output), "\x1B[7m%s\x1B[0m", s);
    return output;
}

char* strikethrough(char* s){
    static char output[276];
    snprintf(output, sizeof(output), "\x1B[9m%s\x1B[0m", s);
    return output;
}
/* This part of the code requires you to free the output buffer after use, to prevent memory leaks. This is used to handle larger strings. */
//COLORs
char *mrgb(char* s, int r, int g, int b) {
    char *output = (char *)malloc(strlen(s) + 20); // Allocate memory based on the length of the input string
    sprintf(output, "\x1B[38;2;%d;%d;%dm%s\x1B[0m", r, g, b, s);
    return output;
}

char *mrgb_bg(char* s, int r, int g, int b) {
    char *output = (char *)malloc(strlen(s) + 20); // Allocate memory based on the length of the input string
    sprintf(output, "\x1B[48;2;%d;%d;%dm%s\x1B[0m", r, g, b, s);
    return output;
}

//Text Formatting
char* mbold(char* s){
    char *output = (char *)malloc(strlen(s) + 10); // Allocate memory based on the length of the input string
    sprintf(output, "\x1B[1m%s\x1B[0m", s);
    return output;
}

char* mfaint(char* s){
    char *output = (char *)malloc(strlen(s) + 10); // Allocate memory based on the length of the input string
    sprintf(output, "\x1B[2m%s\x1B[0m", s);
    return output;
}

char* mitalic(char* s){
    char *output = (char *)malloc(strlen(s) + 10); // Allocate memory based on the length of the input string
    sprintf(output, "\x1B[3m%s\x1B[0m", s);
    return output;
}

char* munderline(char* s){
    char *output = (char *)malloc(strlen(s) + 10); // Allocate memory based on the length of the input string
    sprintf(output, "\x1B[4m%s\x1B[0m", s);
    return output;
}

char* minverse(char* s){
    char *output = (char *)malloc(strlen(s) + 10); // Allocate memory based on the length of the input string
    sprintf(output, "\x1B[7m%s\x1B[0m", s);
    return output;
}

char* mstrikethrough(char* s){
    char *output = (char *)malloc(strlen(s) + 10); // Allocate memory based on the length of the input string
    sprintf(output, "\x1B[9m%s\x1B[0m", s);
    return output;
} 
#endif
