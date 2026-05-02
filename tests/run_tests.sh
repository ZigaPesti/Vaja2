#!/usr/bin/env bash
set -euo pipefail

USPELI=0
PADLI=0

run_test() {
    local SKRIPTA="$1"
    if bash "$SKRIPTA"; then
        echo "USPEH: $SKRIPTA"
        ((USPELI++))
    else
        echo "NEUSPEH: $SKRIPTA"
        ((PADLI++))
    fi
}

run_test "tests/test_header.sh"
run_test "tests/test_simboli.sh"
run_test "tests/test_napacna_datoteka.sh"

echo "Rezultati: $USPELI uspešnih, $PADLI padlih"
[ "$PADLI" -eq 0 ]
