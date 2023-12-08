#include <stdio.h>


int main () {
    int t;
    scanf("%d", &t);

    for (int i = 1; i <= t; i++) {
        int friends, rooms, visit;
        scanf("%d %d %d", &friends, &rooms, &visit);

        int roomsLightState[rooms] = {0};
        int friendsVisitingList[friends][rooms];

        for (int j = 0; j < friends; j++) {
            for (int k = 0; k < rooms; k++) {
                scanf("%d", &friendsVisitingList[j][k]);
            }
        }

        for (int j = 0; j < visit; j++) {
            int friendNumber;
            scanf("%d", &friendNumber);

            for (int k = 0; k < rooms; k++) {
                if (friendsVisitingList[friendNumber - 1][k] == 1) {
                    (roomsLightState[k] == 0) ? roomsLightState[k] = 1 : roomsLightState[k] = 0;
                }
            }
        }

        printf("Case #%d:\n", i);
        for (int j = 0; j < rooms; j++) {
            (roomsLightState[j] == 1) ? printf("YES\n") : printf("NO\n");
        }
    }

    return 0;
}