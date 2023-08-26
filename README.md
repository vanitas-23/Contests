# Contests
https://atcoder.jp/contests/abc317

A. 
**Problem Statement**

Naohiro has a monster. The monster's current health is **H**. He also has **N** kinds of potions, numbered from **1** to **N** in ascending order of effectiveness. If you give the monster potion **n**, its health will increase by **Pn**. Here, **P1** < **P2** < ⋯ < **PN**.

He wants to increase the monster's health to **X** or above by giving it one of the potions. Print the number of the least effective potion that can achieve this purpose. (The constraints guarantee that such a potion exists.)

**Constraints**
2 ≤ **N** ≤ 100
1 ≤ **H** < **X** ≤ 999
1 ≤ **P1** < **P2** < ⋯ < **PN** = 999
All input values are integers.

**Input**
The input is given from a standard source in the following format:

**N**  
**H**  
**X**  
**P1**  
**P2**  
⋯  
**PN**

**Output**
Print the number of the least effective potion that can achieve this purpose, according to the given example.


B.
**Problem Statement**

Naohiro had **N+1** consecutive integers, one of each, but he lost one of them.

The remaining **N** integers are given in arbitrary order as **A1**, **A2**, ..., **AN**. Find the lost integer.

The given input guarantees that the lost integer is uniquely determined.

**Constraints**
2 ≤ **N** ≤ 100
1 ≤ **Ai** ≤ 1000
All input values are integers.
The lost integer is uniquely determined.

**Input**
The input is given from a standard source in the following format:

**N**  
**A1**  
**A2**  
...  
**AN**

**Output**
Print the answer.
C.
**Problem Statement**

A region has **N** towns numbered from **1** to **N**, and **M** roads numbered from **1** to **M**.

The **i-th** road connects town **Ai** and town **Bi** bidirectionally with length **Ci**.

Find the maximum possible total length of the roads you traverse when starting from a town of your choice and getting to another town without passing through the same town more than once.

**Constraints**
2 ≤ **N** ≤ 10
1 ≤ **M** ≤ 2^(N(N−1)/2)
1 ≤ **Ai** < **Bi** ≤ **N**
The pairs **(Ai, Bi)** are distinct.
1 ≤ **Ci** ≤ 10^8
All input values are integers.

**Input**
The input is given from a standard source in the following format:

**N**  
**M**  
**A1** **B1** **C1**  
⋮  
**AM** **BM** **CM**

**Output**
Print the answer.
E.
**Problem Statement**

A field is divided into a grid of **H** rows and **W** columns. The square at the **i-th** row from the north (top) and the **j-th** column from the west (left) is represented by the character **Ai,j**. Each character represents the following:

- **.**: An empty square. Passable.
- **#**: An obstacle. Impassable.
- **>**, **v**, **<**, **^**: Squares with a person facing east, south, west, and north, respectively. Impassable. The person's line of sight is one square wide and extends straight in the direction the person is facing, and is blocked by an obstacle or another person. (See also the description at Sample Input/Output 1.)
- **S**: The starting point. Passable. There is exactly one starting point. It is guaranteed not to be in a person's line of sight.
- **G**: The goal. Passable. There is exactly one goal. It is guaranteed not to be in a person's line of sight.

Naohiro is at the starting point and can move one square to the east, west, south, and north as many times as he wants. However, he cannot enter an impassable square or leave the field. Determine if he can reach the goal without entering a person's line of sight, and if so, find the minimum number of moves required to do so.

**Constraints**
2 ≤ **H**, **W** ≤ 2000
**Ai,j** is **.**, **#**, **>**, **v**, **<**, **^**, **S**, or **G**.
Each of **S** and **G** occurs exactly once among **Ai,j**.
Neither the starting point nor the goal is in a person's line of sight.

**Input**
The input is given from a standard source in the following format:

**H**  
**W**  
**A1,1** **A1,2** ... **A1,W**  
**A2,1** **A2,2** ... **A2,W**  
⋮  
**AH,1** **AH,2** ... **AH,W**

**Output**
If Naohiro can reach the goal without entering a person's line of sight, print the (minimum) number of moves required to do so. Otherwise, print -1.
