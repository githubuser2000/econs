#include "mode_text.h"
#include "bitmask.h"
#include "check.h"

#include <iostream>
#include <set>
#include <sstream>
#include <string>
#include <vector>
#include <algorithm>
#include <iomanip>
#include <cctype>

#include <notMain567a.h>
#include <notMain567b.h>
#include <notMainDe.h>
//#include <notMainEn.h>

void mode_text() {
    std::set<int> allowed;

    // Range 1–15 automatisch erzeugen
    for (int i = 1; i <= 15; ++i)
        allowed.insert(i);

    std::set<int> selected;

    std::cout << "Eingabe (z.B. 01 5 06 11 12): ";

    std::string line;
    std::getline(std::cin >> std::ws, line);

    std::istringstream iss(line);
    std::string tok;

    while (iss >> tok) {

        // Nur Ziffern erlauben (egal ob 1- oder 2-stellig)
        if (!std::all_of(tok.begin(), tok.end(),
                         [](char c){ return std::isdigit(static_cast<unsigned char>(c)); }))
            continue;

        int n = std::stoi(tok);   // "01" -> 1

        if (allowed.count(n))
            selected.insert(n);
    }

    std::cout << "Auswahl: ";
    for (int x : selected)
        std::cout << std::setw(2) << std::setfill('0') << x << " ";

    std::cout << "\nBitmaske: " << toBitmask(selected) << "\n";

    check(selected);
}
