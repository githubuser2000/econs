#include <iostream>
#include "mode_text.h"
#include "mode_toggle.h"
#include "mode_ncurses.h"

int main() {
    std::cout <<
        "ModeModus choseWählen:\n"
        "InsteadStatt SingularEinzel NumberZahl AlsoAuch PossibleMögliche CombinationsKombinationen, 8 10, 5 7, 5 6 7, 4 5 7, 5 6, 6 7 8:\n"
        "1 = Text-InputEingabe\n"
        //"2 = Toggle-TUI\n"
#ifdef USE_NCURSES
        "3 = ncurses-TUI_TextUserInterface_TUI\n"
#endif
        "SelectionAuswahl: ";

    int mode;
    std::cin >> mode;
    std::cin.ignore();

    if (mode == 1) mode_text();
    else if (false && mode == 2) mode_toggle();
#ifdef USE_NCURSES
    else if (mode == 3) mode_ncurses();
#endif
    else std::cout << "Ungueltig\n";
}
