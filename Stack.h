#include <iostream>
#include <sstream>
#include <stack>
#pragma once

using namespace std;

class Stack
{
public:
	void choose();
	void whatYouChange();
	void loop();

private:
	std::stack<std::string> stack;
	std::string options[3] = { "�������� ���� ������������� ��� � ��������", "������� ����� ������� �������", "��������� 2 ����� �����" };
	std::string str;
	std::stringstream geek;
	int change;
};

