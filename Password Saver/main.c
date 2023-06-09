#include <stdio.h>
#include <string.h>
#include <stdlib.h>
FILE *fp;

void menu();

int main() {
   for(;;){
       menu();
   }
    return 0;
}

void menu() {
    char data[40][3][40];
    printf("1. Add new data\n");
    printf("2. Search data\n");
    printf("3. Show all data\n");
    printf("4. Exit\n");

    int option;
    scanf("%d", &option);

    switch (option) {
        case 1:
            printf("Add new data - website username password\n-");
            fp = fopen("test.txt", "a");

            for (int i = 0; i < 1; ++i) {
                for (int j = 0; j < 3; ++j) {
                    scanf("%s", data[i][j]);
                    fprintf(fp, "%s ", data[i][j]);
                }
                fprintf(fp, "\n");
            }

            fclose(fp);
            break;

        case 2:
            printf("Search data\n");
            char website[40];
            scanf("%s", website);
            char line[400];
            fp = fopen("test.txt", "r");
            if (fp == NULL) {
                printf("Failed to open the file.\n");
                break;
            }
            while (fgets(line, sizeof(line), fp) != NULL) {

                if (strstr(line, website) != NULL) {
                    printf("%s", line);
                }
            }

            fclose(fp);
            break;
        case 3:
            printf("Show all data\n");
            char all[400];
            fp = fopen("test.txt","r");
            while(fgets(all,sizeof(all),fp )!=NULL){
                printf("%s",all);
            }
            break;

        case 4:
            printf("Exit\n");
            exit(0);
            break;
    }
}
