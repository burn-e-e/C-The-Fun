#include <stdio.h>
void show(char map[4][4]);
void shoot(char map[4][4]);
int main() {
    char map[4][4];
    show(map);
    shoot(map);
    return 0;
}
void show(char map[4][4]){
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 4; ++j) {
            if(i==0 && j==0){
                map[i][j] = ' ';
                printf("%c ",map[i][j]);
            }
            else if(i==0){
                map[i][j] = j + '0';
                printf("%c ",map[i][j]);
            }else if(j==0){
                map[i][j] = i + '0';
                printf("%c ",map[i][j]);
            }
            else{
                map[i][j]=' ';
                printf("%c ",map[i][j]);
            }
        }
        printf("\n");
    }
}
void shoot(char map[4][4]){
}

