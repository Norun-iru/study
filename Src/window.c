#include <windows.h>

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance,LPSTR lpszCmdLine, int nCmdShow){

for(int i = 0; i < 5; i++){
    MessageBox(NULL, TEXT("ウイルスに感染しました。"), TEXT("警告"), MB_ICONHAND);
}
    return 0;
}