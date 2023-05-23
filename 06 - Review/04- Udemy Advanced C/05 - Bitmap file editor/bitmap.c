#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "datatype.h"
#include "bitmap.h"

Bitmap_tstrImg strBMP;

void BMP_vidDrawPoint(u16 u16X, u16 u16Y, Bitmap_tenuColors u16Color){
    u16 i = u16X + u16Y * strBMP.strDIP_Header.m_u32Width;
    switch(u16Color){
        case WHITE:
            strBMP.astrPixels[i].m_u8Blue  = 255;
            strBMP.astrPixels[i].m_u8Green = 255;
            strBMP.astrPixels[i].m_u8Red   = 255;
            break;
        case BLACK:
            strBMP.astrPixels[i].m_u8Blue  = 0;
            strBMP.astrPixels[i].m_u8Green = 0;
            strBMP.astrPixels[i].m_u8Red   = 0;
            break;
        case RED:
            strBMP.astrPixels[i].m_u8Blue  = 0;
            strBMP.astrPixels[i].m_u8Green = 0;
            strBMP.astrPixels[i].m_u8Red   = 255;
            break;
        case GREEN:
            strBMP.astrPixels[i].m_u8Blue  = 0;
            strBMP.astrPixels[i].m_u8Green = 255;
            strBMP.astrPixels[i].m_u8Red   = 0;
            break;
        case BLUE:
            strBMP.astrPixels[i].m_u8Blue  = 255;
            strBMP.astrPixels[i].m_u8Green = 0;
            strBMP.astrPixels[i].m_u8Red   = 0;
            break;
        default:
            strBMP.astrPixels[i].m_u8Blue  = 0;
            strBMP.astrPixels[i].m_u8Green = 0;
            strBMP.astrPixels[i].m_u8Red   = 0;
    }
}

void BMP_vidSetContrast(f32 f32Perc){
    for(u16 i = strBMP.strDIP_Header.m_u32Width*strBMP.strDIP_Header.m_u32Height ; i-- ; ){
        strBMP.astrPixels[i].m_u8Blue  = (u8)(strBMP.astrPixels[i].m_u8Blue  * f32Perc);
        strBMP.astrPixels[i].m_u8Green = (u8)(strBMP.astrPixels[i].m_u8Green * f32Perc);
        strBMP.astrPixels[i].m_u8Red   = (u8)(strBMP.astrPixels[i].m_u8Red   * f32Perc);
    }
}
