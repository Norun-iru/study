#include <stdio.h>
#include <conio.h>
#include <windows.h>
void  main( )
{
  char  muki='L';                               // 鳥の向き(L=左,R=右)
  int   kn;                                     // 押されたキーの番号

    while ( 1 )                                 // 無限ループ
      {
        system("cls");                          // 画面消去
        if ( muki=='L' )
          {
            printf(" -------------------    ------------------- \n");
            printf("|                   | |                    |\n");
            printf("|                   | |                    |\n");
            printf("|                   | |                    |\n");
            printf("|                   | |                    |\n");
            printf("|                   | |                    |\n");
            printf("|                   | |                    |\n");
            printf("|                   | |                    |\n");
            printf(" -------------------    ------------------- \n");
          }
        else
         {
            printf(" ----------   ---------- \n");
            printf("|          | |          |\n");
            printf("|          | |          |\n");
            printf("|          | |          |\n");
            printf(" ----------   ---------- \n");
         }

        printf("\n");
        printf("←キーで左向き，→キーで右向き，Escキーで終了\n");

        kn=getch( );                            // キーが押されるのを待つ
        if ( kn==27 ) break;                    // Escキーが押されたら終わり
        if ( kn!= 0 ) continue;                 // 特殊キーでない

        kn=getch( );                            // 特殊キーの番号を得る
        if ( kn==77 ) muki='R';                 // →キーが押されたら右向き
        if ( kn==75 ) muki='L';                 // ←キーが押されたら左向き
      }
}