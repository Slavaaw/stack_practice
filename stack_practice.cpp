#include <iostream>
#include <sstream>
#include <stack>

using namespace std;

class Stack {
private:
    stack<string> stack;
    string options[3] = { "ЗАСУНУТЬ СВОЙ МИЛЛИМЕТРОВЫЙ ХУЙ В ДЕВАУШКУ", "ВАААААЙ КАКОЙ ВКУСНЫЙ ШАВЕРМА", "ЗАЕБАШИТЬ 2 СТАКА ЦЫГАН" };
    string str;
    stringstream geek;
    int change;
    

public:
    void choose() {
        cout << "ЧТО ТЫ ВЫБЕРЕШЬ, СУКА: 0 - ЗАСУНУТЬ СВОЙ МИЛЛИМЕТРОВЫЙ ХУЙ В ДЕВАУШКУ(ФУ БЛЯТЬ), 1 - ВАААААЙ КАКОЙ ВКУСНЫЙ ШАВЕРМА, 2 - ЗАЕБАШИТЬ 2 СТАКА ЦЫГАН, 3 - отменить последнее действие" << endl;
        cin >> str;
        geek << str;
        geek >> change;

        if (change <= 3) {}
        else { cout << "ЕБЛАН, ЧТО ТЫ ВВЁЛ НАXУЙ, БЕЗРУКОЕ ЧМО, ОФФНИ МЕНЯ НАХУЙ (ТАК ЖЕ, КАК И СВОЮ МАТЬ), ТЫ ТАКОЙ УМАЛИШЁННЫЙ СЫН ПРОСТИТУТКИ" << endl; }
    }

    void whatYouChanged() {
        switch (change)
        {
        case 0:
            stack.push(*options);
            cout << "\nВы выбрали " << options[change] << " надеюсь, ты больше не запустишь меня, мудак, минус 200000000 китай кредит и путевка в медный бык\n" << endl;
            break;

        case 1:
            stack.push(*(options + 1));
            cout << "\nВы выбрали " << options[change] << ". Уже лучше, но всё же, растрел твой анал и долг перед китай партией одна кошка жена\n" << endl;
            break;
        case 2:
            stack.push(*(options + 2));
            cout << "\nУра! Вы выбрали " << options[change] << ". Вы получить кошка жена и анальный вибратор\n" << endl;
            break;

        case 3:
            if (stack.size() != 0) {
                cout << "Вы отменили действие: " << stack.top() << endl;
                stack.pop();
                break;
            }
            else { cout << "\nЕБЛАН, ТЫ НИХУЯ НЕ СДЕЛАЛ, ЧТОБЫ ОТМЕНЯТЬ, ПРОСТО КОНЧЕННОЕ СОЗДАНИЕ, ВСЯ ТВОЯ ЖИЗНЬ - РЕКЛАМА ПРЕЗЕРВАТИВОВ\n" << endl; }
            

        default:
            break;
        }
    }

    void Loop() {
        do {
            choose();
            whatYouChanged();
        } while (change != 0);
        
    }
};

int main()
{
    setlocale(LC_ALL, "RU");
    Stack stack;
    stack.Loop();
}