#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define GRID 21
#define SHIPS 8


void BOARD(char map[GRID][GRID]){
	for (int i = 0; i < GRID; ++i) {
        for (int j = 0; j < GRID; ++j) {
            map[i][j] = ' ';
        }
    }
    for (int i=0; i<GRID; i++){
    	map[i][0]='i';
    	map[0][i]= 'i';
	}
}
void PG(char map[GRID][GRID]){
	int ship_count=0;
	while(ship_count<SHIPS){

int zug = rand() % 4 ;
    int a = rand() % 20;
    int b = rand() % 20;

   switch (zug) {
        case 1:
        	if(map[a][b] == ' ' && map[a][b+1] == ' ' && map[a][b+2]==' ' && map[a][b+3]==' ' && map[a-1][b+1]==' ' && map[a+1][b+1]==' ' && map[a+1][b+3]==' ' && map[a-1][b+3]==' '){
        	map[a][b] = 'G';
			map[a][b+1] = 'T';
            map[a][b+2]='T';
            map[a][b+3]='T';
            map[a-1][b+1]='T';
            map[a+1][b+1]='T';
            map[a+1][b+3]='T';
            map[a-1][b+3]='T';
			ship_count++;
			}


            break;
        case 2:
        	if(map[a][b] == ' ' && map[a][b-1]==' ' && map[a][b-2]==' ' && map[a][b-3]==' ' && map[a+1][b-3]==' ' && map[a-1][b-3]==' ' && map[a-1][b-1]==' ' && map[a+1][b-1]==' '){
        		map[a][b] = 'G';
        		map[a][b-1]='T';
           map[a][b-2]='T';
           map[a][b-3]='T';
           map[a+1][b-3]='T';
           map[a-1][b-3]='T';
           map[a-1][b-1]='T';
           map[a+1][b-1]='T';
           ship_count++;
			}


            break;

        case 3:
        		if(map[a][b] == ' ' && map[a-1][b]==' ' && map[a-2][b]==' ' && map[a-3][b]==' ' && map[a-1][b+1]==' ' && map[a-1][b-1]==' ' && map[a-3][b-1]==' ' && map[a-3][b+1]==' '){
        			map[a][b] = 'G';
					map[a-1][b]='T';
            map[a-2][b]='T';
            map[a-3][b]='T';
            map[a-1][b+1]='T';
            map[a-1][b-1]='T';
            map[a-3][b-1]='T';
            map[a-3][b+1]='T';
            ship_count++;
				}

            break;
        case 4:
        	if(map[a][b] == ' ' && map[a+1][b]==' ' && map[a+2][b]==' ' && map[a+3][b]==' ' && map[a+1][b-1]==' ' && map[a+1][b+1]==' ' && map[a+3][b+1]==' ' && map[a+3][b-1]==' '){
        	map[a][b] = 'G';
			map[a+1][b]='T';
            map[a+2][b]='T';
            map[a+3][b]='T';
            map[a+1][b-1]='T';
            map[a+1][b+1]='T';
            map[a+3][b+1]='T';
            map[a+3][b-1]='T';
            ship_count++;
			}

            break;
        }
    }
}
void show(char map[GRID][GRID]){
	 for (int i = 0; i < GRID; ++i) {
        for (int j = 0; j < GRID; ++j) {
            if (i == 0 && j == 0) {
                printf("   ");
            } else if (i == 0) {
                printf("%3d", j);
            } else if (j == 0) {
                printf("%3d ", i);
            } else {
                printf(" %c ", map[i][j]);
            }
        }
        printf("\n");
    }
}
int shooting(char map1[GRID][GRID], char map3[GRID][GRID],int x1,int y1){
    if (map1[x1][y1] == 'T'){
        map1[x1][y1] = 'O';
        map3[x1][y1] = 'O';

        return 0;
    }else if(map1[x1][y1] == 'G'){
        map1[x1][y1] = 'C';
        map3[x1][y1] = 'C';

        return 1;
    }else{
        map1[x1][y1] = 'X';
        map3[x1][y1] = 'X';

        return 2;
    }

}
int main() {
    char map1[GRID][GRID];
    char map2[GRID][GRID];
    char map3[GRID][GRID];
    char map4[GRID][GRID];
    time_t t;
    srand((unsigned) time(&t));
//    int zug = rand()%4 +1 ;

    int z = rand() % 1;
    char player1[10], player2[10];
    printf("***** Ongots buuddag togloom *****\n");
    printf("Ehnii toglogch neree oruulna uu.\n");
    scanf("%s", &player1);
    printf("Daraagiin toglogch neree oruulna uu.\n");
    scanf("%s", &player2);
    if (z == 0)
    {
        printf("%s togloch ehelj toglohoor bolloo.\n\n", player1);
    }
    else
    {
        printf("%s togloch ehelj toglohoor bolloo.\n\n", player2);
    }
 BOARD(map1);
 BOARD(map2);
 BOARD(map3);
 BOARD(map4);
 PG(map1);
 PG(map2);
    show(map1);
    show(map2);
    show(map3);
    show(map4);
 int x1;
 int y1;
 int ship1 = 8;;

    int ship2= 8;

    while(ship1>0 && ship2>0){
        int counter=3;
        printf("%s 's turn \n", player1);
        while(counter>0 && ship1>0){

            show(map3);
            printf("Tanii buudah bolomj : %d \n",counter);
            printf("x :");
                scanf("%d",&x1);
            printf("y :");
                scanf("%d",&y1);
                int p1 = shooting(map1,map3,x1,y1);
                if(p1 ==1){
                    ship1--;
                }

            show(map3);
                counter--;
            }
        counter=3;
        printf("%s 's turn \n", player2);
        while(counter>0 && ship2>0){

            show(map4);
            printf("Tanii buudah bolomj : %d \n",counter);
            printf("x :");
            scanf("%d",&x1);
            printf("y :");
            scanf("%d",&y1);
            int p2 = shooting(map2,map4,x1,y1);
            if(p2 ==1){
                ship2--;
            }

            show(map4);
            counter--;
        }
        }
    printf("%s 's board", player1);
    show(map1);
    printf("%s 's board",player2);
    show(map1);
    return 0;
}

