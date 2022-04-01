#pragma once
#include<stdio.h>
#include<string.h>
#include<malloc.h>
#include<errno.h>
#include<stdlib.h>
#define _CRT_SECURE_NO_WARNINGS
#define MAX_NAME 10
#define MAX_SEX 5
#define MAX_TELE 12
#define MAX_ADDR 20
typedef struct people
{
	char name[MAX_NAME];
	char sex[MAX_SEX];
	int age;
	char tele[MAX_TELE];
	char addr[MAX_ADDR];
}PEOPLE;
typedef struct contact
{
	PEOPLE* data =(PEOPLE*)calloc(1, sizeof(PEOPLE));
	int set = 1;

}con;
void InitContact(con* pc);
void add(con*pc);
void print(con*pc);
void dled(con* co);
void  check(con* co);
void change(con* co);
void EXIT(con* co);
void save(con* co);
void load(con* co);