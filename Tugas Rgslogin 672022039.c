#include <stdio.h>
#include <string.h>

int main(){
    char nama[8], pas[8];
    int ulang = 0;

    for(int i=0; i<3; i++){
        printf(" \nSilahkan Login\n");
        printf("\nMasukkan username anda :");
        scanf("%s", &nama);
        printf("\nMasukkan password anda : ");
        scanf("%s", &pas);
        if ((strcmp(nama,"tin")==0)&&(strcmp(pas,"waruwu")==0)) {
            break;
        } else {
            printf("Maaf password atau username anda salah\n");
            ulang = ulang + 1;
        }
    }
    if(ulang<3){
        printf("\nAnda telah berhasil login.");
    } else {
        printf("Sudah melebihi batas login, tidak bisa login lagi");
    }
}
