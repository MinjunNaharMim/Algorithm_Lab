#include <stdio.h>

int n = 5;
int c[] = {5,10,15,22,25};

int v[] = {30,40,45,77,90};
int W = 60;

void simple_fill() {
    int cur_w;
    float tot_v;
    int i, maxi;
    int used[10];

    for (i = 0; i < n; ++i)
        used[i] = 0;

    cur_w = W;
    while (cur_w > 0)
        {
            maxi = -1;
            for (i = 0; i < n; ++i)
                if ((used[i] == 0) &&
                    ((maxi == -1) || ((float)v[i]/c[i] > (float)v[maxi]/c[maxi])))
                    maxi = i;

            used[maxi] = 1;
            cur_w -= c[maxi];
            tot_v += v[maxi];
            if (cur_w >= 0)
                printf("Added object %d (%dtk, %dKg) completely in the bag. Space left: %d.\n", maxi + 1, v[maxi], c[maxi], cur_w);
            else {
                printf("Added %d%% (%dtk, %dKg) of object %d in the bag.\n", (int)((1 + (float)cur_w/c[maxi]) * 100), v[maxi], c[maxi], maxi + 1);
                tot_v -= v[maxi];
                tot_v += (1 + (float)cur_w/c[maxi]) * v[maxi];
        }
    }

    printf("Filled the bag with objects worth %.2ftk.\n", tot_v);
}

int main(int argc, char *argv[]) {
    simple_fill();

    return 0;
}
