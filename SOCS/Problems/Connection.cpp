#include <stdio.h>
#include <string.h>

struct Student {
    char code[31];
    char name[31];
    char gender[12];
    char fatherName[31];
    char motherName[31];
    int numSiblings;
};

struct Lecturer {
    char code[31];
    char name[31];
    char gender[12];
    int numStudents;
    struct Student students[101];
};

int main() {
    int N, K;
    scanf("%d", &N);
    struct Lecturer lecturers[101];

    // Read data for N lecturers
    for (int i = 0; i < N; i++) {
        struct Lecturer lecturer;
        scanf("%s", lecturer.code);
        scanf("%s", lecturer.name);
        scanf("%s", lecturer.gender);
        scanf("%d", &lecturer.numStudents);

        for (int j = 0; j < lecturer.numStudents; j++) {
            struct Student student;
            scanf("%s", student.code);
            scanf("%s", student.name);
            scanf("%s", student.gender);
            scanf("%s", student.fatherName);
            scanf("%s", student.motherName);
            scanf("%d", &student.numSiblings);
            lecturer.students[j] = student;
        }

        lecturers[i] = lecturer;
    }

    scanf("%d", &K);

    // Output the data for the i-th lecturer and their students
    printf("Kode Dosen: %s\n", lecturers[K - 1].code);
    printf("Nama Dosen: %s\n", lecturers[K - 1].name);
    printf("Gender Dosen: %s\n", lecturers[K - 1].gender);
    printf("Jumlah Mahasiswa: %d\n", lecturers[K - 1].numStudents);

    for (int i = 0; i < lecturers[K - 1].numStudents; i++) {
        printf("Kode Mahasiswa: %s\n", lecturers[K - 1].students[i].code);
        printf("Nama Mahasiswa: %s\n", lecturers[K - 1].students[i].name);
        printf("Gender Mahasiswa: %s\n", lecturers[K - 1].students[i].gender);
        printf("Nama Ayah: %s\n", lecturers[K - 1].students[i].fatherName);
        printf("Nama Ibu: %s\n", lecturers[K - 1].students[i].motherName);
        printf("Jumlah Saudara Kandung: %d\n", lecturers[K - 1].students[i].numSiblings);
    }

    return 0;
}