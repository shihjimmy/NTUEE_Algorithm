#!/bin/sh
###################################
# automatically test all patterns #
###################################
echo "################################################"
echo "insertion sort"

./bin/NTU_sort -IS inputs/1000.case1.in outputs/1000.case1.out 
./bin/NTU_sort -IS inputs/1000.case2.in outputs/1000.case2.out
./bin/NTU_sort -IS inputs/1000.case3.in outputs/1000.case3.out


./bin/NTU_sort -IS inputs/2000.case1.in outputs/2000.case1.out
./bin/NTU_sort -IS inputs/2000.case2.in outputs/2000.case2.out
./bin/NTU_sort -IS inputs/2000.case3.in outputs/2000.case3.out


./bin/NTU_sort -IS inputs/4000.case1.in outputs/4000.case1.out
./bin/NTU_sort -IS inputs/4000.case2.in outputs/4000.case2.out
./bin/NTU_sort -IS inputs/4000.case3.in outputs/4000.case3.out


./bin/NTU_sort -IS inputs/8000.case1.in outputs/8000.case1.out
./bin/NTU_sort -IS inputs/8000.case2.in outputs/8000.case2.out
./bin/NTU_sort -IS inputs/8000.case3.in outputs/8000.case3.out


./bin/NTU_sort -IS inputs/16000.case1.in outputs/16000.case1.out
./bin/NTU_sort -IS inputs/16000.case2.in outputs/16000.case2.out
./bin/NTU_sort -IS inputs/16000.case3.in outputs/16000.case3.out


./bin/NTU_sort -IS inputs/32000.case1.in outputs/32000.case1.out
./bin/NTU_sort -IS inputs/32000.case2.in outputs/32000.case2.out
./bin/NTU_sort -IS inputs/32000.case3.in outputs/32000.case3.out


./bin/NTU_sort -IS inputs/1000000.case1.in outputs/1000000.case1.out
./bin/NTU_sort -IS inputs/1000000.case2.in outputs/1000000.case2.out
./bin/NTU_sort -IS inputs/1000000.case3.in outputs/1000000.case3.out

echo "################################################"
echo "merge sort"

./bin/NTU_sort -MS inputs/1000.case1.in outputs/1000.case1.out
./bin/NTU_sort -MS inputs/1000.case2.in outputs/1000.case2.out
./bin/NTU_sort -MS inputs/1000.case3.in outputs/1000.case3.out


./bin/NTU_sort -MS inputs/2000.case1.in outputs/2000.case1.out
./bin/NTU_sort -MS inputs/2000.case2.in outputs/2000.case2.out
./bin/NTU_sort -MS inputs/2000.case3.in outputs/2000.case3.out


./bin/NTU_sort -MS inputs/4000.case1.in outputs/4000.case1.out
./bin/NTU_sort -MS inputs/4000.case2.in outputs/4000.case2.out
./bin/NTU_sort -MS inputs/4000.case3.in outputs/4000.case3.out


./bin/NTU_sort -MS inputs/8000.case1.in outputs/8000.case1.out
./bin/NTU_sort -MS inputs/8000.case2.in outputs/8000.case2.out
./bin/NTU_sort -MS inputs/8000.case3.in outputs/8000.case3.out


./bin/NTU_sort -MS inputs/16000.case1.in outputs/16000.case1.out
./bin/NTU_sort -MS inputs/16000.case2.in outputs/16000.case2.out
./bin/NTU_sort -MS inputs/16000.case3.in outputs/16000.case3.out


./bin/NTU_sort -MS inputs/32000.case1.in outputs/32000.case1.out
./bin/NTU_sort -MS inputs/32000.case2.in outputs/32000.case2.out
./bin/NTU_sort -MS inputs/32000.case3.in outputs/32000.case3.out


./bin/NTU_sort -MS inputs/1000000.case1.in outputs/1000000.case1.out
./bin/NTU_sort -MS inputs/1000000.case2.in outputs/1000000.case2.out
./bin/NTU_sort -MS inputs/1000000.case3.in outputs/1000000.case3.out

