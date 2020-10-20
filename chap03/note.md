# ペアの全探索  
$2N$個の整数$a_i, b_i, i=1,2,\ldots, N$について，$x = a_i + b_j$を満たすxのうち最小の値を求めよ．
$N=3, K=10, a = (8,5,4), b=(4,1,9)$の時，$a=8, b=4$と選べば最小．

全てのペアを試せば必ず解が一意に求まるが計算量が$O(N^2)$となる．
この問題は二部探索法を用いると$O(N \log N)$で解けることが知られている．