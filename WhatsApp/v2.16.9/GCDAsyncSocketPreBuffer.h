/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:47:04 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/342EE397-EC3B-4D13-968C-80EF1D13592D/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface GCDAsyncSocketPreBuffer : NSObject {

	char* preBuffer;
	unsigned long long preBufferSize;
	char* readPointer;
	char* writePointer;

}
-(void)ensureCapacityForWrite:(unsigned long long)arg1 ;
-(void)getReadBuffer:(char**)arg1 availableBytes:(unsigned long long*)arg2 ;
-(void)didRead:(unsigned long long)arg1 ;
-(char*)writeBuffer;
-(void)getWriteBuffer:(char**)arg1 availableSpace:(unsigned long long*)arg2 ;
-(void)didWrite:(unsigned long long)arg1 ;
-(void)dealloc;
-(id)initWithCapacity:(unsigned long long)arg1 ;
-(void)reset;
-(unsigned long long)availableSpace;
-(char*)readBuffer;
-(unsigned long long)availableBytes;
@end

