#include "mode_toggle.h"
#include "bitmask.h"
#include "check.h"

#include <iostream>
#include <iomanip>
#include <set>
#include <cctype>
#include <notMainDe.h>
//#include <notMainEn.h>

void mode_toggle()
{
    std::set<int> selected;

    while (true) {
        system("clear");

        for (int i = 1; i <= 15; ++i) {
            std::cout << "[" << (selected.count(i) ? 'x' : ' ') << "] "
                      << std::setw(2) << std::setfill('0') << i << "\n";
        }

        std::cout << "\n01–15 toggle | q = fertig: ";

        std::string in;
        std::cin >> in;

        if (in == "q") break;

        if (in.size() == 2 && std::isdigit(in[0]) && std::isdigit(in[1])) {
            int v = std::stoi(in);
            if (v >= 1 && v <= 15) {
                if (selected.count(v)) selected.erase(v);
                else selected.insert(v);
            }
        }
    }

    std::cout << "\nAuswahl: ";
    for (int n : selected)
        std::cout << std::setw(2) << std::setfill('0') << n << " ";
    std::cout << "\n";

    check(selected);
}
