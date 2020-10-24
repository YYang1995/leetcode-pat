#include<stdio.h>
#include<WinSock2.h>
#include<iostream>
#pragma comment(lib,"ws2_32.lib")

//链接时加上  -lwsock32 
int main()
{
    WSADATA wsaData;
    WSAStartup(MAKEWORD(2,2),&wsaData);

    SOCKET servSock =socket(PF_INET,SOCK_STREAM,IPPROTO_TCP);

    sockaddr_in sockAddr;
    memset(&sockAddr,0,sizeof(sockaddr));
    sockAddr.sin_family=PF_INET;
    sockAddr.sin_addr.s_addr=inet_addr("127.0.0.1");
    sockAddr.sin_port=htons(1234);
    bind(servSock,(SOCKADDR*)&sockAddr,sizeof(SOCKADDR));
    
    listen(servSock,20);

    SOCKADDR clintAddr;
    int nSize=sizeof(SOCKADDR);
    SOCKET clntSock=accept(servSock,(SOCKADDR*)&clintAddr,&nSize);  //阻塞

    char recv_buffer[1024];
    char send_buffer[1024];
    int strLen=recv(clntSock,recv_buffer,1024,0);
    std::cout<<"received message is :"<<recv_buffer<<std::endl;
    send(clntSock,recv_buffer,strLen,0);  //复读机

    closesocket(clntSock);
    closesocket(servSock);

    WSACleanup();

    return 0;
}