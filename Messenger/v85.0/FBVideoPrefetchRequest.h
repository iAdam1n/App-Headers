/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:27 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBPrefetchVideoDownloader;

@interface FBVideoPrefetchRequest : NSObject {

	BOOL _inProgress;
	BOOL _useQueue;
	BOOL _prefetchedFirstChunk;
	FBPrefetchVideoDownloader* _prefetcher;

}

@property (nonatomic,readonly) FBPrefetchVideoDownloader * prefetcher;              //@synthesize prefetcher=_prefetcher - In the implementation block
@property (assign,nonatomic) BOOL inProgress;                                       //@synthesize inProgress=_inProgress - In the implementation block
@property (nonatomic,readonly) BOOL useQueue;                                       //@synthesize useQueue=_useQueue - In the implementation block
@property (assign,nonatomic) BOOL prefetchedFirstChunk;                             //@synthesize prefetchedFirstChunk=_prefetchedFirstChunk - In the implementation block
-(id)initWithPrefetcher:(id)arg1 useQueue:(BOOL)arg2 ;
-(FBPrefetchVideoDownloader *)prefetcher;
-(BOOL)useQueue;
-(BOOL)prefetchedFirstChunk;
-(void)setPrefetchedFirstChunk:(BOOL)arg1 ;
-(BOOL)inProgress;
-(void)setInProgress:(BOOL)arg1 ;
@end
