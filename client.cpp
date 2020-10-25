#include<stdio.h>
#include<stdlib.h>
#include<WinSock2.h>
#include<iostream>
#pragma comment(lib,"ws2_32.lib")    //编译时加载lib

//链接时加上  -lwsock32 
int main()
{
    WSADATA wsaData;
    WSAStartup(MAKEWORD(2,2),&wsaData);     //将ws2_32.lib有关的信息写入wsaData

    SOCKET sock=socket(PF_INET,SOCK_STREAM,IPPROTO_TCP);

    sockaddr_in sockAddr;
    memset(&sockAddr,0,sizeof(sockAddr));
    sockAddr.sin_family=PF_INET;
    sockAddr.sin_addr.s_addr=inet_addr("127.0.0.1"); //inet_addr点分十进制字符串转换为网络字节序整数
    sockAddr.sin_port=htons(1234);
    connect(sock,(SOCKADDR*)&sockAddr,sizeof(SOCKADDR));

    char send_buffer[1024]={0};
    char recv_buffer[1024]={0};
    std::cout<<"please input message"<<std::endl;
    std::cin>>send_buffer;
    //recv(sock,recv_buffer,MAXBYTE,0);
    send(sock,send_buffer,strlen(send_buffer),0);

    recv(sock,recv_buffer,1024,0);
    printf("receive message is: %s",recv_buffer);
    closesocket(sock);

    WSACleanup();

    system("pause");
}