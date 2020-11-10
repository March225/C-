#pragma once
#include <iostream>
#include <fstream>
#include <iomanip>
#include "worker.h"
#include "employee.h"
#include "manager.h"
#include "boss.h"
using namespace std;

const string FILENAME = "empFile.txt";

class WorkerManager
{
public:
	// ���캯��
	WorkerManager();
	// ��������
	~WorkerManager();

	// չʾ�˵�
	void showMenu();
	// �˳�ϵͳ
	void exitSystem();
	// ����ְ��
	void Add_Emp();
	// �����ļ�
	void save();
	// ͳ������
	int get_EmpNum();
	// ��ʼ��Ա��
	void init_Emp();
	// ��ʾְ��
	void Show_Emp();
	// ɾ��ְ��
	void Del_Emp();
	// �޸�ְ��
	void Mod_Emp();
	// ����ְ��
	void Find_Emp();
	// ����ְ��
	void Sort_Emp();
	// ����ļ�
	void Clean_File();

	// ����ְ������ж�ְ���Ƿ����,�����ڷ���ְ����������λ�ã������ڷ���-1
	int IsExist(int id);

	// ��¼�ļ��е���������
	int m_EmpNum;
	// Ա�������ָ��
	Worker** m_EmpArray;
	// ��־�ļ��Ƿ�Ϊ��
	bool m_FileIsEmpty;
};

