#include <stdio.h>
#include <stdint.h>
#include <conio.h>

struct Packet{
	uint8_t crc;
	uint8_t status;
	uint16_t payload;
	uint8_t bat;
	uint8_t sensor;
	uint8_t longAddr;
	uint8_t shortAddr;
	uint8_t addrMode;
};

int main(void){

   uint32_t packetValue ;
   printf("Enter the 32bit packet value:");
   scanf("%X",&packetValue);

   struct Packet packet;

   packet.crc 		=   (uint8_t) ((packetValue      ) & 0x003);
   packet.status 	=   (uint8_t) ((packetValue >> 2 ) & 0x001);
   packet.payload   =   (uint16_t)((packetValue >> 3 ) & 0xFFF);
   packet.bat       =   (uint8_t) ((packetValue >> 15) & 0x007);
   packet.sensor    =   (uint8_t) ((packetValue >> 18) & 0x007);
   packet.longAddr  =   (uint8_t) ((packetValue >> 21) & 0x0FF);
   packet.shortAddr =   (uint8_t) ((packetValue >> 29) & 0x003);
   packet.addrMode  =   (uint8_t) ((packetValue >> 31) & 0x001);

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
