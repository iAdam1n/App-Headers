/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:56 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


#import <Messenger/Messenger-Structs.h>
@class NSArray, NSMutableData;

@interface FBProgressiveJPEG : NSObject {

	unsigned long long _srcFlag;
	unsigned long long _width;
	unsigned long long _height;
	unsigned long long _numberOfComponentsInOutput;
	unsigned long long _format;
	unsigned long long _colorSpace;
	BOOL _streamBasedInstance;
	NSArray* _scanOffsets;
	BOOL _parsedHeader;
	BOOL _reachedEoF;
	jpeg_decompress_struct* _cinfo;
	NSMutableData* _dataBuffer;
	NSMutableData* _tempBuffer;
	unsigned long long _targetFlags;
	FBProgressiveJPEGErrorManager* _jerr;
	mutex _decodeMutex;
	mutex _dataBufferMutex;
	mutex _tempBufferMutex;
	unsigned long long _masterScan;
	unsigned long long _decodeScan;
	Optional<FBPJPEGEncodingInfo> _encodingInfo;

}

@property (nonatomic,readonly) unsigned long long srcFlag;                                 //@synthesize srcFlag=_srcFlag - In the implementation block
@property (nonatomic,readonly) unsigned long long width;                                   //@synthesize width=_width - In the implementation block
@property (nonatomic,readonly) unsigned long long height;                                  //@synthesize height=_height - In the implementation block
@property (nonatomic,readonly) unsigned long long numberOfComponentsInOutput;              //@synthesize numberOfComponentsInOutput=_numberOfComponentsInOutput - In the implementation block
@property (nonatomic,readonly) unsigned long long format;                                  //@synthesize format=_format - In the implementation block
@property (nonatomic,readonly) unsigned long long colorSpace;                              //@synthesize colorSpace=_colorSpace - In the implementation block
@property (nonatomic,readonly) BOOL streamBasedInstance;                                   //@synthesize streamBasedInstance=_streamBasedInstance - In the implementation block
@property (nonatomic,copy,readonly) NSArray * scanOffsets; 
-(BOOL)_readHeaderWithError:(id*)arg1 ;
-(void)_voidErrorHandler;
-(id)_initForData:(id)arg1 enableStreaming:(BOOL)arg2 withSourceImageFlag:(unsigned long long)arg3 ;
-(id)initForStreamWithSourceImageFlag:(unsigned long long)arg1 ;
-(unsigned char)numberOfScans;
-(unsigned long long)_scanCountShouldCountEoF:(BOOL)arg1 ;
-(id)copyDataBuffer_locked;
-(BOOL)_prepDecodeWithData:(id)arg1 smooth:(BOOL)arg2 doFancyUpsampling:(BOOL)arg3 scan:(unsigned long long)arg4 buffer:(BOOL)arg5 error:(id*)arg6 ;
-(id)_decodeImageWithError:(id*)arg1 ;
-(unsigned long long)lowestImageFlagThatIsSupportedForImageFlag:(unsigned long long)arg1 ;
-(id)_decodeImageScaledTargetWidth:(unsigned long long)arg1 targetHeight:(unsigned long long)arg2 decodeScan:(unsigned long long)arg3 withError:(id*)arg4 ;
-(long long)_appendBytes:(id)arg1 withError:(id*)arg2 ;
-(unsigned long long)_completeScanOffsetInBuffer:(id)arg1 ;
-(long long)bestScan;
-(NSArray *)scanOffsets;
-(id)initWithData:(id)arg1 sourceFlag:(unsigned long long)arg2 ;
-(id)initForStream;
-(id)decodeImageWithError:(id*)arg1 ;
-(id)decodeIncrementalToImageFlag:(unsigned long long)arg1 downscale:(BOOL)arg2 withError:(id*)arg3 ;
-(id)updateBytes:(id)arg1 ;
-(id)getBestImageFlagWithNewBytes:(id)arg1 desiredImageFlag:(unsigned long long)arg2 ;
-(id)binaryRepresentation;
-(id)fullBinaryRepresentation;
-(unsigned long long)srcFlag;
-(unsigned long long)numberOfComponentsInOutput;
-(BOOL)streamBasedInstance;
-(unsigned long long)colorSpace;
-(void)dealloc;
-(unsigned long long)width;
-(unsigned long long)height;
-(unsigned long long)format;
@end

