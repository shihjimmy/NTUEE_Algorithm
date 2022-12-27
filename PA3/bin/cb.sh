#!/bin/sh
###################################
# automatically test all patterns #
###################################
echo "################################################"
./bin/cb ./inputs/public_case_1.in ./outputs/public_case_1.out
./bin/cb ./inputs/public_case_2.in ./outputs/public_case_2.out
./bin/cb ./inputs/public_case_3.in ./outputs/public_case_3.out
./bin/cb ./inputs/public_case_4.in ./outputs/public_case_4.out
./bin/cb ./inputs/public_case_7.in ./outputs/public_case_7.out
./bin/cb ./inputs/public_case_8.in ./outputs/public_case_8.out
echo "finish this shit"
./bin/pa3_checker ./inputs/public_case_1.in ./outputs/public_case_1.out
./bin/pa3_checker ./inputs/public_case_2.in ./outputs/public_case_2.out
./bin/pa3_checker ./inputs/public_case_3.in ./outputs/public_case_3.out
./bin/pa3_checker ./inputs/public_case_4.in ./outputs/public_case_4.out
./bin/pa3_checker ./inputs/public_case_7.in ./outputs/public_case_7.out
./bin/pa3_checker ./inputs/public_case_8.in ./outputs/public_case_8.out