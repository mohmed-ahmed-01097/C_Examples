#include <stdio.h>
#include <stdint.h>
#include <conio.h>

struct Packet{
	uint32_t crc        : 2;
	uint32_t status     : 1;
	uint32_t payload    : 12;
	uint32_t bat        : 3;
	uint32_t sensor     : 3;
	uint32_t longAddr   : 8;
	uint32_t shortAddr  : 2;
	uint32_t addrMode   : 1;
};

int main(void){

   uint32_t packetValue ;
   printf("Enter the 32bit packet value:");
   scanf("%X",&packetValue);

   struct Packet packet;

   packet.crc 		=   (packetValue      );
   packet.status 	=   (packetValue >> 2 );
   packet.payload   =   (packetValue >> 3 );
   packet.bat       =   (packetValue >> 15);
   packet.sensor    =   (packetValue >> 18);
   packet.longAddr  =   (packetValue >> 21);
   packet.shortAddr =   (packetValue >> 29);
   packet.addrMode  =   (packetValue >> 31);

   printf("crc      :%#05x\n",packet.crc);
   printf("status   :%#05x\n",packet.status);
   printf("payload  :%#05x\n",packet.payload);
   printf("bat      :%#05x\n",packet.bat);
   printf("sensor   :%#05x\n",packet.sensor);
   printf("longAddr :%#05x\n",packet.longAddr);
   printf("shortAddr:%#05x\n",packet.shortAddr);
   printf("addrMode :%#05x\n",packet.addrMode);

   printf("Size of struct is %u\n",sizeof(packet));


    fflush(stdout);		fflush(stdin);
    while(!getch());
	return 0;
}
