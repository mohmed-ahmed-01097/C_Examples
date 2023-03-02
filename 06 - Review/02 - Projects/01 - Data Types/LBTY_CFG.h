/********************************************************/
/* Author      : MAAM					*/
/* Version     : v02					*/
/* date        : 02/03/2023				*/
/********************************************************/

#ifndef LBTY_CFG_H
#define LBTY_CFG_H

typedef unsigned char           u8 ;
typedef unsigned short int      u16;
typedef unsigned long  int      u32;
typedef unsigned long long int  u64;

typedef signed   char           s8 ;
typedef signed   short int      s16;
typedef signed   long  int      s32;
typedef signed   long long int  s64;

typedef float        		f32;
typedef double          	f64;

#define MAX_U8		0xFFU
#define MAX_S8		0x7F
#define MIN_S8		0x80

#define MAX_U16		0xFFFFU
#define MAX_S16		0x7FFF
#define MIN_S16		0x8000

#define MAX_U32		0xFFFFFFFFU
#define MAX_S32		0x7FFFFFFF
#define MIN_S32		0x80000000

#endif // LBTY_CFG_H
