#include<iostream>
using namespace std;
#include "speechManager.h"

int main() {
	SpeechManager sm;
	char choice; // �����洢�û���ѡ��
	while (true)
	{
		sm.show_Menu();

		cout << "����������ѡ�� " << endl;
		cin >> choice; // �����û���ѡ��

		switch (choice)
		{
		case '1':  // ��ʼ����
			sm.startSpeech();
			break;
		case '2':  // �鿴��¼
			sm.showRecord();
			break;
		case '3':  // ��ռ�¼
			sm.clearRecord();
			break;
		case '0':  // �˳�ϵͳ
			sm.exitSystem();
			break;
		default:
			system("cls"); // ����
			break;
		}

		cin.ignore(100, '\n');
	}

	system("pause");
	return 0;
}