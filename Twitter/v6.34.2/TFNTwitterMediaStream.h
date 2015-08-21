/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:47 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Twitter/TFNTwitterStream.h>

@class TFNTwitterUser, NSMutableArray;

@interface TFNTwitterMediaStream : TFNTwitterStream {

	BOOL _isAtEnd;
	long long _maxIDWaterMark;
	long long _minIDWaterMark;
	BOOL _isLoadingTop;
	BOOL _isLoadingBottom;
	BOOL _isPolling;
	BOOL _shouldLoadWhenPollingStarted;
	TFNTwitterUser* _user;
	NSMutableArray* _streamObjects;

}

@property (assign,nonatomic,__weak) TFNTwitterUser * user;                   //@synthesize user=_user - In the implementation block
@property (nonatomic,retain) NSMutableArray * streamObjects;                 //@synthesize streamObjects=_streamObjects - In the implementation block
@property (assign,nonatomic) BOOL isLoadingTop;                              //@synthesize isLoadingTop=_isLoadingTop - In the implementation block
@property (assign,nonatomic) BOOL isLoadingBottom;                           //@synthesize isLoadingBottom=_isLoadingBottom - In the implementation block
@property (assign,nonatomic) BOOL isPolling;                                 //@synthesize isPolling=_isPolling - In the implementation block
@property (assign,nonatomic) BOOL shouldLoadWhenPollingStarted;              //@synthesize shouldLoadWhenPollingStarted=_shouldLoadWhenPollingStarted - In the implementation block
-(BOOL)loadBottomWithSource:(long long)arg1 ;
-(BOOL)isLoadingTop;
-(NSMutableArray *)streamObjects;
-(BOOL)loadTopWithSource:(long long)arg1 ;
-(void)removeStreamObject:(id)arg1 ;
-(BOOL)isLoadingBottom;
-(void)setStreamObjects:(NSMutableArray *)arg1 ;
-(BOOL)canLoadGap;
-(id)emptyStreamMessage;
-(void)setIsLoadingTop:(BOOL)arg1 ;
-(void)setIsLoadingBottom:(BOOL)arg1 ;
-(void)_postStreamUpdateNotification:(long long)arg1 count:(unsigned long long)arg2 source:(long long)arg3 error:(id)arg4 ;
-(void)_compositionWasSent;
-(unsigned long long)_didReceiveStatuses:(id)arg1 loadingTop:(BOOL)arg2 ;
-(void)_didReceiveError:(id)arg1 loadingTop:(BOOL)arg2 ;
-(void)setIsPolling:(BOOL)arg1 ;
-(BOOL)shouldLoadWhenPollingStarted;
-(void)setShouldLoadWhenPollingStarted:(BOOL)arg1 ;
-(BOOL)isPolling;
-(void)dealloc;
-(id)init;
-(id)displayName;
-(TFNTwitterUser *)user;
-(void)setUser:(TFNTwitterUser *)arg1 ;
-(void)stopPolling;
-(void)startPolling;
@end

