#!/usr/bin/env bash
set -euo pipefail

REZULTAT=$(echo -e "5\n3\n1\n4\n2" | ./program)
PRICAKOVANO="1
2
3
4
5"

if [ "$REZULTAT" != "$PRICAKOVANO" ]; then
    echo "NAPAKA: Dobljeno: $REZULTAT"
    exit 1
fi
