#ifndef BITMAP_H_INCLUDED
#define BITMAP_H_INCLUDED

#define MAX_WIDTH       1920
#define MAX_HEIGHT      1276

typedef enum{
  WHITE,
  BLACK,
  RED,
  GREEN,
  BLUE
}Bitmap_tenuColors;

#pragma pack(1)
typedef struct{
    u16 m_u16Signature;
    u32 m_u32FileSize;
    u32 Reversed;
    u32 m_u32Offset;
}Bitmap_tstrHeader;

typedef struct{
    u32 m_u32HeaderSize;
    u32 m_u32Width;
    u32 m_u32Height;
    u16 m_u16Planes;
    u16 m_u16Bitcount;
    u32 m_u32Compression;
    u32 m_u32ImgSize;
    u32 m_u32X_px;
    u32 m_u32Y_px;
    u32 m_u32UsedColors;
    u32 m_u32ImportantColors;
}Bitmap_tstrDIP_Header;

typedef struct{
    u8 m_u8Blue;
    u8 m_u8Green;
    u8 m_u8Red;
}Bitmap_tstrPixel;

typedef struct{
    Bitmap_tstrHeader strHeader;
    Bitmap_tstrDIP_Header strDIP_Header;
    Bitmap_tstrPixel astrPixels[MAX_WIDTH*MAX_HEIGHT];
}Bitmap_tstrImg;
#pragma pack(4)


void BMP_vidDrawPoint(u16 u16X, u16 u16Y, Bitmap_tenuColors u16Color);
void BMP_vidSetContrast(f32 f32Perc);

#endif // BITMAP_H_INCLUDED
