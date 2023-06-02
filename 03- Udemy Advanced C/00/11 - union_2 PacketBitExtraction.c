#include <stdio.h>
#include <stdint.h>
#include <conio.h>

union Packet{
	uint32_t packetValue;
	struct{
        uint32_t crc        : 2;
        uint32_t status     : 1;
        uint32_t payload    : 12;
        uint32_t bat        : 3;
        uint32_t sensor     : 3;
        uint32_t longAddr   : 8;
        uint32_t shortAddr  : 2;
        uint32_t addrMode   : 1;
	}packetFields;
};

int main(void){

   uint32_t packetValue ;
   printf("Enter the 32bit packet value:");
   scanf("%X",&packetValue);

   union Packet packet = {.packetValue = packetValue};

   printf("crc      :%#05x\n",packet.packetFields.crc);
   printf("status   :%#05x\n",packet.packetFields.status);
   printf("payload  :%#05x\n",packet.packetFields.payload);
   printf("bat      :%#05x\n",packet.packetFields.bat);
   printf("sensor   :%#05x\n",packet.packetFields.sensor);
   printf("longAddr :%#05x\n",packet.packetFields.longAddr);
   printf("shortAddr:%#05x\n",packet.packetFields.shortAddr);
   printf("addrMode :%#05x\n",packet.packetFields.addrMode);

   printf("Size of struct is %u\n",sizeof(packet));


    fflush(stdout);		fflush(stdin);
    while(!getch());
	return 0;
}
