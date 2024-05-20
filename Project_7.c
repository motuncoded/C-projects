#include <stdio.h>

int main(){

    //sum of the odd numbers
int odd = 0;
    for (int i = 1; i <= 100; i++){
        if(i % 2 != 0){
            odd += i;
        };
    }
        printf("The sum of the number is %d", odd);// 2500


// sum of the even numbers
int even = 0;
    for (int i = 2; i <= 100; i+=2){
        even += i;
    };
    printf("\nThe sum of the number is %d", even);// 2550

// list the odd numbers from 1-100
for (int i = 1; i <= 100; i++){
    if(i % 2 != 0){
    printf("%d\n", i);
    }
}
/*
3
5
7
9
11
13
15
17
19
21
23
25
27
29
31
33
35
37
39
41
43
45
47
49
51
53
55
57
59
61
63
65
67
69
71
73
75
77
79
81
83
85
87
89
91
93
95
97
99
*/

// list the even number from 1- 100
for (int i = 2; i <= 100; i+=2){
    printf("%d\n", i);
}
/*
2
4
6
8
10
12
14
16
18
20
22
24
26
28
30
32
34
36
38
40
42
44
46
48
50
52
54
56
58
60
62
64
66
68
70
72
74
76
78
80
82
84
86
88
90
92
94
96
98
100
*/
// to check if even number or odd number

int num;
printf("Enter a number :" );
scanf("%d", &num);
 if (num % 2 == 0) {
        printf("%d is even\n", num);
    } else {
        printf("%d is odd\n", num);
    }

}// to run =>  gcc Project_7.c -o Project_7 && Project_7.exe
