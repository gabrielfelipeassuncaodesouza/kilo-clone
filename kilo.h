#ifndef _KILO_H_
#define _KILO_H_

void editorSetStatusMessage(const char *fmt, ...);
char* editorPrompt(char *prompt, void (*callback)(char*, int));
void editorMoveCursor(int key);
void editorInsertChar(int c);

#endif
