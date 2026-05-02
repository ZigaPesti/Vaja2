#!/usr/bin/env bash
set -euo pipefail

REZULTAT=$(echo -e "1\n2\n3\n4\n5" | ./program)
PRICAKOVANO="1
2
3
4
5"

if [ "$REZULTAT" != "$PRICAKOVANO" ]; then
    echo "NAPAKA: Dobljeno: $REZULTAT"
    exit 1
fi
