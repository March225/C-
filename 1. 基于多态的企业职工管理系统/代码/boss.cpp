#include "boss.h"

Boss::Boss(int id, string name, int deptId)
{
	// ע�⣺�б��ʼ��ֻ�ܳ�ʼ��������ĳ�Ա����������ֱ�ӳ�ʼ���̳й����ĳ�Ա���������������ø�ֵ�ķ�ʽ
	this->m_Id = id;
	this->m_Name = name;
	this->m_DeptId = deptId;
}

void Boss::showInfo()
{
	cout << "ְ����ţ� " << this->m_Id
		<< " \tְ�������� " << this->m_Name
		<< " \t��λ��" << this->getDeptName()
		<< " \t��λְ�𣺹���˾��������" << endl;
}

std::string Boss::getDeptName()
{
	return string("�ܲ�");
}
