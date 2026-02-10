#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, ""); 

    int language, num;

    cout << "[+] Ďĺđĺâîä÷čę\n"
        << endl
        << "[1] Đóńńęčĺ ńëîâŕ\n"
        " [2] Ŕíăëčéńęčĺ ńëîâŕ\n\n"
        << "[3] Âűéňč\n"; 

    cin >> language;

    if (language != 1 && language != 2)
        return 0;

    switch (language) {
    case 1: {
        cout << "\n[+] Ďĺđĺâîä÷čę \"Ńďčńîę đóńńęčő ńëîâ\"\n"
            << "[1] îęĺŕí\n"
            "[2] ńëîí\n"
            "[3] ëĺńňíčöŕ\n"
            "[4] ďëŕíĺňŕđčé\n"
            "[5] ńŕěîë¸ň\n"
            "[6] âîńďîěčíŕíč˙\n"
            "[7] ëĺňî\n"
            "[8] ńňĺëüęŕ\n"
            "[9] âîëíŕ\n"
            "[10] ňóďčę\n"
            "[11] âîńńňŕíčĺ\n"
            "[12] ŕâîęŕäî\n"
            "[13] ěĺëüíčöŕ\n"
            "[14] ëîäęŕ\n"
            "[15] ęâŕđňčđŕ\n"
            << "\n[3] Âűáĺđčňĺ íîěĺđ ńëîâŕ: ";
        cin >> num;

        switch (num) {
        case 1: cout << "[+] Ďĺđĺâîä: îęĺŕí -> ocean"; break;
        case 2: cout << "[+] Ďĺđĺâîä: ńëîí -> an elephant"; break;
        case 3: cout << "[+] Ďĺđĺâîä: ëĺńňíčöŕ -> stairs"; break; 
        case 4: cout << "[+] Ďĺđĺâîä: ďëŕíĺňŕđčé -> planetarium"; break;
        case 5: cout << "[+] Ďĺđĺâîä: ńŕěîë¸ň -> airplane"; break; 
        case 6: cout << "[+] Ďĺđĺâîä: âîńďîěčíŕíč˙ -> memories"; break;
        case 7: cout << "[+] Ďĺđĺâîä: ëĺňî -> summer"; break;
        case 8: cout << "[+] Ďĺđĺâîä: ńňĺëüęŕ -> insole"; break;
        case 9: cout << "[+] Ďĺđĺâîä: âîëíŕ -> wave"; break;
        case 10: cout << "[+] Ďĺđĺâîä: ňóďčę -> dead end"; break;
        case 11: cout << "[+] Ďĺđĺâîä: âîńńňŕíčĺ -> uprising"; break;
        case 12: cout << "[+] Ďĺđĺâîä: ŕâîęŕäî -> avocado"; break;
        case 13: cout << "[+] Ďĺđĺâîä: ěĺëüíčöŕ -> mill"; break;
        case 14: cout << "[+] Ďĺđĺâîä: ëîäęŕ -> boat"; break;
        case 15: cout << "[+] Ďĺđĺâîä: ęâŕđňčđŕ -> apartment"; break;
        default: cout << "Íĺâĺđíűé âűáîđ."; break;
        }
    } break;

    case 2: {
        cout << "\n[+] Ďĺđĺâîä÷čę \"Ńďčńîę ŕíăëčéńęčő ńëîâ\"\n"
            << "[1] horse\n"
            "[2] mockingbird\n"  
            "[3] pancake\n"
            "[4] sweater\n"
            "[5] jeans\n"
            "[6] kettle\n"
            "[7] blueberry\n"
            "[8] moon\n"
            "[9] love\n"
            "[10] pistol\n"
            "[11] sunshine\n"
            "[12] widow\n"
            "[13] cavalry\n"     
            "[14] destination\n"
            "[15] weakness\n"
            << "\n[3] Âűáĺđčňĺ š ńëîâŕ: ";
        cin >> num;

        switch (num) {
        case 1: cout << "[+] Ďĺđĺâîä: horse -> ëîřŕäü"; break;
        case 2: cout << "[+] Ďĺđĺâîä: mockingbird -> ďĺđĺńěĺříčę"; break;
        case 3: cout << "[+] Ďĺđĺâîä: pancake -> áëčí"; break;    
        case 4: cout << "[+] Ďĺđĺâîä: sweater -> ńâčňĺđ"; break;
        case 5: cout << "[+] Ďĺđĺâîä: jeans -> äćčíńű"; break;
        case 6: cout << "[+] Ďĺđĺâîä: kettle -> ÷ŕéíčę"; break;
        case 7: cout << "[+] Ďĺđĺâîä: blueberry -> ÷ĺđíčęŕ"; break;
        case 8: cout << "[+] Ďĺđĺâîä: moon -> ëóíŕ"; break;
        case 9: cout << "[+] Ďĺđĺâîä: love -> ëţáîâü"; break;
        case 10: cout << "[+] Ďĺđĺâîä: pistol -> ďčńňîëĺň"; break;
        case 11: cout << "[+] Ďĺđĺâîä: sunshine -> ńîëíĺ÷íűé ńâĺň"; break;
        case 12: cout << "[+] Ďĺđĺâîä: widow -> âäîâŕ"; break;
        case 13: cout << "[+] Ďĺđĺâîä: cavalry -> ęŕâŕëĺđč˙"; break;
        case 14: cout << "[+] Ďĺđĺâîä: destination -> ďóíęň íŕçíŕ÷ĺíč˙"; break;
        case 15: cout << "[+] Ďĺđĺâîä: weakness -> ńëŕáîńňü"; break;
        default: cout << "Íĺâĺđíűé âűáîđ."; break;
        }
    } break;
    }

    return 0;

}
