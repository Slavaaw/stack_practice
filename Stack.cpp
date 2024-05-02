#include "Stack.h"

void Stack::choose() {
    cout << "×ÒÎ ÒÛ ÂÛÁÅÐÅØÜ, ÑÓÊÀ: 0 - ÇÀÑÓÍÓÒÜ ÑÂÎÉ ÌÈËËÈÌÅÒÐÎÂÛÉ ÕÓÉ Â ÄÅÂÀÓØÊÓ(ÔÓ ÁËßÒÜ), 1 - ÂÀÀÀÀÀÉ ÊÀÊÎÉ ÂÊÓÑÍÛÉ ØÀÂÅÐÌÀ, 2 - ÇÀÅÁÀØÈÒÜ 2 ÑÒÀÊÀ ÖÛÃÀÍ, 3 - îòìåíèòü ïîñëåäíåå äåéñòâèå" << std::endl;
    cin >> change;

    if (change <= 3) {}
    else { cout << "ÅÁËÀÍ, ×ÒÎ ÒÛ ÂÂ¨Ë ÍÀXÓÉ, ÁÅÇÐÓÊÎÅ ×ÌÎ, ÎÔÔÍÈ ÌÅÍß ÍÀÕÓÉ (ÒÀÊ ÆÅ, ÊÀÊ È ÑÂÎÞ ÌÀÒÜ), ÒÛ ÒÀÊÎÉ ÓÌÀËÈØ¨ÍÍÛÉ ÑÛÍ ÏÐÎÑÒÈÒÓÒÊÈ" << std::endl; }
}

void Stack::whatYouChange() {
    switch (change)
    {
    case 0:
        stack.push(*options);
        cout << "\nÂû âûáðàëè " << options[change] << " íàäåþñü, òû áîëüøå íå çàïóñòèøü ìåíÿ, ìóäàê, ìèíóñ 200000000 êèòàé êðåäèò è ïóòåâêà â ìåäíûé áûê\n" << endl;
        break;

    case 1:
        stack.push(*(options + 1));
        cout << "\nÂû âûáðàëè " << options[change] << ". Óæå ëó÷øå, íî âñ¸ æå, ðàñòðåë òâîé àíàë è äîëã ïåðåä êèòàé ïàðòèåé îäíà êîøêà æåíà\n" << endl;
        break;
    case 2:
        stack.push(*(options + 2));
        cout << "\nÓðà! Âû âûáðàëè " << options[change] << ". Âû ïîëó÷èòü êîøêà æåíà è àíàëüíûé âèáðàòîð\n" << endl;
        break;

    case 3:
        if (stack.size() != 0) {
            cout << "Âû îòìåíèëè äåéñòâèå: " << stack.top() << endl;
            stack.pop();
            break;
        }
        else { cout << "\nÅÁËÀÍ, ÒÛ ÍÈÕÓß ÍÅ ÑÄÅËÀË, ×ÒÎÁÛ ÎÒÌÅÍßÒÜ, ÏÐÎÑÒÎ ÊÎÍ×ÅÍÍÎÅ ÑÎÇÄÀÍÈÅ, ÂÑß ÒÂÎß ÆÈÇÍÜ - ÐÅÊËÀÌÀ ÏÐÅÇÅÐÂÀÒÈÂÎÂ\n" << endl; }


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