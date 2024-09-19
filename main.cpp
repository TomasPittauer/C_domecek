#include <iostream>

void makespace(int amount) {
    int i = 0;
    while (i < amount)
        printf(" ");
    i++;
}

void domecek() {
    for (int i = 0; i < 5; i++) {

        switch (i) {
            case 0:
                printf("oo*oo");
                printf("\n");
                break;
            case 1:
                printf("o*o*o");
                printf("\n");
                break;
            case 2:
                printf("*ooo*");
                printf("\n");
                break;
            case 3:
                printf("*****");
                printf("\n");
                break;
            case 4:
                printf("*ooo*");
                printf("\n");
                break;
        }
    }
    printf("\n");
}

void domecek2() {

    for (int i = 0; i < 5; i++) {

        switch (i) {
            case 0:
                printf("  ""*""  ");
                printf("\n");
                break;
            case 1:
                printf(" ""*"" ""*"" ");
                printf("\n");
                break;
            case 2:
                printf("*""   ""*");
                printf("\n");
                break;
            case 3:
                printf("*****");
                printf("\n");
                break;
            case 4:
                printf("*""   ""*");
                printf("\n");
                break;
        }
    }
    printf("\n");
}

void strecha(int sirka) {
    int p;
    int le;
    bool licha;
    if (sirka % 2 == 0) {
        licha = false;
        p = sirka / 2;
        le = sirka / 2;
    } else {
        licha = true;
        p = (sirka - 1) / 2;
        le = (sirka - 1) / 2;
    }


    for (int l = le; l >= 0; l--) {


        for (int q = 0; q <= sirka; q++) {


            if (q == p || q == l) {
                printf("*");

            } else {
                printf(" ");
            }

        }
        p++;
        printf("\n");

    }
}

void plot(int delka) {
    int svitch = 0;

    for (int i = 0; i < delka; i++) {

        if (svitch == 0) {
            printf("--");
            svitch++;
        } else {
            printf("|");
            svitch--;
        }
    }

}

void base(int vyska, int sirka, int delka) {

    int plot_timer = 0;


    for (int i = 0; i <= vyska - 1; ++i) {

        for (int j = 0; j <= sirka; j++) {
            if (i == 0) {
                printf("*"); // podlaha
            } else if (i == vyska - 1) {
                printf("*");

            } else {
                if (j == 0) {
                    printf("*");
                } else if (j == sirka) {
                    printf("*");
                    plot(delka);
                } else {
                    printf(" ");
                }
            }
        }
        if (i < vyska - 1) {
            printf("\n");
        } else {
            plot(delka);
        }

    }

}


int main() {

    int sirka;
    int vyska;
    int delka;

    printf("%s", "zadej sirku, vysku a delku\n");

    scanf("%i", &sirka);
    scanf("%i", &vyska);
    scanf("%i", &delka);
    strecha(sirka);
    base(vyska, sirka, delka);

    int c = 4;
    printf("\n");
    printf("%c", c);
    return 0;
}
