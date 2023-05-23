#ifndef DATATYPE_H_INCLUDED
#define DATATYPE_H_INCLUDED

#include <stdint.h>

typedef int8_t  s8;
typedef int16_t s16;
typedef int32_t s32;


typedef uint8_t  u8;
typedef uint16_t u16;
typedef uint32_t u32;


typedef float f32;
typedef double f64;

typedef enum{
    Game_True = (u8)0xAA,
    Game_False = (u8)0x55
}Game_tenuBool;

typedef enum{
    Game_X = 'X',
    Game_O = 'O',
    Game_N = 'N',
    Game_C = '\0'
}Game_tenuValue;

#endif // DATATYPE_H_INCLUDED
