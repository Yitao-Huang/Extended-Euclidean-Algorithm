# Extended-Euclidean-Algorithm
Take two input parameters and calculate their greatest common divsior. 
(Requires the first input larger than the second; otherwise there will be an repetitive line)

Use Extended-Euclidean-Algorithm and show the procedure step by step. 
For example, if we take in 

```bash
73 59
```

It will output

```bash
1 = 
(1) * 3 + (-1) * 2
(-1) * 14 + (5) * 3
(5) * 59 + (-21) * 14
(-21) * 73 + (26) * 59
```

The result can be used to calculate modular arithmetic:
```bash
59^(-1) ≡ 26 (mod 73)
73^(-1) ≡ -21 (mod 59)
```

