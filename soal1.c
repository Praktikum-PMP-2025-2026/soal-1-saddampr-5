/** EL2008 Praktikum Pemecahan Masalah dengan Pemrograman 2025/2026
 *   Modul               : 5
 *   Hari dan Tanggal    : Senin, 11 Mei 2026
 *   Nama (NIM)          : 13224031
 *   Nama File           : soal1.c
 *   Deskripsi           : Mengerjakan soal 1 - Peta Terowongan dan Ruang Terisolasi
 * 
 */


#include <stdio.h>

int main() {
    int N;
    
    scanf("%d", &N);
    int degree[N];
    
    for (int i = 0; i < N; i++) {
        degree[i] = 0;
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            int val;
            scanf("%d", &val);
            degree[i] += val; 
        }
    }

    for (int i = 0; i < N; i++) {
        printf("DEGREE %d %d\n", i, degree[i]);
    }

    int max_deg = -1;
    int max_vertex = -1;
    for (int i = 0; i < N; i++) {
        if (degree[i] > max_deg) { 
            max_deg = degree[i];
            max_vertex = i;
        }
    }
    printf("MAX_VERTEX %d\n", max_vertex);

    printf("ISOLATED");
    int count = 0;
    for (int i = 0; i < N; i++) {
        if (degree[i] == 0) {
            printf(" %d", i);
            count++;
        }
    }
    
    if (count == 0) {
        printf(" NONE");
    }
    printf("\n");

    return 0;
}
