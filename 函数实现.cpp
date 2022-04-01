#include"声明.h"


void add(con* pc)
{
	int c = pc->set;
	PEOPLE* b =(PEOPLE*)realloc(pc->data, (c +1)*sizeof(PEOPLE));
	if (b != NULL)
		(pc->data) = b;
	else
	{
		perror("错误");
		return;
	}

	printf("%s  %s  %s  %s  %s \n", "名字", "性别", "年龄", "电话", "地址");
	scanf_s("%s", pc->data[pc->set-1].name,10);
	scanf_s("%s",  pc->data[pc->set-1].sex,5);
	scanf_s("%d", &(pc->data[pc->set-1].age));
	scanf_s("%s", pc->data[pc->set-1].tele,12);
	scanf_s("%s", pc->data[pc->set-1].addr,20);
	pc->set++;
	printf("增加成功\n");
}
	void InitContact(con* pc)
{
	pc->set = 1;
}
	void print(con* pc)
	{
		int i = pc->set;
		do
		{
			printf("%s  %s  %s  %s  %s \n", "名字", "性别", "年龄", "电话", "地址\n");
			printf("%s %s %d %s %s\n", pc->data[i-1].name, pc->data[i-1].sex, pc->data[i-1].age, pc->data[i-1].tele, pc->data[i-1].addr);
			i--;
		} while (i);
	}
	void dled (con* pc)
	{
		int find(con*, char[]);
		char NAME[10];
		if (pc->set == 0)
			return;
		scanf_s("%s", NAME,10);
		int i = find(pc, NAME);
		if (i != -1)
		{
			for (int y = 0; y < (pc->set) - i; y++)
			{
				pc->data[i] = pc->data[i + 1];
			}
			printf("删除成功");
			(pc->set)--;
			return;
		}
		else {
			printf("没有此人");
			return;
		}
	}
	int find(con* pc, char name[])
	{
		int i = pc->set;
		while (i+1)
		{
			if (strcmp(pc->data[i].name, name) == 0)
				return i;
			i--;
		}
		return -1;
	}
	void check(con* pc)
	{
		if (pc->set == 0)
			return;
		char NAME[10];
		int i = pc->set;
		scanf_s("%s", NAME, 10);
		while (i+1)
		{
			if (strcmp(pc->data[i].name, NAME) == 0)
			{
				printf("%s  %s  %s  %s  %s \n", "名字", "性别", "年龄", "电话", "地址");
				printf("%s %s %d %s %s\n", pc->data[i-1].name, pc->data[i-1].sex, pc->data[i-1].age, pc->data[i-1].tele, pc->data[i-1].addr);
			}
			else
				printf("不存在");
			i--;
	
		}

	}
	void change(con* pc)
	{
		char NAME[10];
		scanf_s("%s", NAME, 10);
	    int i =find(pc, NAME);
		if (i > -1)
		{
			printf("%s  %s  %s  %s  %s \n", "名字", "性别", "年龄", "电话", "地址");
			scanf_s("%s", pc->data[i].name, 10);
			scanf_s("%s", pc->data[i].sex, 5);
			scanf_s("%d", &(pc->data[i].age));
			scanf_s("%s", pc->data[i].tele, 12);
			scanf_s("%s", pc->data[i].addr, 20);
			printf("修改成功");
		}
		else
			printf("没有此人");
	}
	void EXIT(con* pc)
	{
		free(pc->data );
		pc->data = NULL;
	}
	void save(con* pc)
	{
		FILE * a = fopen("save.txt", "w");
		for (int i = 0; i < pc->set; i++)
		{
			fwrite(pc->data + i, sizeof(PEOPLE), 1, a);
		}
		printf("SAVE SUCCESSFULLY");
		fclose(a);
	}
	void load(con* pc)
	{
		void add1(con*);
		FILE *a =fopen("save.txt", "r");
		PEOPLE b = { 0 };
		while (fread(&b, sizeof(PEOPLE), 1, a))
		{
			add1(pc);
			(pc->data)[(pc->set) - 1] = b;
		}
	}
	void add1(con* pc)
	{
		int c = pc->set;
		PEOPLE* b = (PEOPLE*)realloc(pc->data, (c + 1) * sizeof(PEOPLE));
		if (b != NULL)
			(pc->data) = b;
		else
		{
			perror("错误");
			return;
		}
		pc->set++;
	}