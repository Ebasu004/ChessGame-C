#include <stdio.h>
#include <stdlib.h>
#include <string.h> 
#include <stdbool.h>
#define MAX_LEN 40

void setTurn(bool turn)
{
  if(turn)
    turn = false;
  else
    turn = true; 
}
void show(int board[8][8]){
  for(int i = 0; i<8; i++){
    for(int j = 0; j<8; j++){
      printf("%d", board[i][j]);
      if(board[i][j] <= 0){
        printf(" %d ",**board);  
      }
      else
        printf(" %d ",**board);
      if(j!=7)
        printf("|");
    }
  }  
} 
void mv(int x, int y, int x2, int y2, int board[8][8]){
  if(board[x][y] == 1){ 
    if(x2 == x && y2 == y+1 && board[x2][y2] == 0){
      board[x][y] = 0;
      board[x2][y2] = 1; 
    }
    if(x2 == x && x == 2 && y2 == y+2 && board[x2][y2] == 0){
      board[x][y] = 0;
      board[x2][y2] = 1; 
    }
    else{
      printf("Move Not Valid");
    }
  }
  if(board[x][y] == -1){ 
    if(x2 == x && y2 == y-1 && board[x2][y2] == 0){
      board[x][y] = 0;
      board[x2][y2] = 1; 
    }
    if(x2 == x &&  x == 7 && y2 == y-2 && board[x2][y2] == 0){
      board[x][y] = 0;
      board[x2][y2] = 1; 
    }
    else{
      printf("Move Not Valid");
    }
  }
  if(board[x][y] == 2){
    if((x2 == x+2|| x2 == x-2) && (y2 == y-1 || y2 == y+1) && board[x2][y2] == 0){
      board[x][y] = 0;
      board[x2][y2] = 2;
    }
    if((x2 == x+1|| x2 == x-1) && (y2 == y-2 || y2 == y+2) && board[x2][y2] == 0){
      board[x][y] = 0;
      board[x2][y2] = 2;
    }
    else{
      printf("Move Not Valid");
    }
  }
  if(board[x][y] == -2){
    if((x2 == x+2|| x2 == x-2) && (y2 == y-1 || y2 == y+1) && board[x2][y2] == 0){
      board[x][y] = 0;
      board[x2][y2] = -2;
    }
    if((x2 == x+1|| x2 == x-1) && (y2 == y-2 || y2 == y+2) && board[x2][y2] == 0){
      board[x][y] = 0;
      board[x2][y2] = -2;
    }
    else{
      printf("Move Not Valid");
    }
  }
  if(board[x][y] == 3){
    if(abs(x-x2)==abs(y-y2) && board[x2][y2] == 0){
      board[x][y] = 0;
      board[x2][y2] = 3;
    }
    else{
      printf("Move Not Valid");
    }
  }
  if(board[x][y] == -3){
    if(abs(x-x2)==abs(y-y2) && board[x2][y2] == 0){
      board[x][y] = 0;
      board[x2][y2] = -3;
    }
    else{
      printf("Move Not Valid");
    }
  }
  if(board[x][y] == 4){
    if((x2 == x && y2 != y) && board[x2][y2] == 0){
      board[x][y] = 0;
      board[x2][y2] = 4;
    }
    if((x2 != x && y2 == y) && board[x2][y2] == 0){
      board[x][y] = 0;
      board[x2][y2] = 4;
    }
    else{
      printf("Move Not Valid");
    }
  }
  if(board[x][y] == -4){
    if((x2 == x && y2 != y) && board[x2][y2] == 0){
      board[x][y] = 0;
      board[x2][y2] = -4;
    }
    if((x2 != x && y2 == y) && board[x2][y2] == 0){
      board[x][y] = 0;
      board[x2][y2] = -4;
    }
    else{
      printf("Move Not Valid");
    }
  }
  if(board[x][y] == 5){
    if((x2 == x && y2 != y) && board[x2][y2] == 0){
      board[x][y] = 0;
      board[x2][y2] = 5;
    }
    if((x2 != x && y2 == y) && board[x2][y2] == 0){
      board[x][y] = 0;
      board[x2][y2] = 5;
    }
    if(abs(x-x2)==abs(y-y2) && board[x2][y2] == 0){
      board[x][y] = 0;
      board[x2][y2] = 5;
    }
    else{
      printf("Move Not Valid");
    }
  }
  if(board[x][y] == -5){
    if((x2 == x && y2 != y) && board[x2][y2] == 0){
      board[x][y] = 0;
      board[x2][y2] = -5;
    }
    if((x2 != x && y2 == y) && board[x2][y2] == 0){
      board[x][y] = 0;
      board[x2][y2] = -5;
    }
    if(abs(x-x2)==abs(y-y2) && board[x2][y2] == 0){
      board[x][y] = 0;
      board[x2][y2] = -5;
    }
    else{
      printf("Move Not Valid");
    }
  }
  if(board[x][y] == 6){
    if(x2 == x+1 && y2 == y && board[x2][y2] == 0){
      board[x][y] = 0;
      board[x2][y2] = 6;
    }
    if(x2 == x+1 && y2 == y+1 && board[x2][y2] == 0){
      board[x][y] = 0;
      board[x2][y2] = 6;
    }
    if(x2 == x && y2 == y+1 && board[x2][y2] == 0){
      board[x][y] = 0;
      board[x2][y2] = 6;
    }
    if(x2 == x-1 && y2 == y+1 && board[x2][y2] == 0){
      board[x][y] = 0;
      board[x2][y2] = 6;
    }
    if(x2 == x+1 && y2 == y-1 && board[x2][y2] == 0){
      board[x][y] = 0;
      board[x2][y2] = 6;
    }
    if(x2 == x-1 && y2 == y && board[x2][y2] == 0){
      board[x][y] = 0;
      board[x2][y2] = 6;
    }
    if(x2 == x-1 && y2 == y-1 && board[x2][y2] == 0){
      board[x][y] = 0;
      board[x2][y2] = 6;
    }
    if(x2 == x && y2 == y-1 && board[x2][y2] == 0){
      board[x][y] = 0;
      board[x2][y2] = 6;
    }
    else{
      printf("Move Not Valid");
    }
  }
  if(board[x][y] == -6){
    if(x2 == x+1 && y2 == y && board[x2][y2] == 0){
      board[x][y] = 0;
      board[x2][y2] = -6;
    }
    if(x2 == x+1 && y2 == y+1 && board[x2][y2] == 0){
      board[x][y] = 0;
      board[x2][y2] = -6;
    }
    if(x2 == x && y2 == y+1 && board[x2][y2] == 0){
      board[x][y] = 0;
      board[x2][y2] = -6;
    }
    if(x2 == x-1 && y2 == y+1 && board[x2][y2] == 0){
      board[x][y] = 0;
      board[x2][y2] = -6;
    }
    if(x2 == x+1 && y2 == y-1 && board[x2][y2] == 0){
      board[x][y] = 0;
      board[x2][y2] = -6;
    }
    if(x2 == x-1 && y2 == y && board[x2][y2] == 0){
      board[x][y] = 0;
      board[x2][y2] = -6;
    }
    if(x2 == x-1 && y2 == y-1 && board[x2][y2] == 0){
      board[x][y] = 0;
      board[x2][y2] = -6;
    }
    if(x2 == x && y2 == y-1 && board[x2][y2] == 0){
      board[x][y] = 0;
      board[x2][y2] = -6;
    }
    else{
      printf("Move Not Valid");
    }
  }
}
void cp(int x, int y, int x2, int y2, int board[8][8]){
  if(board[x][y] == 1){
    if(board[x2][y2] > 0 && (x2 == x-1 || x2 == x+1) && y2 == y+1){
      board[x][y] = 0;
      board[x2][y2] = 1;
    }
    else{
      printf("Move Not Valid");
    }
  }
  if(board[x][y] == -1){
   if(board[x2][y2] > 0 && (x2 == x-1 || x2 == x+1) && y2 == y+1){
      board[x][y] = 0;
      board[x2][y2] = 1;
    }
    else{
      printf("Move Not Valid");
    }
  }
  if(board[x][y] == 2){
    if((x2 == x+2|| x2 == x-2) && (y2 == y-1 || y2 == y+1) && board[x2][y2] > 0){
      board[x][y] = 0;
      board[x2][y2] = 2;
    }
    if((x2 == x+1|| x2 == x-1) && (y2 == y-2 || y2 == y+2) && board[x2][y2] > 0){
      board[x][y] = 0;
      board[x2][y2] = 2;
    }
    else{
      printf("Move Not Valid");
    }
  }
  if(board[x][y] == -2){
    if((x2 == x+2|| x2 == x-2) && (y2 == y-1 || y2 == y+1) && board[x2][y2] == 0){
      board[x][y] = 0;
      board[x2][y2] = -2;
    }
    if((x2 == x+1|| x2 == x-1) && (y2 == y-2 || y2 == y+2) && board[x2][y2] == 0){
      board[x][y] = 0;
      board[x2][y2] = -2;
    }
    else{
      printf("Move Not Valid");
    }
  }
  if(board[x][y] == 3){
    if(abs(x-x2)==abs(y-y2) && board[x2][y2] < 0){
      board[x][y] = 0;
      board[x2][y2] = 3;
    }
    else{
      printf("Move Not Valid");
    }
  }
  if(board[x][y] == -3){
    if(abs(x-x2)==abs(y-y2) && board[x2][y2] > 0){
      board[x][y] = 0;
      board[x2][y2] = -3;
    }
    else{
      printf("Move Not Valid");
    }
  }
  if(board[x][y] == 4){
    if((x2 == x && y2 != y) && board[x2][y2] < 0){
      board[x][y] = 0;
      board[x2][y2] = 4;
    }
    if((x2 != x && y2 == y) && board[x2][y2] < 0){
      board[x][y] = 0;
      board[x2][y2] = 4;
    }
    else{
      printf("Move Not Valid");
    }
  }
  if(board[x][y] == -4){
    if((x2 == x && y2 != y) && board[x2][y2] > 0){
      board[x][y] = 0;
      board[x2][y2] = -4;
    }
    if((x2 != x && y2 == y) && board[x2][y2] > 0){
      board[x][y] = 0;
      board[x2][y2] = -4;
    }
    else{
      printf("Move Not Valid");
    }
  }
  if(board[x][y] == 5){
    if((x2 == x && y2 != y) && board[x2][y2] < 0){
      board[x][y] = 0;
      board[x2][y2] = 5;
    }
    if((x2 != x && y2 == y) && board[x2][y2] < 0){
      board[x][y] = 0;
      board[x2][y2] = 5;
    }
    if(abs(x-x2)==abs(y-y2) && board[x2][y2] < 0){
      board[x][y] = 0;
      board[x2][y2] = 5;
    }
    else{
      printf("Move Not Valid");
    }
  }
  if(board[x][y] == -5){
    if((x2 == x && y2 != y) && board[x2][y2] > 0){
      board[x][y] = 0;
      board[x2][y2] = -5;
    }
    if((x2 != x && y2 == y) && board[x2][y2] > 0){
      board[x][y] = 0;
      board[x2][y2] = -5;
    }
    if(abs(x-x2)==abs(y-y2) && board[x2][y2] > 0){
      board[x][y] = 0;
      board[x2][y2] = -5;
    }
    else{
      printf("Move Not Valid");
    }
  }
  if(board[x][y] == 6){
    if(x2 == x+1 && y2 == y && board[x2][y2] < 0){
      board[x][y] = 0;
      board[x2][y2] = 6;
    }
    if(x2 == x+1 && y2 == y+1 && board[x2][y2] < 0){
      board[x][y] = 0;
      board[x2][y2] = 6;
    }
    if(x2 == x && y2 == y+1 && board[x2][y2] < 0){
      board[x][y] = 0;
      board[x2][y2] = 6;
    }
    if(x2 == x-1 && y2 == y+1 && board[x2][y2] < 0){
      board[x][y] = 0;
      board[x2][y2] = 6;
    }
    if(x2 == x+1 && y2 == y-1 && board[x2][y2] < 0){
      board[x][y] = 0;
      board[x2][y2] = 6;
    }
    if(x2 == x-1 && y2 == y && board[x2][y2] < 0){
      board[x][y] = 0;
      board[x2][y2] = 6;
    }
    if(x2 == x-1 && y2 == y-1 && board[x2][y2] < 0){
      board[x][y] = 0;
      board[x2][y2] = 6;
    }
    if(x2 == x && y2 == y-1 && board[x2][y2] < 0){
      board[x][y] = 0;
      board[x2][y2] = 6;
    }
    else{
      printf("Move Not Valid");
    }
    if(board[x][y] == -6){
    if(x2 == x+1 && y2 == y && board[x2][y2] > 0){
      board[x][y] = 0;
      board[x2][y2] = -6;
    }
    if(x2 == x+1 && y2 == y+1 && board[x2][y2] > 0){
      board[x][y] = 0;
      board[x2][y2] = -6;
    }
    if(x2 == x && y2 == y+1 && board[x2][y2] > 0){
      board[x][y] = 0;
      board[x2][y2] = -6;
    }
    if(x2 == x-1 && y2 == y+1 && board[x2][y2] > 0){
      board[x][y] = 0;
      board[x2][y2] = -6;
    }
    if(x2 == x+1 && y2 == y-1 && board[x2][y2] > 0){
      board[x][y] = 0;
      board[x2][y2] = -6;
    }
    if(x2 == x-1 && y2 == y && board[x2][y2] > 0){
      board[x][y] = 0;
      board[x2][y2] = -6;
    }
    if(x2 == x-1 && y2 == y-1 && board[x2][y2] > 0){
      board[x][y] = 0;
      board[x2][y2] = -6;
    }
    if(x2 == x && y2 == y-1 && board[x2][y2] > 0){
      board[x][y] = 0;
      board[x2][y2] = -6;
    }
    else{
      printf("Move Not Valid");
    }
  }
  }
}

