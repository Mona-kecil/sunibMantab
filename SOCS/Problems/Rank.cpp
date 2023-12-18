#include <stdio.h>
#include <string.h>

struct data{
    char name[11];
    int score;
};

void bubbleSort(struct data mahasiswa[], int n){
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-i-1; j++){
            if(mahasiswa[j].score < mahasiswa[j+1].score ||
              (mahasiswa[j].score == mahasiswa[j+1].score && strcmp(mahasiswa[j].name, mahasiswa[j+1].name) > 0)){
                struct data temp = mahasiswa[j];
                mahasiswa[j] = mahasiswa[j+1];
                mahasiswa[j+1] = temp;
            }
        }
    }
}

int main(){
    int t;
    scanf("%d", &t);

    for(int i=1; i<=t; i++){
        int n;
        scanf("%d", &n);
        getchar();

        struct data mahasiswa[n];
        for(int j=0; j<n; j++){
            scanf("%[^#]#%d\n", mahasiswa[j].name, &mahasiswa[j].score);
        }

        bubbleSort(mahasiswa, n);

        char query[11];
        scanf("%s", query);

        int index = -1;
        for(int j=0; j<n; j++){
            if(strcmp(mahasiswa[j].name, query) == 0){
                index = j + 1;
                break;
            }
        }

        printf("Case #%d: %d\n", i, index);
    }

    return 0;
}