echo "################################################"
echo "quick sort"

./bin/NTU_sort -QS inputs/1000.case1.in outputs/1000.case1.out
./bin/NTU_sort -QS inputs/1000.case2.in outputs/1000.case2.out
./bin/NTU_sort -QS inputs/1000.case3.in outputs/1000.case3.out


./bin/NTU_sort -QS inputs/2000.case1.in outputs/2000.case1.out
./bin/NTU_sort -QS inputs/2000.case2.in outputs/2000.case2.out
./bin/NTU_sort -QS inputs/2000.case3.in outputs/2000.case3.out


./bin/NTU_sort -QS inputs/4000.case1.in outputs/4000.case1.out
./bin/NTU_sort -QS inputs/4000.case2.in outputs/4000.case2.out
./bin/NTU_sort -QS inputs/4000.case3.in outputs/4000.case3.out


./bin/NTU_sort -QS inputs/8000.case1.in outputs/8000.case1.out
./bin/NTU_sort -QS inputs/8000.case2.in outputs/8000.case2.out
./bin/NTU_sort -QS inputs/8000.case3.in outputs/8000.case3.out


./bin/NTU_sort -QS inputs/16000.case1.in outputs/16000.case1.out
./bin/NTU_sort -QS inputs/16000.case2.in outputs/16000.case2.out
./bin/NTU_sort -QS inputs/16000.case3.in outputs/16000.case3.out


./bin/NTU_sort -QS inputs/32000.case1.in outputs/32000.case1.out
./bin/NTU_sort -QS inputs/32000.case2.in outputs/32000.case2.out
./bin/NTU_sort -QS inputs/32000.case3.in outputs/32000.case3.out


./bin/NTU_sort -QS inputs/1000000.case1.in outputs/1000000.case1.out
./bin/NTU_sort -QS inputs/1000000.case2.in outputs/1000000.case2.out
./bin/NTU_sort -QS inputs/1000000.case3.in outputs/1000000.case3.out

echo "################################################"
echo "heap sort"

./bin/NTU_sort -HS inputs/1000.case1.in outputs/1000.case1.out
./bin/NTU_sort -HS inputs/1000.case2.in outputs/1000.case2.out
./bin/NTU_sort -HS inputs/1000.case3.in outputs/1000.case3.out


./bin/NTU_sort -HS inputs/2000.case1.in outputs/2000.case1.out
./bin/NTU_sort -HS inputs/2000.case2.in outputs/2000.case2.out
./bin/NTU_sort -HS inputs/2000.case3.in outputs/2000.case3.out


./bin/NTU_sort -HS inputs/4000.case1.in outputs/4000.case1.out
./bin/NTU_sort -HS inputs/4000.case2.in outputs/4000.case2.out
./bin/NTU_sort -HS inputs/4000.case3.in outputs/4000.case3.out


./bin/NTU_sort -HS inputs/8000.case1.in outputs/8000.case1.out
./bin/NTU_sort -HS inputs/8000.case2.in outputs/8000.case2.out
./bin/NTU_sort -HS inputs/8000.case3.in outputs/8000.case3.out


./bin/NTU_sort -HS inputs/16000.case1.in outputs/16000.case1.out
./bin/NTU_sort -HS inputs/16000.case2.in outputs/16000.case2.out
./bin/NTU_sort -HS inputs/16000.case3.in outputs/16000.case3.out


./bin/NTU_sort -HS inputs/32000.case1.in outputs/32000.case1.out
./bin/NTU_sort -HS inputs/32000.case2.in outputs/32000.case2.out
./bin/NTU_sort -HS inputs/32000.case3.in outputs/32000.case3.out


./bin/NTU_sort -HS inputs/1000000.case1.in outputs/1000000.case1.out
./bin/NTU_sort -HS inputs/1000000.case2.in outputs/1000000.case2.out
./bin/NTU_sort -HS inputs/1000000.case3.in outputs/1000000.case3.out

echo "################################################"
