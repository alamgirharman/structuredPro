#include <stdio.h>
int main() {
    int marks, i, count;

    int totalMarks[] = {86, 78, 94, 69, 92, 78, 64, 62, 72, 61, 72, 66, 65, 65, 80, 72, 62, 68, 81, 62, 56, 68, 58, 56, 82, 71, 74, 78, 76, 84, 88, 73, 57, 66, 77, 71, 67, 65, 77, 63};

    for(marks = 50; marks <= 100; marks++) {
        count = 0;
        for(i = 0; i < 40; i++) {
            if(totalMarks[i] == marks) {
                count++;
            }
        }
        printf("Marks: %d Count: %d\n", marks, count);
    }
    return 0;
}