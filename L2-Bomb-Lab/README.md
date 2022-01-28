# Bomb Lab

## Phase_1

* Check the string equals to `Border relations with Canada have never been better.`.

## Phase_2

- Read $6$ numbers, marked as $a_i$.
- Check if $a_i$ equal to $1,2,4,8,16,32$.

## Phase_3

* *To be edited.*
* The string "DrEvil" allow program to open the `serect_phase`.

## Phase_4

* *To be edited.*

## Phase_5

* *To be edited.*

## Phase_6

* Read $6$ numbers, marked as $a_i$. ($a_i$ starting from `%rsp`)
* Check for $a_i\neq a_j$ and $a_i\leq 6$.
* Set $a_i$ to $7-a_i$.
* Set $b_i$ as the pointer of $a_i$-th integer in $L$. ($b_i$ starting from `%rsp + 0x20`, and noted that $L$ is a list starting from `0x6032d0`.)
* Relink the list $L$ according the order in $b_i$.
* Check if the order of $L$ is decreasing.

## Secret_phase

* Read $1$ number less or equal than $1001$.
* Play with function `fun7` to find the list and make the return value as `2`.
