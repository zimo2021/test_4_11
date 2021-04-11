#pragma once
#include<stdio.h>
#include<string.h>
#include <stdlib.h>
#define max_name 10
#define max_sex 5
#define max_tele 12
#define max_addr 20
//#define max_peo 100
#define initpeo 3
struct lis
{
	char name[max_name];
	int age;
	char sex[max_sex];
	char tele[max_tele];
	char addr[max_addr];
};
struct contact
{
	struct lis *date;
	int size;
	int num;
};
void init_contact(struct contact* ps);
void addcontact(struct contact* ps);
void showcontact(struct contact* ps);
void delcontact(struct contact* ps);
void searchcontact(struct contact* ps);
void modifycontact(struct contact* ps);
void sortcontact(struct contact* ps);
void clearcontact(struct contact* ps);
int scancontact(int num, int size);
void ifadd(struct contact* ps ,int ret);
void destorycontact(struct contact* ps);