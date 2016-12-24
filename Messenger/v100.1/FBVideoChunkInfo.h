/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:21 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Messenger/Messenger-Structs.h>
@interface FBVideoChunkInfo : NSObject {

	float _chunkProgress;
	double _uploadChunkTransferStartTime;
	unsigned long long _totalChunkBytes;
	unsigned long long _sentChunkBytes;
	NSRange _chunkRange;

}

@property (assign,nonatomic) double uploadChunkTransferStartTime;              //@synthesize uploadChunkTransferStartTime=_uploadChunkTransferStartTime - In the implementation block
@property (assign,nonatomic) unsigned long long totalChunkBytes;               //@synthesize totalChunkBytes=_totalChunkBytes - In the implementation block
@property (assign,nonatomic) unsigned long long sentChunkBytes;                //@synthesize sentChunkBytes=_sentChunkBytes - In the implementation block
@property (assign,nonatomic) float chunkProgress;                              //@synthesize chunkProgress=_chunkProgress - In the implementation block
@property (assign,nonatomic) NSRange chunkRange;                               //@synthesize chunkRange=_chunkRange - In the implementation block
-(unsigned long long)totalChunkBytes;
-(double)uploadChunkTransferStartTime;
-(void)setSentChunkBytes:(unsigned long long)arg1 ;
-(void)setChunkProgress:(float)arg1 ;
-(id)generateLoggingInfo:(BOOL)arg1 ;
-(void)setUploadChunkTransferStartTime:(double)arg1 ;
-(void)setTotalChunkBytes:(unsigned long long)arg1 ;
-(unsigned long long)sentChunkBytes;
-(float)chunkProgress;
-(NSRange)chunkRange;
-(void)setChunkRange:(NSRange)arg1 ;
@end
