#pragma once
#include<stdio.h>
char code7() {
	char a[] = "yuxs";
	return a;
}
#include<stdio.h>
#include <corecrt_malloc.h>
#define path "D:\桌面\student.dat"
struct student {
	char name[20];
	int num;
	int age;
	char sex[4];
	struct student* next;
};
void  main_window();
void look_student(struct student* head);
void add_student(struct student* head);
void del_student(struct student* head);
void update_student(struct student* head);
void check_order(struct student* head);
void wirte_data(struct student* head);
void read_data(struct student* head);
struct student* create_student(int num);
struct student* new_data();

void  main_window() {
	printf("*********************欢迎进入学生管理系统**********************\n");
	printf("操作命令:\n");
	printf("添加学生信息:1\n删除学生信息:2\n查找学生信息:3\n更新学生信息:4\n退出系统:0\n");
}
void wirte_data(struct student* head) {
	struct student* p = NULL;
	FILE* fp;
	fp = fopen(path, "w");
	p = head->next;
	while (p) {
		fwrite(p, sizeof(struct student), 1, fp);
		p = p->next;
	}

	fclose(fp);
}
void read_data(struct student* head) {
	FILE* fp;
	struct student* p = NULL, * q = NULL;
	p = head;
	fp = fopen(path, "r");
	q = new_data();
	while (fread(q, sizeof(struct student), 1, fp) == 1) {
		p->next = q;
		p = p->next;
		q = new_data();
	}
	fclose(fp);

}

struct student* new_data() {
	struct student* p = NULL;
	p = (struct student*)malloc(sizeof(struct student));
	return p;
}

void add_student(struct student* head) {//排序插入
	struct student* p1 = NULL, * p2 = NULL;
	int num;
	printf("请输入学号:");
	p2 = head->next;
	scanf_s("%d", &num);
	//char name[10];
	if (p2 == NULL) {
		p1 = create_student(num);
		p1->next = NULL;
		head->next = p1;
		printf("学生:%d添加成功!\n", num);
		return;
	}

	while (p2) {
		if (p2->num == num) {
			printf("该学号已经有学生!\n");
			return;
		}
		if (((head->next)->num) > num && p2 == head->next) {
			p1 = create_student(num);
			p1->next = head->next;
			head->next = p1;
			printf("学生:%d添加成功!\n", num);
			return;
		}
		if ((p2->next != NULL) && (p2->num < num) && ((p2->next)->num > num)) {
			p1 = create_student(num);
			p1->next = p2->next;
			p2->next = p1;
			printf("学生:%d添加成功!\n", num);
			return;
		}
		if (p2->next == NULL) {
			p1 = create_student(num);
			p1->next = NULL;
			p2->next = p1;
			printf("学生:%d添加成功!\n", num);
			return;
		}
		p2 = p2->next;
	}

}
void del_student(struct student* head) {
	struct student* p1 = NULL, * p2 = NULL;
	int num;
	p2 = head->next;
	if (p2 == NULL) {
		printf("数据库中没有学生!\n");
		return;
	}
	printf("请输入要删除学生的学号:");
	scanf_s("%d", &num);
	//char name[10];

	while (p2) {
		if (((head->next)->num) == num) {//删除头数据
			p1 = head->next;
			head->next = p1->next;
			free(p1);
			printf("学生:%d删除成功!\n", num);
			return;
		}
		if ((p2->next != NULL) && ((p2->next)->next != NULL) && (p2->next)->num == num) {//删除中间数据
			p1 = p2->next;
			p2->next = p1->next;
			free(p1);
			printf("学生:%d删除成功!\n", num);
			return;
		}
		if ((p2->next != NULL && (p2->next)->next == NULL && (p2->next)->num == num)) {//删除尾数据
			p1 = p2->next;
			p2->next = NULL;
			free(p1);
			printf("学生:%d删除成功!\n", num);
			return;
		}
		else {
			printf("数据库中没有你要删除的学生!\n");
			return;
		}
		p2 = p2->next;
	}

}

struct student* create_student(int num) {
	struct student* p;
	p = malloc(sizeof(struct student));
	printf("请输入姓名:");
	scanf_s("%s", p->name);    //遇坑
	p->num = num;
	printf("请输入性别:");//遇坑
	scanf_s("%s", p->sex);
	printf("请输入年龄:");
	scanf_s("%d", &p->age);
	return p;
}
void look_student(struct student* head) {
	struct student* p1;
	p1 = head->next;
	if (p1 == NULL) {
		printf("抱歉，数据库没有学生信息!\n");
		return;
	}
	printf("***********学生信息*************");
	printf("\n*姓名*\t*学号*\t*性别*\t*年龄*\n");
	printf("******************************\n");

	do {
		printf("%s\t%d\t%s\t%d\n", p1->name, p1->num, p1->sex, p1->age);
		p1 = p1->next;
	} while (p1);
	printf("******************************\n");
}
void update_student(struct student* head) {
	struct student* p1 = NULL, * p2 = NULL;
	int num;
	p2 = head->next;
	if (p2 == NULL) {
		printf("数据库中没有学生!\n");
		return;
	}
	printf("请输入要更新信息学生的学号:");
	scanf_s("%d", &num);
	while (p2) {
		if (p2->num == num) {
			printf("请输入修改姓名:");
			scanf_s("%s", p2->name);    //遇坑
			printf("请输入修改性别:");//遇坑
			scanf_s("%s", p2->sex);
			printf("请输入修改年龄:");
			scanf_s("%d", &p2->age);
			printf("学生:%d的信息修改成功!\n", num);
			return;
		}
		p2 = p2->next;
	}
	printf("没有该学生!\n");

}
void check_order(struct student* head) {
	int order;
	printf("请输入命令:");
	scanf_s("%d", &order);
	if (order == 0) {
		printf("您已经成功退出系统!谢谢使用!\n");
		exit();
	}
	if (order == 1) {
		printf("请开始添加学生\n");
		add_student(head);
		return;
	}

	if (order == 2) {
		del_student(head);
		return;
	}

	if (order == 3) {
		look_student(head);
		return;
	}
	if (order == 4) {
		update_student(head);
		return;
	}
	printf("您输入的命令有误!请重新输入:\n");
}
void sxxxgl() {
	struct student* head = NULL;
	head = malloc(sizeof(struct student));
	head->next = NULL;
	main_window();
	while (1) {
		read_data(head);
		check_order(head);
		wirte_data(head);
	}
}