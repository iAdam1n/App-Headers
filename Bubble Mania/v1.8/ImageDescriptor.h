/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:58:14 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/0CF72264-5488-4FD5-B700-EF786D177983/BubbleMania.app/BubbleMania
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <BubbleMania/BubbleMania-Structs.h>
@class PixelBuffer, BitImage, NSMutableArray;

@interface ImageDescriptor : NSObject {

	BOOL compressed;
	int width;
	int height;
	unsigned _internalFormat;
	unsigned _pixelDataType;
	PixelBuffer* pixelBuffer;
	BitImage* mask;
	NSMutableArray* compressedData;
	SCD_Struct_S812 header;

}

@property (assign,nonatomic) SCD_Struct_S813 header; 
@property (assign,nonatomic) int width; 
@property (assign,nonatomic) int height; 
@property (assign,nonatomic) unsigned internalFormat;                      //@synthesize internalFormat=_internalFormat - In the implementation block
@property (assign,nonatomic) unsigned pixelDataType;                       //@synthesize pixelDataType=_pixelDataType - In the implementation block
@property (nonatomic,retain) PixelBuffer * pixelBuffer; 
@property (nonatomic,retain) BitImage * mask; 
@property (assign,nonatomic) BOOL compressed; 
@property (nonatomic,retain) NSMutableArray * compressedData; 
-(unsigned)pixelDataType;
-(void)constructPixelBuffer;
-(void)setCompressedData:(NSMutableArray *)arg1 ;
-(void)setPixelBuffer:(PixelBuffer *)arg1 ;
-(void)setPixelDataType:(unsigned)arg1 ;
-(PixelBuffer *)pixelBuffer;
-(void)dealloc;
-(BitImage *)mask;
-(void)setMask:(BitImage *)arg1 ;
-(int)width;
-(int)height;
-(void)setWidth:(int)arg1 ;
-(void)setHeight:(int)arg1 ;
-(BOOL)compressed;
-(void)setCompressed:(BOOL)arg1 ;
-(unsigned)internalFormat;
-(void)setInternalFormat:(unsigned)arg1 ;
-(NSMutableArray *)compressedData;
-(void)setHeader:(SCD_Struct_S813)arg1 ;
-(SCD_Struct_S813)header;
@end

