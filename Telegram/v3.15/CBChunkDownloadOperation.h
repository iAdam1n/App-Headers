/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:46:35 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/D20B482D-7A4B-420E-BEFA-D4B2B5C94752/Telegram.app/Telegram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Telegram/CBGenericDownloadOperation.h>

@interface CBChunkDownloadOperation : CBGenericDownloadOperation {

	long long _chunkIdx;
	/*^block*/id _chunkDownloadedBlock;

}

@property (assign,nonatomic) long long chunkIdx;                 //@synthesize chunkIdx=_chunkIdx - In the implementation block
@property (nonatomic,copy) id chunkDownloadedBlock;              //@synthesize chunkDownloadedBlock=_chunkDownloadedBlock - In the implementation block
-(void)successChunkDownload;
-(void)downloadChunk;
-(void)setChunkIdx:(long long)arg1 ;
-(void)setChunkDownloadedBlock:(id)arg1 ;
-(id)chunkDownloadedBlock;
-(long long)chunkIdx;
-(void)start;
-(id)clone;
@end
