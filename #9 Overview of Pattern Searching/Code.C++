/*
I/P : Txt = "ABABDABACDABABCABAB"
      Pat = "ABABCABAB"
O/P : Pattern found at index 10


Overview Of Pattern Searching
1. Naive : O((n-m+1)*m) 

Naie when all characters of pattern are distinct : O(n)

2. Robin  Karp : O((n-m+1)*m) But better than Naive on Average
3. KMP : (n)  -> Preprocessing Pattern
4. Suffix Tree : O(m) -> Preprocessing Text
*/