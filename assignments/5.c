#include <stdio.h>

// 1. Addition
void add(int A[10][10], int B[10][10], int r, int c) {
    int i, j;
    printf("\nAddition:\n");
    for(i=0;i<r;i++) {
        for(j=0;j<c;j++) {
            printf("%d ", A[i][j] + B[i][j]);
        }
        printf("\n");
    }
}

// 2. Saddle Point
void saddle(int A[10][10], int r, int c) {
    int i, j, k;
    int found = 0;

    for(i=0;i<r;i++) {
        int min = A[i][0];
        int col = 0;

        // smallest in row
        for(j=1;j<c;j++) {
            if(A[i][j] < min) {
                min = A[i][j];
                col = j;
            }
        }

        // check largest in column
        int saddle = 1;
        for(k=0;k<r;k++) {
            if(A[k][col] > min) {
                saddle = 0;
                break;
            }
        }

        if(saddle) {
            printf("Saddle Point = %d\n", min);
            found = 1;
        }
    }

    if(!found)
        printf("No Saddle Point\n");
}

// 3. Inverse of 2x2
void inverse(int A[2][2]) {
    int det;
    det = A[0][0]*A[1][1] - A[0][1]*A[1][0];

    if(det == 0) {
        printf("No Inverse\n");
        return;
    }

    printf("\nInverse:\n");
    printf("%.2f %.2f\n", A[1][1]/(float)det, -A[0][1]/(float)det);
    printf("%.2f %.2f\n", -A[1][0]/(float)det, A[0][0]/(float)det);
}

// 4. Magic Square
void magic(int A[10][10], int n) {
    int i, j;
    int sum = 0;

    for(j=0;j<n;j++)
        sum += A[0][j];

    int magic = 1;

    // rows
    for(i=0;i<n;i++) {
        int row = 0;
        for(j=0;j<n;j++)
            row += A[i][j];

        if(row != sum)
            magic = 0;
    }

    // columns
    for(j=0;j<n;j++) {
        int col = 0;
        for(i=0;i<n;i++)
            col += A[i][j];

        if(col != sum)
            magic = 0;
    }

    // diagonals
    int d1=0, d2=0;
    for(i=0;i<n;i++) {
        d1 += A[i][i];
        d2 += A[i][n-i-1];
    }

    if(d1 != sum || d2 != sum)
        magic = 0;

    if(magic)
        printf("Magic Square\n");
    else
        printf("Not Magic Square\n");
}

int main() {
    int A[10][10], B[10][10];
    int r, c, i, j, ch;

    printf("Enter rows and columns: ");
    scanf("%d%d", &r, &c);

    printf("Enter Matrix A:\n");
    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
            scanf("%d", &A[i][j]);

    printf("Enter Matrix B:\n");
    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
            scanf("%d", &B[i][j]);

    do {
        printf("\n1.Add\n2.Saddle Point\n3.Inverse (2x2)\n4.Magic Square\n5.Exit\n");
        printf("Enter choice: ");
        scanf("%d", &ch);

        switch(ch) {
            case 1:
                add(A,B,r,c);
                break;

            case 2:
                saddle(A,r,c);
                break;

            case 3:
                if(r==2 && c==2) {
                    int temp[2][2] = {
                        {A[0][0], A[0][1]},
                        {A[1][0], A[1][1]}
                    };
                    inverse(temp);
                } else {
                    printf("Only 2x2 allowed\n");
                }
                break;

            case 4:
                if(r==c)
                    magic(A,r);
                else
                    printf("Square matrix needed\n");
                break;
        }

    } while(ch != 5);

    return 0;
}