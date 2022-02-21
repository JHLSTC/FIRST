#ifndef __GAME_H__
#define __GAME_H__

#include<stdlib.h>
#include<time.h>
#define row 3
#define swh 3

void qingkong(char i[row][swh],int ROW,int SWH);
void display(char i[row][swh],int ROW,int SWH);
void PLAYER(char i[row][swh],int ROW ,int SWH);
void COMPUTER(char i[row][swh],int ROW,int SWH);
char WIN(char i[row][swh],int ROW,int SWH);

#endif // GAME_H_INCLUDED
