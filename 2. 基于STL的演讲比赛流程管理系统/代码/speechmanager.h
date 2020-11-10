#pragma once
#include<iostream>
#include<vector>
#include<map>
#include <algorithm>
#include <deque>
#include <numeric>
#include <fstream>
#include <ctime>
#include <iomanip>
#include "speaker.h"
using namespace std;

// �ݽ�������
class SpeechManager
{
public:
	// ���캯��
	SpeechManager();
	// ��������
	~SpeechManager();

	// չʾ�˵�
	void show_Menu();
	// �˳�ϵͳ
	void exitSystem(); 
	// ��ʼ������
	void initSpeech();
	// ��ʼ������12��ѡ��
	void createSpeaker();
	// ��ʼ���� - �������̿���
	void startSpeech();
	// ��ǩ
	void speechDraw();
	// ����
	void speechContest();
	// ��ʾ�������
	void showScore();
	// �����¼
	void saveRecord();
	// ��ȡ��¼
	void loadRecord();
	// ��ʾ����÷�
	void showRecord();
	// ��ռ�¼
	void clearRecord();

	
	// ��������
	int m_Index;
	// ����ѡ�� ����  12��
	vector<int>v1;
	// ��һ�ֽ�������  6��
	vector<int>v2;
	// ʤ��ǰ��������  3��
	vector<int>vVictory;
	// ��ű�� �Լ���Ӧ�ľ���ѡ�� ����
	map<int, Speaker> m_Speaker;
	// �ļ�Ϊ�յı�־
	bool fileIsEmpty;
	// �����¼
	map<int, vector<string>> m_Record;
};

