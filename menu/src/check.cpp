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
        text = u8"In der Marktwirtschaft 🙂🔣 tauscht man alles über den Umweg von Zahlen 🔢💠 Werten 💎 Wert Gesellschaftswerte 🏛️🏺 Preise 💶💷 Anzahlen Beträgen, was die zweite Marktwirtschaft ist 🔁🔂. Die erste ist eigentlich der Sklavenmarkt ⛓️😟🕯️, dritte ist Tauschhandel 🤝🤲 Leibeigene mit Drei oder mehr-dimensionalen Objekten 📦📐🔮🎲🧊🧱 anstelle Münzen 🪙 und 2D Scheinen 📄📜 (Sklaverei 2.0) — und vierte Marktwirtschaft ist der sexuelle Markt 💋🔥💘🌙 der Großstadt Metropole Hauptstadt 🌆🌇🏙️🏰🏛️.\n\nIn the market economy 🙂🔣 everything is exchanged indirectly through numbers 🔢💠 values 💎 worth virtue 🏛️🏺 prices 💵💷 amoints quantitiee, which is the second market economy 🔁🔂. The first one is actually the slave market ⛓️😞🕯️, the third is serfdom (slavery 2.0) trade 🤝🤲 with three- or multi-dimensional objects 📦📐🔮🎲🧊🧱 instead of coins 🪙 and 2D banknotes 📄📜 — and the fourth market economy is the sexual market 💋🔥💘🌙 of the big city metropolis capital 🌆🌇🏙️🏰🏛️.\n";
    std::cout << reinterpret_cast<const char*>(text.c_str()) << std::endl;
        break;

    case 0b010000000:   // {7 }
        std::cout << "{7 } vorhanden\n";
        text = u8"Anführer — Hunde 🐕, Wölfe 🐺, Füchse 🦊, Delphine 🐬, Pferde 🐎, Pfadfinder 🧭, Pioniere 🚀, Stadtführer 🏙️, Könige 👑, Direktoren 🧑‍💼, Leiter 🧑‍✈️, Kapitäne 🚢, Staatsmänner 🏛️ — sollten als Währung statt Beträge, Anzahlen, Münzen oder Scheine 💰 eine Uhr ⏰ oder einen Kompass Winkel Richtung 🧭 verwenden, mit Protokoll-Synchronisation 🔗, dass alles stimmt ✔️.Sie handeln, wer wo hin führt 🚶‍♂️➡️🌍. Die Zahl, der Wert, entspricht der Genauigkeit und Präzision 🎯✨. Bezahlen tut man pro Stufe 🪜, Anfang und Ende des Weges 🛤️ oder für jeden guten Befehl einzeln 🗣️✔️, wenn es ein guter Befehl war 👍 — gegen Korruption 🚫🤑.\n\nLeaders — dogs 🐕, wolves 🐺, foxes 🦊, dolphins 🐬, horses 🐎, scouts 🧭, pioneers 🚀, city guides 🏙️, kings 👑, directors 🧑‍💼, chiefs 🧑‍✈️, captains 🚢, statesmen 🏛️ — should, instead of using amounts, quantities, coins, or banknotes 💰, use a clock ⏰ or a compass angle direction 🧭 as a currency, with protocol synchronization 🔗 so that everything matches correctly ✔️. They negotiate and act about who leads where 🚶‍♂️➡️🌍..The number — the value — corresponds to accuracy and precision 🎯✨.Payment is made per stage 🪜, at the beginning and end of the path 🛤️, or for every good command individually 🗣️✔️, when it truly was a good command 👍 — against corruption 🚫🤑 \n";
        // Zugriff auf den internen Pointer mit c_str()
    std::cout << reinterpret_cast<const char*>(text.c_str()) << std::endl;
        break;

    case 0b0100000:   // {5 }
        std::cout << "{5 } vorhanden\n";
        text=u8"Im Kommunismus geht es eigentlich um Armut 🏚️, wenig Geld 💸, Währung 💰, Wohlstand 🏦 zu besitzen. Es ist die Zentral-Personen-Wirtschafts-Form 🏛️ statt dem Individuum 👤 der Einzelperson der Identität. Währung ist nicht Zahl 🔢, Wert ⚖️, Betrag 💵. Es ist kein Markt 🛒, also entweder Geben 🤲 oder Nehmen 👐 statt Tauschen 🔄. Währung ist das Ganze 🌐, was der Zahl Eins 1️⃣ entspricht. Es geht um: Armut 🥀, Gesundheit 🏥, Krankheit 🤒, Reparatur 🛠️, Zerstörung 💥, Opfer 😢, Täter 😈, die Härte der Straße 🚧 als Leben oder als Wirtschaftsform im Krankenhaus 🏨 unter Patienten 🧑‍⚕️🧑‍🦽. Mit der Zahl, dem Wert Eins 1️⃣, das Ganze 🌐 kann man viel machen 🌟. Als Kuchen 🍰 wäre es die Winkel-Richtung Prozent 📐 von z.B. Armut 🏚️, wenig Besitz 🎒 und Eigentum 🏠 als Kuchenstück 🍰.\n\nIn communism, it’s actually about poverty 🏚️, having little money 💸, currency 💰, and wealth 🏦. It’s the central-person economy form 🏛️ rather than the individual identity 👤 of each person. Currency is not a number 🔢, not a value ⚖️, not an amount 💵. There is no market 🛒, so it’s either giving 🤲 or taking 👐 instead of trading 🔄. Currency represents the whole, the thing that equals the number one 1️⃣. It deals with: poverty 🥀, health 🏥, illness 🤒, repair 🛠️, destruction 💥, victims 😢, perpetrators 😈, the harshness of the street 🚧 as life, or the economy in the hospital 🏨 among patients 🧑‍⚕️🧑‍🦽.With the number, the value one 1️⃣, the whole 🌐 can be used in many ways 🌟. As a cake 🍰, it would be the angle-direction percentage 📐 of, for example, poverty 🏚️, little possession 🎒, and ownership 🏠 as a slice 🍰.";
        std::cout << reinterpret_cast<const char*>(text.c_str()) << std::endl;
        break;
     case 0b010000:   // {4 }
        std::cout << "{4 } vorhanden\n";
        text = u8"Vermutlich wahrscheinlich ist Sklaverei 🏛️⚖️ ein weniger bösartiges 😶‍🌫️ schädliches ☠️ gefährliches ⚡ bedrohliches 🚨 Wirtschaftssystem 💰, als im Vergleich die Geldwährungswirtschaft 💵💳, die nach der Sklaverei der zweite Markt 🏦 ist. Es basiert auf den Prinzipien Vorwärts ⬆️ vs Rückwärts ⬇️ oder oben 🏔️ vs unten 🌊 oder hinten 🔙 vs vorne 🔜, also zwei Richtungen ↔️ von hier drei erwähnten Richtungs-Möglichkeiten 🔄. Der Sklavenhalter 👑 ist der autarke 🏹 selbständige 💪 unternehmerische 📈 autodidaktische 📚 souveräne 🦁 selbstbestimmte ✊ Selbstverantwortliche 🛡️. Der Sklave 🤲 ist kein Eigentum 🚫🏠 und kein Besitz 💎, was im Gegenteil zur Leibeigenschaft ⚙️ = Sklaverei 2.0 🏚️ steht, in welchem Raum besessen wird 🏘️. Sklaverei ist Gildenwesen 2.0.\n\nPresumably probably, slavery 🏛️⚖️ is a less malicious 😶‍🌫️ harmful ☠️ dangerous ⚡ threatening 🚨 economic system 💰, compared to the money-based economy 💵💳, which is the second market 🏦 after slavery. It is based on the principles of forward ⬆️ vs backward ⬇️ or up 🏔️ vs down 🌊 or back 🔙 vs front 🔜, thus two directions ↔️ out of the three mentioned directional possibilities 🔄. The slaveholder 👑 is the autonomous 🏹 independent 💪 entrepreneurial 📈 self-taught 📚 sovereign 🦁 self-determined ✊ self-responsible 🛡️. The slave 🤲 is not property 🚫🏠 and not possession 💎, which, in contrast, stands against serfdom ⚙️ = slavery 2.0 🏚️, in which space is possessed 🏘️. Slavery is guild economy 2.0.";
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
