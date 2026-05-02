#!/usr/bin/env bash
set -euo pipefail

if echo "" | ./program > /dev/null 2>&1; then
    echo "NAPAKA: Program ni javil napake za prazen vhod!"
    exit 1
fi
