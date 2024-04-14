#include <iostream>
#include <stack>

using namespace std;



void whatYouChange(int change, string* options, stack<string> stack) {
    switch (change)
    {
    case 0:
        stack.push(*options);
        cout << "Вы выбрали " << options[change] << "надеюсь, ты больше не запустишь меня, мудак, минус 200000000 китай кредит и путевка в медный бык" << endl;
        break;

    case 1:
        stack.push(*(options + 1));
        cout << "Вы выбрали " << options[change] << ". Уже лучше, но всё же растрел твой анал и долг перед китай партией одна кошка жена" << endl;
        break;
    case 2:
        stack.push(*(options + 2));
        cout << "Ура! Вы выбрали " << options[change] << ". Вы получить кошка жена и анальный вибратор" << endl;
        break;

    case 3:
        cout << "Вы отменили действие: " << stack.top() << endl;
        stack.pop();   
        break;

    default:
        break;
    }
}

int main()
{
    setlocale(LC_ALL, "RU");
    stack<string> stack;
    int change;
    string options[] = { "ЗАСУНУТЬ СВОЙ МИЛЛИМЕТРОВЫЙ ХУЙ В ДЕВАУШКУ", "ВАААААЙ КАКОЙ ВКУСНЫЙ ШАВЕРМА", "ЗАЕБАШИТЬ 2 СТАКА ЦЫГАН"};
    bool isLoop = true;
    
    do {
        cout << "======================================================" << endl;
        cout << "ЧТО ТЫ ВЫБЕРЕШЬ, СУКА?" << endl << "0 - ЗАСУНУТЬ СВОЙ МИЛЛИМЕТРОВЫЙ ХУЙ В ДЕВАУШКУ (ФУ БЛЯТЬ)(exit), 1 - ВАААААЙ КАКОЙ ВКУСНЫЙ ШАВЕРМА, 2 - ЗАЕБАШИТЬ 2 СТАКА ЦЫГАН (ВЫБОР ОЧЕВИДЕН) ИЛИ 3 - ОТМЕНА" << endl;
        cout << "======================================================" << endl;
        cin >> change;
        
        whatYouChange(change, options, stack);
        cout << stack.size() << endl;

    } while (isLoop);
        
}


