#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define GRID 9
void BOARD(char map[GRID][GRID]){
	for (int i = 0; i < GRID; ++i) {
        for (int j = 0; j < GRID; ++j) {
            map[i][j] = '*';
        }
    }
    for (int i=0; i<GRID; i++){
    	map[i][0]='i';
    	map[0][i]= 'i';
	}
}
void MINECREATE(char map[GRID][GRID], int mine){
	int i=0;
	while(i<mine){
    int a = rand() % 9;
    int b = rand() % 9;
   
            	if(map[a][b] == '*'){
            		map[a][b]='M';
            		i++;
				}
			}			
    }
void NUMBERS(char map[GRID][GRID]){
	int count=0;
	for (int i = 0; i < GRID; ++i) {
        for (int j = 0; j < GRID; ++j) {
        	if(map[i][j]=='M'){
        		continue;
			}
            for (int k = i-1; k < i+2; ++k) {
        for (int l =j-1 ; l < j+2 ; ++l) {
            if(map[k][l]=='M'){
            	count++;
			}
        }
        }
        if(count==0){
        	continue;
		}
         map[i][j]=count+'0';
		count=0;   
        }
    }
}
int check( char map1[GRID][GRID],char map2[GRID][GRID] ){
	
	for(int i=0; i<GRID; i++){
		for(int j=0; j<GRID; j++){
			if(map2[i][j]==' '){
				for(int k=i-1; k<i+2; k++){
		for(int l=j-1; l<j+2; l++){
			if(map1[k][l]=='*'){
				map2[k][l]=' ';
				map1[k][l]=' ';
				check(map1, map2);
				
			}else{
				map2[k][l]=map1[k][l];
			}
			}
		}
	}
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
int main() {
    char map1[GRID][GRID];
    char map2[GRID][GRID];
    int mine, count=0, flag=0, d;
    time_t t;
    srand((unsigned) time(&t));
//    int zug = rand()%4 +1 ;
printf("ta cordinatiig 1 1 eer ogoh zamaar mine aas busad buh nudiig buudaj chadval hojno mine onoson tohioldold hojigdno\n");
printf("tuvhsin songoh\n 1.amarhan 5 mine \n 2. dund 10 mine \n3. hetsuu 15 mine\n");
	scanf("%d",&d);
	if(d==1){
		mine=5;
	}
	else if(d==1){
		mine=10;
	}
	else{
		mine=15;
	}
 BOARD(map1);
 BOARD(map2);
 MINECREATE(map1, mine);
    
	NUMBERS(map1);
	show(map1);
	show(map2);
	int x,y, z;
	
	while(count!=mine){
		printf("1 buudah \n 2 tuglah\n 3 tugaa arilgah");
		scanf("%d",&z);
		scanf("%d %d",&x, &y);
		if(map2[x][y]=='*'){
			if(z==1){
		if(map1[x][y]=='M'){
        map2[x][y] = map1[x][y];
        show(map2);
        printf("ta hojigdloo\n");
        exit(0);
    }else if(map1[x][y] == '*'){
    	map1[x][y] = ' ';
    	map2[x][y] = ' ';
    check(map1, map2);
    	show(map2);
    }
    	else{
    		map2[x][y]=map1[x][y];
    		show(map2);
		}
}
	else if(z==2){	
	map2[x][y]='T';
	show(map2);
	
	}
	count=0;
for(int i=0; i<GRID; i++){
	for ( int j=0; j<GRID; j++){
		if(map2[i][j]=='*'){
		count++;
	}
}
	}
	

}
    
		
		else if(z==3){
		if (map2[x][y] == 'T'){
			map2[x][y]='*';
			show(map2);
		}
		else{
			printf("buruu kordinat\n");
		}
		}
		
		else{
			printf("buruu cordinat\n");
		}
	
	}

printf("ta hojloo");
	
	
	
    return 0;
}
