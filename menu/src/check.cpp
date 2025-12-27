#include "check.h"
#include <vector>
#include <algorithm>
#include <iostream>
#include <notMain567a.h>
#include <notMain567b.h>
#include <econ567emo2.h>
#include <notMainDe.h>
#include <string>

void econ678ab() {
    start678de();
}

void econ567ab() {
    start567a();
    std::cout << "\n\n";
    start567b();
    std::cout << "\n\n";
    run_econ567emo2();
}

void check(const std::set<int>& selected)
{
int mask = 0;
for (int x : selected)
    mask |= (1u << x);

std::u8string text;
switch (mask) {
        case 0b11100000:   // {5, 6, 7}
        std::cout << "5 6 7 vorhanden\n";
        econ567ab(); 
        break;

    case 0b111000000:   // {6, 7, 8}
        std::cout << "6 7 8 vorhanden\n";
        econ678ab();
        break;

 
    case 0b10100000:   // {5, 7}
        std::cout << "5 6 7 vorhanden\n";
        econ567ab();
        break;

    case 0b110000000:   // {7, 8}
        std::cout << "7 8 vorhanden\n";
        econ678ab();

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
     case 0b0100:   // {2 }
        std::cout << "{2 } vorhanden\n";
        text = u8"Schuldgeldsystem ohne Geld ohne Währung ist das Gildenwesen ⚔️🤝 (Gläubiger 🧑‍💼, Leihen 🛠️, Schuld verursachen durch etwas wie jemanden etwas leihen sozusagen 📜💰) (Jungs 👦 und Männer 👨) hat als Reziprokes Neunzig Grad 🔄📐, Pi halbe 🥧➗2, orthogonal ⬛➕⬜, rechtwinklig 📏 das Zunftwesen 🏛️⚖️, Frauen 👧👩 und Mädchen 👧, welche die Schuld der Schuldner oder Borger wieder eintreiben zurück holen 💪🪙 etc.. Wie Borgen und Leihen funktioniert das Gildenwesen ⚔️💸 mit Zunftwesen 🏛️⚖️ als zwei orthogonale rechtwinklige reziproke Systeme 🔄📐 kombiniert und statt Geld 💵 statt Währung könnte man Protokolle führen 📜🖋️💾.\n\nDebt system without money 💸❌, without currency 💱❌, is the Guild system ⚔️🤝 (creditor 🧑‍💼, lending 🛠️, creating debt by lending something to someone 📜💰) (boys 👦 and men 👨) has as reciprocal ninety degrees 🔄📐, half Pi 🥧➗2, orthogonal ⬛➕⬜, right-angled 📏 the Guild system, the Craft system 🏛️⚖️, women 👩 and girls 👧, who recover or collect the debt of the debtors or borrowers 💪🪙 etc.. How borrowing and lending works in the Guild system ⚔️💸 with the Craft system 🏛️⚖️ as two orthogonal right-angled reciprocal systems 🔄📐 combined, and instead of money 💵 or currency 💱, one could keep protocols 📜🖋️💾.\n\nGuildSystem🏛️ GuildOrganization🏢 GuildStructure🏗️ GuildSociety🌐 GuildFramework🛠️ ArtisanGuilds🎨 CraftGuilds🧵 TradeGuilds💰 MerchantGuilds🛒 Brotherhood🤝 GuildEconomy💹 GuildNetwork🔗 CooperativeGuild🤲 CollegiateOrganization🏫 ProfessionalAssociation👔 Fraternity🎓 Fellowship🤗 LeagueOfTrades⚒️ Order📜 TradeUnion✊ TradeAssociation📈 MerchantAssociation🏪 GuildCouncil🗳️ CraftAssociation🖌️ ArtisanLeague🎭 ArtisanBrotherhood🛡️ TradeLeague🏹 MerchantLeague🚢 GuildAlliance🪢 GuildConfederation🕊️ GuildCollective🫱 GuildChamber🏛️ GuildCircle🔵 TradeCircle🔄 CraftCircle🌀 ArtisanCircle🌿 MerchantCircle🏷️ GuildSocietyClub🏰.\n\nGildensystem🏛️ Gildenorganisation🏢 Gildenstruktur🏗️ Gildengesellschaft🌐 Gildenrahmen🛠️ Handwerksgilden🎨 Kunsthandwerksgilden🧵 Handelsgilden💰 Kaufmannsgilden🛒 Bruderschaft🤝 Gildenwirtschaft💹 Gildennetzwerk🔗 KooperativeGilde🤲 KollegialeOrganisation🏫 Berufsverband👔 Studentenverbindung🎓 Gemeinschaft🤗 Handelsliga⚒️ Orden📜 Gewerkschaft✊ Handelsvereinigung📈 Kaufmannsvereinigung🏪 Gildenkonvent🗳️ Handwerksverband🖌️ Handwerksliga🎭 Handwerksbruderschaft🛡️ Handelsliga🏹 Kaufmannsliga🚢 Gildenallianz🪢 Gildenföderation🕊️ Gildenkollektiv🫱 Gildenkammer🏛️ Gildenkreis🔵 Handelskreis🔄 Handwerkskreis🌀 Kunsthandwerkskreis🌿 Kaufmannskreis🏷️ Gildengesellschaftsclub🏰.\n\nZunft🏛️ Handwerkszunft🛠️ Gewerbezunft⚒️ Kaufmannszunft💰 Meisterzunft🎓 Bruderschaft🤝 Gildenordnung📜 Zunftverein🏫 Zunftbund🔗 Handwerksbund🎨 Kunsthandwerkszunft🖌️ Handelszunft🛒 Zunftkammer🏰 Zunfträte🗳️ Zunftkreis🔵 Handwerkskreis🌀 Meisterkreis🌿 Zunftallianz🪢 Zunftkonvent🕊️ Zunftkollektiv🫱 Zunftnetzwerk🌐 Zunftgesellschaft🌐 Zunftverband👔 Zunftorganisation🏢\n\nCraftSisterhood🛠️ ArtisanSisterhood🎨 TradeSisterhood⚒️ MerchantSisterhood💰 MasterSisterhood🎓 WomenArtisans👩‍🎨 WomenCrafters🧵 WomenTraders👩‍💼 FemaleArtisans🌿 FemaleCrafters🪡 FemaleMerchants🛒 WomenInCrafts🫱 WomenInTrade🔗 SisterhoodOfCrafts🤝 SisterhoodOfArtisans📜 FemaleMasterCircle🌸 WomenGuildless🪢 WomenChamber🏰";
        std::cout << reinterpret_cast<const char*>(text.c_str()) << std::endl;
        break;
 
     case 0b0100000000:   // {8 }
        std::cout << "{8} vorhanden\n";
        text = u8"Leibeigenschaft 👑 ist Gildenwesen 4.0 🏛️ ist Sklaverei 2.0 ⛓️ ist Geldwährungsmarkt 4/3 bzw 1.25 💰💹 ist Kommunismus 8/5 bzw 1.6 🌐⚖️. Währung 💳🪙 sind keine Beträge Zahlen Werte Nummern Münzen Scheine ❌, sondern Quader 📦📐 mit mindestens drei Dimensionen 🏗️📏 für Raum zum Handel 🛒 von beispielsweise nicht nur körperlichen physischem Raum 🏠🛫, auch virtueller 💻🌌 oder geistiger 🧠✨ oder energetischer ⚡🌞 oder Gesetzes-Raum 📜⚖️ oder mathematischer ➗📊 oder chemischer ⚗️🧪 oder Weltraum 🌌🚀 oder Flugzeuge ✈️🛩️ oder Tiere 🐎🦁 oder Raumzeit ⏳🌠 oder Zeitlinien 🕰️🔗 oder Panzer 🪖🛡️ oder Landbesitz 🌍🏞️ Raketenstart-Punkte 🚀📍. Koordinatensysteme 📐🗺️ mit Achsen-Dimensionen ↔️↕️↗️. Anzahlen eines mathematischen Raumes 🔢📏 eignen sich als Währungs-grundlage 💎💠, statt Münzen Quader 📦📦. Kinder 👶🧸 sind hier besonders teuer 💎👑 und so ist das besser 👍 als Hauptstadt Metropole 🏙️ Kapitalismus Währungshandel Aktienmarkt 💹🏦.\n\nSerfdom 👑 is Guild System 4.0 🏛️ is Slavery 2.0 ⛓️ is Money Currency Market 4/3 or 1.25 💰💹 is Communism 8/5 or 1.6 🌐⚖️. Currency 💳🪙 is not amounts Numbers Values Digits Coins Bills ❌, but Cubes 📦📐 with at least three dimensions 🏗️📏 for space for trade 🛒 of for example not only physical corporeal space 🏠🛫, but also virtual 💻🌌 or mental 🧠✨ or energetic ⚡🌞 or legal space 📜⚖️ or mathematical ➗📊 or chemical ⚗️🧪 or outer space 🌌🚀 or airplanes ✈️🛩️ or animals 🐎🦁 or spacetime ⏳🌠 or timelines 🕰️🔗 or tanks 🪖🛡️ or land ownership 🌍🏞️ rocket launch points 🚀📍. Coordinate systems 📐🗺️ with axis dimensions ↔️↕️↗️. Quantities of a mathematical space 🔢📏 are suitable as currency basis 💎💠, instead of coins Cubes 📦📦. Children 👶🧸 are especially expensive 💎👑 here and so this is better 👍 than capital city metropolis 🏙️ capitalism currency trading stock market 💹🏦.";
        std::cout << reinterpret_cast<const char*>(text.c_str()) << std::endl;
        break;
 
     case 0b01000:   // {3 }
        std::cout << "{3 } vorhanden\n";
        text = u8"Landwirtschaft 🌾🌱 kann auch ein komplettes 🏛️ vollständiges Wirtschaftssystem sein 💰💼. Bauern 👨‍🌾👩‍🌾 = Landwirte 🚜 und manche Bauern 🌿 bauen zudem auch 🏡 und sind zudem Fachkräfte 🛠️📚, welches das reziproke ↔️ orthogonale 📐 rechtwinklige ⬛ Pendant zum Wirtschaftssystem Bauernstaat 🏞️ wäre, wobei pragmatische Bedingungs-Hersteller ⚙️🔧 genügen ✅ und auch Reinigungskräfte 🧹🪣, können es aber auch Meister vom Berufsfach 🏅👷 sein, wie auch Schul-Fach-Lehrer 👩‍🏫👨‍🏫, aber auch Fänger 🎯 Karten-Verantwortliche 🗂️ Filterungs-Verantwortliche 🧪 Sieb verwendende 🥣 und technische Zeichner 📐✏️, aber eigentlich sind Bedingungs-Zuständige 🛡️ das Reziproke ↩️ 90° rechtwinklige ⬛ orthogonale zum Bauernstaat der Landwirte 🌾.\n\nAgriculture 🌾🌱 can also be a complete 🏛️ full economic system 💰💼. Farmers 👨‍🌾👩‍🌾 = cultivators 🚜 and some farmers 🌿 also build big 🏡 and are furthermore skilled subject professionals 🛠️📚, which is the reciprocal ↔️ orthogonal 📐 right-angled ⬛ counterpart to the farming-state economic system 🏞️, where pragmatic condition-makers ⚙️🔧 suffice ✅ and also cleaning staff 🧹🪣, but they can also be masters of vocational fields 🏅👷, as well as school-subject teachers 👩‍🏫👨‍🏫, and also catchers 🎯 map-responsible 🗂️ filter-responsible 🧪 sieve-using 🥣 and technical draftsmen 📐✏️, but in essence the condition-responsibles 🛡️ are the reciprocal ↩️ 90° right-angled ⬛ orthogonal to the farming-state of cultivators 🌾.";
        std::cout << reinterpret_cast<const char*>(text.c_str()) << std::endl;
        break;
 
     case 0b01000000000:   // {9 }
        std::cout << "{9 } vorhanden\n";
        text = u8"Einheits-Metropolen-Großstädte Wirtschafts-System Ordnung 🏙️🌐⚖️, wobei Kapitalismus deren Form in Kombination mit Zahlen Wert Geld Währungsmarkt und Aktienmarkt ist 💶📊💹😊. Also zwei Märkte eigentlich 🛍️⚖️ und damit vier Gesellschaftsklassen 🧑‍🤝‍🧑🏛️📈📉🙂. Ansonsten ist das Einheits-Metropolen-Großstädte Wirtschafts-System ein System der Variablen Einheiten der Lust Gelüste Vergnügen Einheiten 😋🎭🎉❤️ Einheiten Geld nicht immer aus Zahlen Werten Beträgen Anzahlen 💱➕➖ sondern Einheiten Variablen dessen Einheiten als korrekt Form aussehen wie Bananen Gurken Zucchinis 🍌🥒🥒🥗😂 und weniger wie Zahlenwertewährungsgeld 💵🔢🙂. \n\nUnified-metropolis-megacity economic-system order 🏙️🌍⚖️, where capitalism is its form in combination with numbers, value, money, currency market and stock market 💵📊💹🙂. So actually two markets 🛒⚖️ and therefore four social classes 🧑‍🤝‍🧑🏛️📈📉😊. Otherwise the unified-metropolis-megacity economic system is a system of variable units of desire, cravings, lust, pleasure units 😋🎭🎉❤️, units of money not always made of numbers, values, amounts, quantities 💱➕➖ but units and variables whose units in proper form look like bananas, cucumbers, zucchinis 🍌🥒🥒🥗😂 and less like numerical-value-currency-money 💵🔢🙂.";
        std::cout << reinterpret_cast<const char*>(text.c_str()) << std::endl;
        break;
 
     case 0b01000000000000:   // {12 }
        std::cout << "{12 } vorhanden\n";
        text = u8"In der Wirtschafts-System-Ordnung eines Sternen-Systems 🌌🪐 geht es um viele Stufen der Makro- 📊 und Mikroökonomie 📉 sowie um Industrie-Makro- 🏭 und Mikro-Stufen ⚙️. Anstelle im Markt einen Tauschhandel zu vollziehen 🔄💱, werden ganze Märkte getauscht 🏙️↔️🏙️, und Industrien 🏗️, Ökonomien 💰 wie auch Ökologien 🌿🌍. Dadurch lassen sich auch tauschen: Führung 👑, Zentralität 🗝️, Verhalten 🤝, Fähigkeiten 🛠️, Überleben 🛡️, Mahlzeiten 🍽️, Identitäten 🆔. Hierarchie lässt sich gegen Wohlstand 💎💵 tauschen. Vorteile können mit Privilegien 🎟️✨ getauscht werden. Hierarchien können sich in allem ändern 🔄: Haustiere 🐕🐈, Raubtiere 🦁🐅, Industrien 🏭, Ämter 🏛️, Personal 👥. Diese Märktewirtschaft erlaubt Karriere 🚀 über der Wirtschaft 📈, über den UN Vereinten Nationen 🌐, über Planeten 🪐 samt ihres Orbits 🛰️ sogar.\n\nIn the economic system order of a star system 🌌🪐, there are many levels of macro 📊 and microeconomics 📉 as well as industrial macro 🏭 and micro levels ⚙️. Instead of conducting trade in the market 🔄💱, entire markets are exchanged 🏙️↔️🏙️, and industries 🏗️, economies 💰, and ecologies 🌿🌍 are also exchanged. This allows trading of leadership 👑, centrality 🗝️, behavior 🤝, skills 🛠️, survival 🛡️, meals 🍽️, and identities 🆔. Hierarchy can be exchanged for wealth 💎💵. Advantages can be traded for privileges 🎟️✨. Hierarchies can change in everything 🔄: pets 🐕🐈, predators 🦁🐅, industries 🏭, offices 🏛️, personnel 👥. This market economy allows careers 🚀 beyond the economy 📈, above the UN United Nations 🌐, even over planets 🪐 along their orbits 🛰️.";
        std::cout << reinterpret_cast<const char*>(text.c_str()) << std::endl;
        break;
 
     case 0b0100000000000:   // {11 }
        std::cout << "{11 } vorhanden\n";
        text = u8"In der Planeten Orbit Ökonomie 🌍🪐, der Raumschiffe 🚀🛸 im Orbit, der Massenmedien wie Theater 🎭, Oper 🎶, Kino 🎬, Television 📺, Radio 📻, Funk 🛰️, Mond 🌙 und Raumstationen 🏢🛰️ im Orbit des Gestirns ☀️: gibt es keinen Markt 🏦, wie im Kommunismus 🚫💰, der Anführer-Wirtschaft 👑, dem Gildenwesen ⚒️, dem Bauernstaat 🌾. Geben 🤲, Nehmen ✋, Klauen 🥷, Schenken 🎁 oder Planeten-Eigentum-Besitz 🪐🏠, kein Tausch 🔄, kein Markt 🏷️, kein Handel ⚖️. Das Wirtschaftsgut 💎 ist das Verhalten 🧍‍♂️🧍‍♀️ zum Verschränken 🔗 und zur Anpassung 🔄 passend zu sein 🤝. Das Delta Δ aus der mathematischen Systemtheorie 📐🧮, das es nicht nur zwischen Zahlen 1️⃣2️⃣3️⃣ gibt, sondern Allem in der Mathematik 🧠, Strukturwissenschaft 🏗️, Muster-Forschung 🧩. Es geht um Tanz 💃🕺, Kampftechniken 🥋⚔️, Schauspielerei 🎭, Darstellung 🎬, Charaktere 👤👥, Chaos 🌪️, sich anzupassen 🔄 und andere sich anpassen zu lassen 🤝 als Wirtschaftsordnung 🏛️ im chaotischen Orbit 🌌 mit Trabanten 🛰️.\n\nIn the planetary orbit economy 🌍🪐, of spaceships 🚀🛸 in orbit, of mass media like theater 🎭, opera 🎶, cinema 🎬, television 📺, radio 📻, satellites 🛰️, the moon 🌙, and space stations 🏢🛰️ in the orbit of the star ☀️: there is no market 🏦, like in communism 🚫💰, leader-economy 👑, guild systems ⚒️, or peasant states 🌾. Giving 🤲, taking ✋, stealing 🥷, gifting 🎁, or planet ownership 🪐🏠, no exchange 🔄, no market 🏷️, no trade ⚖️. The economic good 💎 is behavior 🧍‍♂️🧍‍♀️ for entangling 🔗 and adapting 🔄 to fit 🤝. The delta Δ from mathematical system theory 📐🧮, not only between numbers 1️⃣2️⃣3️⃣, but in all of mathematics 🧠, structural science 🏗️, pattern research 🧩. It is about dance 💃🕺, martial arts 🥋⚔️, acting 🎭, performance 🎬, characters 👤👥, chaos 🌪️, adapting 🔄 and letting others adapt 🤝 as the economic order 🏛️ in the chaotic orbit 🌌 with satellites 🛰️.";
        std::cout << reinterpret_cast<const char*>(text.c_str()) << std::endl;
        break;
 
     case 0b010000000000000:   // {13 }
        std::cout << "{13 } vorhanden\n";
        text = u8"Das Galaktische Wirtschaftssystem ist kein Markt, kein Tausch, kein Handel 🌌💫🤝. Nur nehmen, geben , stehlen, schenken 👐🎁🗝️✨. Es erinnert an Weihnachten 🎄⭐️🎅: Wünsch dir was! 💭🌠 Verschenke was andere wollen möchten 🎀🤲 und erfülle Wünsche ✨🙏 und erwarte, dass du das erhältst, welches oder welchen du dir wünschst oder was 🎁🔮🙂. Ein komplexes abstraktes kodiertes kristallines kompliziertes umfangreiches System und Paradigma der Dankbarkeit 💎📐🧠 sollte dafür entwickelt werden, was man zurück erhalten könnte 🔁🤍 oder alles ist Galaxie Eigentum 🌠🏛️, wie Staatseigentum beim Sozialismus 🏙️⚖️, aber Galaxie nicht Staat 🪐🚀🙂.  \n\nThe Galactic economic system is not a market, not an exchange, not trade 🌌💫🤝. Only taking, giving, stealing, gifting 👐🎁🗝️✨. It is reminiscent of Christmas 🎄⭐️🎅: Make a wish! 💭🌠 Give what others would like to have 🎀🤲 and fulfill wishes ✨🙏 and expect that you receive that which you wish for or what 🎁🔮🙂. A complex abstract coded crystalline complicated extensive system and paradigm of gratitude 💎📐🧠 should be developed for this, what one could receive back 🔁🤍, or everything is galaxy property 🌠🏛️, like state property under socialism 🏙️⚖️, but galaxy not state 🪐🚀🙂.i";
        std::cout << reinterpret_cast<const char*>(text.c_str()) << std::endl;
        break;
     case 0b011000000:   // {6, 7 }
        std::cout << "{6, 7 } vorhanden\n";
        text = u8"In der statt Reichtum lieber besser Wohlbefinden Ökonomie als Redefinition von Wohlstand 🌱💖 werden drei Zahlen Nummern Beträge Werte Geld Währungen benötigt 🔢💰, um einen zweidimensionalen Vektor als Währung neu zu definieren 📐🧭. Zwei Zahlen Nummern Beträge Werte definieren die Vektor Währung 🗺️💫, die dritte Zahl Nummer Betrag Wert ist entweder der sich ergebende Betrag der Intensität des Reichtums 💎✨, oder meint einen der beiden Axen Dimensionen 📏📊, welche die Winkelrichtung definieren 🔄🎯. Anstelle Münzen Geldscheinen 💵🪙 gibt es ein kleines einfaches Gerät analog einer Uhr 🕰️ oder eines Kompasses 🧭 oder Tachometers 🏎️ oder Plotters 🖨️, welches diesen Vektor abbildet 🎛️🌟. Diese Geräte werden per Protokollführung synchron gehalten 🔗📡, damit es keine Fälschung gibt 🚫🕵️‍♂️. Die Winkelrichtung sorgt überall für Gutartigkeit Selbstlosigkeit Führung als Macht 💖🤝👑 zusammen mit Reichtum 💎💰 zu Wohlbefinden Wirtschafts-Ordnung systematisch real echt 🌍⚖️💫.\n\nInstead of wealth 💰, better focus on well-being economy 🌱💖 as a redefinition of prosperity ✨💎, three numbers digits amounts values currencies 🔢💵 are required to define a two-dimensional vector as currency 📐🧭. Two numbers digits amounts values define the vector currency 🗺️💫, the third number digit amount value is either the resulting magnitude of wealth 💎✨, or refers to one of the two axes dimensions 📏📊 that determine the angle direction 🔄🎯. Instead of coins or banknotes 💵🪙, there is a small simple device analogous to a clock 🕰️, compass 🧭, speedometer 🏎️, or plotter 🖨️ that represents this vector 🎛️🌟. These devices are synchronized via protocol 🔗📡 to prevent forgery 🚫🕵️‍♂️. The angle direction ensures everywhere kindness, selflessness, leadership as power 💖🤝👑 together with wealth 💎💰 towards well-being economic order systematically real and genuine 🌍⚖️💫.."; 
        std::cout << reinterpret_cast<const char*>(text.c_str()) << std::endl;
        break;
     case 0b01100000:   // {5, 6 }
        std::cout << "{5, 6 } vorhanden\n";
        text = u8"Die Kommunen-Marktwirtschaft 🏘️💱 ist die Kombination von Marktwirtschaft 📈💰 mit Kommunismus ✊🌍 fusioniert. Die Währung 💠 sind Dreiecke 🔺, deren eine Länge 📏 immer genau Eins 🟢 groß sein muss. Die längste Länge 📐 meint den Geld-Wert-Preis 💵✨, wie teuer oder preiswert ein Etwas 🛠️ oder ein Jemand 🧑‍🤝‍🧑 ist. Die übrige Länge 📏🔹 definiert eine relative Angabe über ArmutsZustandsBedürftigkeit 💔🪙, Gesundheit ❤️‍🩹🍀, Reparierungsdrang 🔧🛠️, Resilienz 🛡️🌱, Straßen-Leben-Härte 🚧🛣️, Zentralität 🗺️📍, Impulsivität ⚡🔥, Angsterschaffung 😨👻. Diese Dreiecke 🔺 können in Kuchenteile 🍰🥧 zerlegt werden, sodass dies ein echter Markt 🏛️📊 ist, mit Märkten von Märkten 🔄 zwischen Kommunen 🏘️ als Kommunen-Marktwirtschaft 💠🌐.\n\nThe Communes-Market Economy 🏘️💱 is a fusion of market economy 📈💰 and communism ✊🌍. Its currency 💠 consists of triangles 🔺, where one side 📏 is always exactly one unit 🟢 long. The longest side 📐 represents the monetary value/price 💵✨, indicating how expensive or cheap a thing 🛠️ or a person 🧑‍🤝‍🧑 is. The other sides 📏🔹 provide relative measures of poverty status/neediness 💔🪙, health ❤️‍🩹🍀, repair demand 🔧🛠️, resilience 🛡️🌱, street-life toughness 🚧🛣️, centrality 🗺️📍, impulsivity ⚡🔥, and fear generation 😨👻. These triangles 🔺 can be divided into pieces 🍰🥧, creating a true market 🏛️📊 – a market of markets 🔄 where communes 🏘️ interact as independent entities in the Communes-Market Economy 💠🌐.";
        std::cout << reinterpret_cast<const char*>(text.c_str()) << std::endl;
        break;
     case 0b110110000:   // {4, 5, 7, 8 }
        std::cout << "{4, 5, 7, 8} vorhanden\n";
        text = u8"Führungs-Kommunen-Sklaverei ist die Kombination aus Kommunismus Sklaverei und der Anführerwirtschaftsform. 🌐✨ Die Währung ist ein Richtungswinkel der Länge 12, welcher in beide Richtungen zeigt. 🧭🔁 Es gibt Sklaven Hierarchien von Sklaven, die niemand Besitzt und kein Eigentum sind von 12 Stufen 1.1, 1.2, 1.3, 2.1, 2.2, 2.3, 3.1, 3.2, 3.3, 4.1, 4.2, 4.3. 🏛️📐 4. Ist die Elite Anführer Chefs Korrekte Logiker 👑🧠✔️ 3. Sind Arbeitnehmer, der Klerus, Stolze erhabene Menschen Bänker Wissenschaftler Institute Experten Profis, 💼🎓🏦🔬⭐ 2. sind normale gewöhnliche Bürger Völker Arbeiter. 👥🌍🛠️ Es gibt keine Geld-Währung aus Zahlen Werten Beträgen. 🚫💰📊 Die Währung wird durch Anführer Winkelrichtungsgeber verwaltet. 🧭⚙️👤 Zwischen Arbeitnehmer mit Arbeitgeber vs zwischen Anführer Elite Chefs vs zwischen Landwirten Cowgirl Bauern Überlebenskünstlern vs zwischen Anführer Elite Chefs vs zwischen Mentoren Moderatoren Mediatoren für die unterste Schicht, Einzelpersonen, Kleinkriminelle, Behinderte Kranke Opfer Hilfsbedürftige. 🤝🌾🤠🧑‍🌾🧩❤️‍🩹 Die Währung ist ein Richtungswinkel der Länge 12, welcher in beide Richtungen zeigt. 🧭🔁📏 \n\nLeadership-Communes-Slavery is the combination of communism slavery and the leader economic system. 🌐✨ The currency is a directional angle of length 12, which points in both directions. 🧭🔁 There are slave hierarchies of slaves who belong to no one and are not property, with 12 levels 1.1, 1.2, 1.3, 2.1, 2.2, 2.3, 3.1, 3.2, 3.3, 4.1, 4.2, 4.3. 🏛️📐 4. is the elite leaders chiefs correct logicians 👑🧠✔️ 3. are workers, the clergy, proud noble people bankers scientists institutes experts professionals, 💼🎓🏦🔬⭐ 2. are normal ordinary citizens peoples workers. 👥🌍🛠️ There is no money currency made of numbers values amounts. 🚫💰📊 The currency is managed by leader directional-angle givers. 🧭⚙️👤 Between employees with employers vs between leader elite chiefs vs between farmers cowgirls peasants survivalists vs between leader elite chiefs vs between mentors moderators mediators for the lowest layer, individuals, petty criminals, disabled ill victims people in need. 🤝🌾🤠🧑‍🌾🧩❤️‍🩹 The currency is a directional angle of length 12, which points in both directions. 🧭🔁📏."; 
        std::cout << reinterpret_cast<const char*>(text.c_str()) << std::endl;
        break;
 
 
 

 
 
    default:
        std::cout << "Keine relevante Kombination\n";
}


}


/*
     case 0b010000:   // {4 }
        std::cout << "{4 } vorhanden\n";
        text = u8"";
        std::cout << reinterpret_cast<const char*>(text.c_str()) << std::endl;
        break;
 
*/

