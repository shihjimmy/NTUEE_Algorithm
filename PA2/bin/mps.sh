#!/bin/sh
###################################
# automatically test all patterns #
###################################
echo "################################################"
./bin/mps ./inputs/12.in ./outputs/12.out
./bin/mps ./inputs/1000.in ./outputs/1000.out
./bin/mps ./inputs/10000.in ./outputs/10000.out
./bin/mps ./inputs/100000.in ./outputs/100000.out
./bin/mps ./inputs/10000.case1.in ./outputs/10000.case1.out
./bin/mps ./inputs/10000.case2.in ./outputs/10000.case2.out
./bin/mps ./inputs/10000.case3.in ./outputs/10000.case3.out
./bin/mps ./inputs/10000.case4.in ./outputs/10000.case4.out
./bin/mps ./inputs/120000.case1.in ./outputs/120000.case1.out
./bin/mps ./inputs/120000.case2.in ./outputs/120000.case2.out
./bin/mps ./inputs/120000.case3.in ./outputs/120000.case3.out
./bin/mps ./inputs/150000.case1.in ./outputs/150000.case1.out
./bin/mps ./inputs/150000.case2.in ./outputs/150000.case2.out
./bin/mps ./inputs/150000.case3.in ./outputs/150000.case3.out
./bin/mps ./inputs/180000.case1.in ./outputs/180000.case1.out
./bin/mps ./inputs/180000.case2.in ./outputs/180000.case2.out
./bin/mps ./inputs/180000.case3.in ./outputs/180000.case3.out
echo "finish this shit"