#!/bin/bash

while true; do
    # Programm starten
    menu

    # Nachfrage zum Beenden
    read -r -p "Beenden? (y/j/n): " answer

    case "$answer" in
        y|Y|j|J)
            echo "Beende Programm."
            break
            ;;
        n|N|"")
            echo "Weiter..."
            ;;
        *)
            echo "Ungültige Eingabe – weiter..."
            ;;
    esac
done
