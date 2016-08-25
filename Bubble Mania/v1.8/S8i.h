/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:58:13 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/0CF72264-5488-4FD5-B700-EF786D177983/BubbleMania.app/BubbleMania
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <BubbleMania/BubbleMania-Structs.h>
@interface S8i : NSObject {

	long long cachedWidth;
	long long cachedHeight;
	int cachedComponentFormat;
	BOOL errorLoading;
	void* pixelData;
	char* maskData;
	SCD_Struct_S810 maskHeader;
	SCD_Struct_S812 header;

}

@property (nonatomic,readonly) BOOL errorLoading; 
@property (assign,nonatomic) SCD_Struct_S813 header; 
@property (assign,nonatomic) void* pixelData; 
@property (assign,nonatomic) SCD_Struct_S810 maskHeader; 
@property (assign,nonatomic) char* maskData; 
+(BOOL)isIrregularGraphicsFormat:(id)arg1 ;
+(BOOL)maskHeaderIsValid:(SCD_Struct_S810)arg1 ;
-(id)initWithWidth:(int)arg1 height:(int)arg2 fileFormat:(int)arg3 componentFormat:(int)arg4 ;
-(Color)getPixelX:(int)arg1 Y:(int)arg2 ;
-(void)resizeImageToValidSizeWithFilter:(int)arg1 ;
-(void)resizeImageToWidth:(int)arg1 height:(int)arg2 filter:(int)arg3 ;
-(void)copyMask:(id)arg1 ;
-(SCD_Struct_S810)maskHeader;
-(char*)maskData;
-(void)freeColor;
-(void)freeMask;
-(void)create:(long long)arg1 h:(long long)arg2 fileFormat:(int)arg3 componentFormat:(int)arg4 keepMask:(BOOL)arg5 ;
-(void)loadPixelDataFromImage:(id)arg1 ;
-(id)initWithS8i:(id)arg1 copyMask:(BOOL)arg2 ;
-(Color)getBilinearPixelX:(float)arg1 Y:(float)arg2 ;
-(void)setPixelX:(int)arg1 Y:(int)arg2 color:(Color)arg3 ;
-(CGSize)nextValidSize;
-(unsigned)pixelDataType;
-(void)loadPixelDataFromImageWithDifferentSize:(id)arg1 uStart:(float*)arg2 vStart:(float*)arg3 uEnd:(float*)arg4 vEnd:(float*)arg5 ;
-(char*)takeControlOfMaskData;
-(id)toData;
-(long long)compareBySizeDescending:(id)arg1 ;
-(BOOL)errorLoading;
-(void)setMaskHeader:(SCD_Struct_S810)arg1 ;
-(void)setMaskData:(char*)arg1 ;
-(void)loadFile:(id)arg1 ;
-(void*)pixelData;
-(void)setPixelData:(void*)arg1 ;
-(void)dealloc;
-(id)initWithImage:(id)arg1 ;
-(void)blur;
-(int)internalFormat;
-(int)memoryUsage;
-(void)loadImage:(id)arg1 ;
-(id)initWithFile:(id)arg1 ;
-(void)setHeader:(SCD_Struct_S813)arg1 ;
-(SCD_Struct_S813)header;
@end

