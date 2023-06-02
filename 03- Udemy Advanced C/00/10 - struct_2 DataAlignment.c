#include <stdio.h>
#include <stdint.h>
#include <conio.h>

typedef struct DataSet{
	int8_t  data1;
	int32_t data2;
	int8_t  data3;
	int16_t data4;
}DataSet_t;
#pragma pack(1)
typedef struct DataSet_packed{
	int8_t  data1;
	int32_t data2;
	int8_t  data3;
	int16_t data4;
}DataSet_packed_t;

void print_struct_bytes(uint8_t*, uint8_t);

int main(void){
	struct DataSet data;
	struct DataSet_packed data_packed;

	data.data1  = 0x11;
	data.data2  = 0XFFFFEEEE;
	data.data3  = 0x22;
	data.data4  = 0xABCD;

	data_packed.data1  = 0x11;
	data_packed.data2  = 0XFFFFEEEE;
	data_packed.data3  = 0x22;
	data_packed.data4  = 0xABCD;

    print_struct_bytes((uint8_t*)&data, sizeof(struct DataSet));
	printf("Total memory consumed by this struct variable = %u\n",sizeof(struct DataSet));

    print_struct_bytes((uint8_t*)&data_packed, sizeof(struct DataSet_packed));
	printf("Total memory consumed by this struct variable = %u\n",sizeof(struct DataSet_packed));

    fflush(stdout);		fflush(stdin);
    while(!getch());
	return 0;
}

void print_struct_bytes(uint8_t *ptr, uint8_t size){
	printf("Memory address       Content \n");
	printf("==============================\n");
	for(uint32_t i = 0 ; i < size ; i++, ptr++){
		printf("%p ,   %X\n",ptr,*ptr);
	}
}
