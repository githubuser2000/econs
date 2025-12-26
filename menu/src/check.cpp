#include "check.h"
#include <vector>
#include <algorithm>
#include <iostream>
#include <notMain567a.h>
#include <notMain567b.h>
#include <notMainDe.h>
#include <string>
void check(const std::set<int>& selected)
{
 int mask = 0;
for (int x : selected) {
    if (x == 0) mask |= 1;
    if (x == 1) mask |= 2;
    if (x == 2) mask |= 4;
    if (x == 3) mask |= 8;
    if (x == 4) mask |= 16;
    if (x == 5) mask |= 32;
    if (x == 6) mask |= 64;
    if (x == 7) mask |= 128;
    if (x == 8) mask |= 256;
}
std::u8string text;
switch (mask) {
        case 0b11100000:   // {5, 6, 7}
        std::cout << "5 6 7 vorhanden\n";
            start567a();
            std::cout << "\n\n\n\n";
            start567b();
        break;

    case 0b111000000:   // {6, 7, 8}
        std::cout << "6 7 8 vorhanden\n";
            start678de();
        break;

 
    case 0b10100000:   // {5, 7}
        std::cout << "5 6 7 vorhanden\n";
            start567a();
            std::cout << "\n\n\n\n";
            start567b();
        break;

    case 0b110000000:   // {7, 8}
        std::cout << "6 7 8 vorhanden\n";
            start678de();
        break;

    case 0b01000000:   // {6 }
        std::cout << "{6 } vorhanden\n";
        text = u8"In der Marktwirtschaft 🙂🔣 tauscht man alles über den Umweg von Zahlen 🔢💠 Werten 💎 Wert Gesellschaftswerte 🏛️🏺 Preise 💶💷 Anzahlen Beträgen, was die zweite Marktwirtschaft ist 🔁🔂. Die erste ist eigentlich der Sklavenmarkt ⛓️😟🕯️, dritte ist Tauschhandel 🤝🤲 Leibeigene mit Drei oder mehr-dimensionalen Objekten 📦📐🔮🎲🧊🧱 anstelle Münzen 🪙 und 2D Scheinen 📄📜 (Sklaverei 2.0) — und vierte Marktwirtschaft ist der sexuelle Markt 💋🔥💘🌙 der Großstadt Metropole Hauptstadt 🌆🌇🏙️🏰🏛️.\n\n In the market economy 🙂🔣 everything is exchanged indirectly through numbers 🔢💠 values 💎 worth virtue 🏛️🏺 prices 💵💷 amoints quantitiee, which is the second market economy 🔁🔂. The first one is actually the slave market ⛓️😞🕯️, the third is serfdom (slavery 2.0) trade 🤝🤲 with three- or multi-dimensional objects 📦📐🔮🎲🧊🧱 instead of coins 🪙 and 2D banknotes 📄📜 — and the fourth market economy is the sexual market 💋🔥💘🌙 of the big city metropolis capital 🌆🌇🏙️🏰🏛️.\n";
        // Zugriff auf den internen Pointer mit c_str()
    std::cout << reinterpret_cast<const char*>(text.c_str()) << std::endl;
        break;

    case 0b010000000:   // {7 }
        std::cout << "{7 } vorhanden\n";
        text = u8"Anführer — Hunde 🐕, Wölfe 🐺, Füchse 🦊, Delphine 🐬, Pferde 🐎, Pfadfinder 🧭, Pioniere 🚀, Stadtführer 🏙️, Könige 👑, Direktoren 🧑‍💼, Leiter 🧑‍✈️, Kapitäne 🚢, Staatsmänner 🏛️ — sollten als Währung statt Beträge, Anzahlen, Münzen oder Scheine 💰 eine Uhr ⏰ oder einen Kompass 🧭 verwenden, mit Protokoll-Synchronisation 🔗, dass alles stimmt ✔️.Sie handeln, wer wo hin führt 🚶‍♂️➡️🌍. Die Zahl, der Wert, entspricht der Genauigkeit und Präzision 🎯✨. Bezahlen tut man pro Stufe 🪜, Anfang und Ende des Weges 🛤️ oder für jeden guten Befehl einzeln 🗣️✔️, wenn es ein guter Befehl war 👍 — gegen Korruption 🚫🤑.\n\nLeaders — dogs 🐕, wolves 🐺, foxes 🦊, dolphins 🐬, horses 🐎, scouts 🧭, pioneers 🚀, city guides 🏙️, kings 👑, directors 🧑‍💼, chiefs 🧑‍✈️, captains 🚢, statesmen 🏛️ — should, instead of using amounts, quantities, coins, or banknotes 💰, use a clock ⏰ or a compass 🧭 as a currency, with protocol synchronization 🔗 so that everything matches correctly ✔️. They negotiate and act about who leads where 🚶‍♂️➡️🌍..The number — the value — corresponds to accuracy and precision 🎯✨.Payment is made per stage 🪜, at the beginning and end of the path 🛤️, or for every good command individually 🗣️✔️, when it truly was a good command 👍 — against corruption 🚫🤑 \n";
        // Zugriff auf den internen Pointer mit c_str()
    std::cout << reinterpret_cast<const char*>(text.c_str()) << std::endl;
        break;

    default:
        std::cout << "Keine relevante Kombination\n";
}


}








/*

std::set<int> s1 = {5,6};
std::set<int> s2 = {5,6,7};
std::set<int> s3 = {6,7,8};

auto contains = [&](const std::set<int>& ref) {
    return std::includes(selected.begin(), selected.end(),
                         ref.begin(), ref.end());
};

switch (selected) {
    case true && contains(s3):
        std::cout << "Alle 3\n";
        break;

    case true && contains(s1):
            std::cout << "Alle Elemente von {5,6,7} sind in meiner Menge!\n";
            start567a();
            std::cout << "\n\n\n\n";
            start567b();
            break;
        break;

    case true && contains(s2):
        std::cout << "{6,7,8}\n";
        break;

    default:
        std::cout << "keine bekannte Kombi\n";
}
}*/
