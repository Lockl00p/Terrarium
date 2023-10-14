#!/bin/sh

for file in bg/*.png; do
    grit "$file" -ftb -fh! -gTFF00FF -gt -gB8 -mR8 -mLs
done

for file in *.bin; do
    mv -- "$file" "${file%.bin}"
done

mv *.pal *.img *.map ../nitrofiles/bg
