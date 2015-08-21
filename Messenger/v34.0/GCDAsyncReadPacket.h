/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:33 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class NSMutableData, NSData;

@interface GCDAsyncReadPacket : NSObject {

	NSMutableData* buffer;
	unsigned long long startOffset;
	unsigned long long bytesDone;
	unsigned long long maxLength;
	double timeout;
	unsigned long long readLength;
	NSData* term;
	BOOL bufferOwner;
	unsigned long long originalBufferLength;
	long long tag;

}
-(id)initWithData:(id)arg1 startOffset:(unsigned long long)arg2 maxLength:(unsigned long long)arg3 timeout:(double)arg4 readLength:(unsigned long long)arg5 terminator:(id)arg6 tag:(long long)arg7 ;
-(void)ensureCapacityForAdditionalDataOfLength:(unsigned long long)arg1 ;
-(unsigned long long)optimalReadLengthWithDefault:(unsigned long long)arg1 shouldPreBuffer:(BOOL*)arg2 ;
-(unsigned long long)readLengthForNonTermWithHint:(unsigned long long)arg1 ;
-(unsigned long long)readLengthForTermWithHint:(unsigned long long)arg1 shouldPreBuffer:(BOOL*)arg2 ;
-(unsigned long long)readLengthForTermWithPreBuffer:(id)arg1 found:(BOOL*)arg2 ;
-(long long)searchForTermAfterPreBuffering:(long long)arg1 ;
@end

