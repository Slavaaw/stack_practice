#include "Stack.h"

void Stack::choose() {
    cout << "��� �� ��������, ����: 0 - �������� ���� ������������� ��� � ��������(�� �����), 1 - ������� ����� ������� �������, 2 - ��������� 2 ����� �����, 3 - �������� ��������� ��������" << std::endl;
    cin >> change;

    if (change <= 3) {}
    else { cout << "�����, ��� �� �¨� ��X��, �������� ���, ����� ���� ����� (��� ��, ��� � ���� ����), �� ����� �����ب���� ��� �����������" << std::endl; }
}

void Stack::whatYouChange() {
    switch (change)
    {
    case 0:
        stack.push(*options);
        cout << "\n�� ������� " << options[change] << " �������, �� ������ �� ��������� ����, �����, ����� 200000000 ����� ������ � ������� � ������ ���\n" << endl;
        break;

    case 1:
        stack.push(*(options + 1));
        cout << "\n�� ������� " << options[change] << ". ��� �����, �� �� ��, ������� ���� ���� � ���� ����� ����� ������� ���� ����� ����\n" << endl;
        break;
    case 2:
        stack.push(*(options + 2));
        cout << "\n���! �� ������� " << options[change] << ". �� �������� ����� ���� � �������� ��������\n" << endl;
        break;

    case 3:
        if (stack.size() != 0) {
            cout << "�� �������� ��������: " << stack.top() << endl;
            stack.pop();
            break;
        }
        else { cout << "\n�����, �� ����� �� ������, ����� ��������, ������ ��������� ��������, ��� ���� ����� - ������� �������������\n" << endl; }


    default:
        break;
    }
}

void Stack::loop() {
    do {
        choose();
        whatYouChange();
    } while (change != 0);

}