#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<string.h>
void main(){
    int i,winsize;
    char send[50],recv[50];
    printf("Enter the window size");
    scanf("%d",&winsize);
    printf("Enter the data to be send ");
    fflush(stdin);
    scanf("%s",sender);

    for(i=0;i<winsize;i++){
        recv[i]=sender[i]
    }
    recv[i]=NULL;
    printf("Window size expanded");
    printf("Ack received");
    for(i=0;i<winsize;i++){
        printf("ack for: %d",i);
    }
    printf("message received: %s",receiver);
    printf("Window size shrinked");
}
