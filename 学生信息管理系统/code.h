#pragma once
#include<stdio.h>
char code7() {
	char a[] = "yuxs";
	return a;
}
#include<stdio.h>
#include <corecrt_malloc.h>
#define path "D:\����\student.dat"
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
	printf("*********************��ӭ����ѧ������ϵͳ**********************\n");
	printf("��������:\n");
	printf("���ѧ����Ϣ:1\nɾ��ѧ����Ϣ:2\n����ѧ����Ϣ:3\n����ѧ����Ϣ:4\n�˳�ϵͳ:0\n");
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

void add_student(struct student* head) {//�������
	struct student* p1 = NULL, * p2 = NULL;
	int num;
	printf("������ѧ��:");
	p2 = head->next;
	scanf_s("%d", &num);
	//char name[10];
	if (p2 == NULL) {
		p1 = create_student(num);
		p1->next = NULL;
		head->next = p1;
		printf("ѧ��:%d��ӳɹ�!\n", num);
		return;
	}

	while (p2) {
		if (p2->num == num) {
			printf("��ѧ���Ѿ���ѧ��!\n");
			return;
		}
		if (((head->next)->num) > num && p2 == head->next) {
			p1 = create_student(num);
			p1->next = head->next;
			head->next = p1;
			printf("ѧ��:%d��ӳɹ�!\n", num);
			return;
		}
		if ((p2->next != NULL) && (p2->num < num) && ((p2->next)->num > num)) {
			p1 = create_student(num);
			p1->next = p2->next;
			p2->next = p1;
			printf("ѧ��:%d��ӳɹ�!\n", num);
			return;
		}
		if (p2->next == NULL) {
			p1 = create_student(num);
			p1->next = NULL;
			p2->next = p1;
			printf("ѧ��:%d��ӳɹ�!\n", num);
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
		printf("���ݿ���û��ѧ��!\n");
		return;
	}
	printf("������Ҫɾ��ѧ����ѧ��:");
	scanf_s("%d", &num);
	//char name[10];

	while (p2) {
		if (((head->next)->num) == num) {//ɾ��ͷ����
			p1 = head->next;
			head->next = p1->next;
			free(p1);
			printf("ѧ��:%dɾ���ɹ�!\n", num);
			return;
		}
		if ((p2->next != NULL) && ((p2->next)->next != NULL) && (p2->next)->num == num) {//ɾ���м�����
			p1 = p2->next;
			p2->next = p1->next;
			free(p1);
			printf("ѧ��:%dɾ���ɹ�!\n", num);
			return;
		}
		if ((p2->next != NULL && (p2->next)->next == NULL && (p2->next)->num == num)) {//ɾ��β����
			p1 = p2->next;
			p2->next = NULL;
			free(p1);
			printf("ѧ��:%dɾ���ɹ�!\n", num);
			return;
		}
		else {
			printf("���ݿ���û����Ҫɾ����ѧ��!\n");
			return;
		}
		p2 = p2->next;
	}

}

struct student* create_student(int num) {
	struct student* p;
	p = malloc(sizeof(struct student));
	printf("����������:");
	scanf_s("%s", p->name);    //����
	p->num = num;
	printf("�������Ա�:");//����
	scanf_s("%s", p->sex);
	printf("����������:");
	scanf_s("%d", &p->age);
	return p;
}
void look_student(struct student* head) {
	struct student* p1;
	p1 = head->next;
	if (p1 == NULL) {
		printf("��Ǹ�����ݿ�û��ѧ����Ϣ!\n");
		return;
	}
	printf("***********ѧ����Ϣ*************");
	printf("\n*����*\t*ѧ��*\t*�Ա�*\t*����*\n");
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
		printf("���ݿ���û��ѧ��!\n");
		return;
	}
	printf("������Ҫ������Ϣѧ����ѧ��:");
	scanf_s("%d", &num);
	while (p2) {
		if (p2->num == num) {
			printf("�������޸�����:");
			scanf_s("%s", p2->name);    //����
			printf("�������޸��Ա�:");//����
			scanf_s("%s", p2->sex);
			printf("�������޸�����:");
			scanf_s("%d", &p2->age);
			printf("ѧ��:%d����Ϣ�޸ĳɹ�!\n", num);
			return;
		}
		p2 = p2->next;
	}
	printf("û�и�ѧ��!\n");

}
void check_order(struct student* head) {
	int order;
	printf("����������:");
	scanf_s("%d", &order);
	if (order == 0) {
		printf("���Ѿ��ɹ��˳�ϵͳ!ллʹ��!\n");
		exit();
	}
	if (order == 1) {
		printf("�뿪ʼ���ѧ��\n");
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
	printf("���������������!����������:\n");
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