int main(void) {
printf("Welcome to Chess in C.\n\n");  
bool turn = true, game = true;
int chess[8][8];
size_t count;
char *line = malloc(100);
char *f, *f1;
int x, y, x1, y1, *pos, *pos1, menu, i=0, j=0;
int  t=0,totalNums,totalNum,r=0;
FILE *boardI, *boardO;
boardI = fopen("board.csv", "r");
boardO = fopen("board.csv", "w");

if (boardI == NULL) 
    { 
        printf("Could not open file board.csv"); 
        return 0; 
    }   
while(getline(&line, &count, boardI)!=-1) {
        for (; count > 0; count--, r++)
            sscanf(line, "%d", &chess[i][j]);
        t++;
    }
    totalNums = t;
    totalNum = r;
    for (i=0 ; i<totalNums ; t++) {
      for (j=0 ; j<totalNum ; r++) {
        printf("\n%d",  chess[i][j]);
      }
    }
    fclose(boardI);
    return 0;


  while(game == true){
    if(turn == true){
      printf("White's Turn\n");
      printf ("What action would you like to perform?\n1.Move\n2.Capture\n3.Show Board\n4.Quit\n");
      scanf ("%d",&menu);
      if(menu == 1){
       printf("Please state coordinates of piece location and coordinates to move?\nExample Format(h\n2\nto\nh\n4)");
        scanf("%c",f);
        scanf("%d",pos);
        printf("to");
        scanf("%c",f1);
        scanf("%d",pos1);
        x = *pos;
        x1 = *pos1;
        if(*f == 'a')
          y = 0;
        if(*f == 'b')
          y = 1;
        if(*f == 'c')
          y = 2;
        if(*f == 'd')
          y = 3;
        if(*f == 'e')
          y = 4;
        if(*f == 'f')
          y = 5;
        if(*f == 'g')
          y = 6;
        if(*f == 'h')
          y = 7;   
        if(*f1 == 'a')
          y1 = 0;
        if(*f1 == 'b')
          y1 = 1;
        if(*f1 == 'c')
          y1 = 2;
        if(*f1 == 'd')
          y1 = 3;
        if(*f1 == 'e')
          y1 = 4;
        if(*f1 == 'f')
          y1 = 5;
        if(*f1 == 'g')
          y1 = 6;
        if(*f1 == 'h')
          y1 = 7;               
        if(chess[x][y]>0){
          mv(x,y,x1,y1,chess);
        }
        else 
        printf("No White Pieces at current position, Please select another position.\n");
        setTurn(turn);
      }
      if(menu == 2){
        printf("Please state coordinates of piece location and coordinates to move?\nExample Format(h\n2\nto\nh\n4)");
        scanf("%c",f);
        scanf("%d",pos);
        printf("to");
        scanf("%c",f1);
        scanf("%d",pos1);
        x = *pos;
        x1 = *pos1;
        if(*f == 'a')
          y = 0;
        if(*f == 'b')
          y = 1;
        if(*f == 'c')
          y = 2;
        if(*f == 'd')
          y = 3;
        if(*f == 'e')
          y = 4;
        if(*f == 'f')
          y = 5;
        if(*f == 'g')
          y = 6;
        if(*f == 'h')
          y = 7;   
        if(*f1 == 'a')
          y1 = 0;
        if(*f1 == 'b')
          y1 = 1;
        if(*f1 == 'c')
          y1 = 2;
        if(*f1 == 'd')
          y1 = 3;
        if(*f1 == 'e')
          y1 = 4;
        if(*f1 == 'f')
          y1 = 5;
        if(*f1 == 'g')
          y1 = 6;
        if(*f1 == 'h')
          y1 = 7;               
        if(chess[x][y]>0){
          cp(x,y,x1,y1,chess);
        }
        else 
        printf("No White Pieces at current position, Please select another position.\n");
        setTurn(turn);
      }
      if(menu == 3){
        show(chess);
        printf ("What action would you like to perform?\n1.Move\n2.Capture\n3.Show Board\n4.Quit\n");
        scanf ("%d",&menu);
      }
      if(menu == 4){
        game = false;
      }
      else{
        printf("Action not valid please select one of the options below.\n1.Move\n2.Capture\n3.Show Board\n4.Quit\n");
        scanf ("%d",&menu);
      }
    }  

    if(turn == false){
      printf("Black's Turn\n");
      printf ("What action would you like to perform?\n1.Move\n2.Capture\n3.Show Board\n4.Quit\n");
      scanf ("%d",&menu);
      if(menu == 1){
        printf("Please state coordinates of piece location and coordinates to move?\nExample Format(h\n2\nto\nh\n4)");
        scanf("%c",f);
        scanf("%d",pos);
        printf("to");
        scanf("%c",f1);
        scanf("%d",pos1);
        x = *pos;
        x1 = *pos1;
        if(*f == 'a')
          y = 0;
        if(*f == 'b')
          y = 1;
        if(*f == 'c')
          y = 2;
        if(*f == 'd')
          y = 3;
        if(*f == 'e')
          y = 4;
        if(*f == 'f')
          y = 5;
        if(*f == 'g')
          y = 6;
        if(*f == 'h')
          y = 7;   
        if(*f1 == 'a')
          y1 = 0;
        if(*f1 == 'b')
          y1 = 1;
        if(*f1 == 'c')
          y1 = 2;
        if(*f1 == 'd')
          y1 = 3;
        if(*f1 == 'e')
          y1 = 4;
        if(*f1 == 'f')
          y1 = 5;
        if(*f1 == 'g')
          y1 = 6;
        if(*f1 == 'h')
          y1 = 7;               
        if(chess[x][y]<0){
          mv(x,y,x1,y1,chess);
        }
        else 
        printf("No Black Pieces at current position, Please select another position.\n");
        setTurn(turn);
      }
      if(menu == 2){
        printf("Please state coordinates of piece location and coordinates to move?\nExample Format(h\n2\nto\nh\n4)");
        scanf("%c",f);
        scanf("%d",pos);
        printf("to");
        scanf("%c",f1);
        scanf("%d",pos1);
        x = *pos;
        x1 = *pos1;
        if(*f == 'a')
          y = 0;
        if(*f == 'b')
          y = 1;
        if(*f == 'c')
          y = 2;
        if(*f == 'd')
          y = 3;
        if(*f == 'e')
          y = 4;
        if(*f == 'f')
          y = 5;
        if(*f == 'g')
          y = 6;
        if(*f == 'h')
          y = 7;   
        if(*f1 == 'a')
          y1 = 0;
        if(*f1 == 'b')
          y1 = 1;
        if(*f1 == 'c')
          y1 = 2;
        if(*f1 == 'd')
          y1 = 3;
        if(*f1 == 'e')
          y1 = 4;
        if(*f1 == 'f')
          y1 = 5;
        if(*f1 == 'g')
          y1 = 6;
        if(*f1 == 'h')
          y1 = 7;               
        if(chess[x][y]<0){
          cp(x,y,x1,y1,chess);
        }
        else 
        printf("No Black Pieces at current position, Please select another position.\n");
        setTurn(turn);
      }
      if(menu == 3){
        show(chess);
        printf ("What action would you like to perform?\n1.Move\n2.Capture\n3.Show Board\n4.Quit\n");
        scanf ("%d",&menu);
      }
      if(menu == 4){
        game = false;
      }
      else{
        printf("Action not valid please select one of the options below.\n1.Move\n2.Capture\n3.Show Board\n4.Quit\n");
        scanf ("%d",&menu);
      }
      
    }
  }

}