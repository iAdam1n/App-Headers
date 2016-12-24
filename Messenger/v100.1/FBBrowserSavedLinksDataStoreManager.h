/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:25 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBUserSession, FBBrowserSavedLinksDataStoreManagerListenerAnnouncer, NSString, NSDate;

@interface FBBrowserSavedLinksDataStoreManager : NSObject {

	FBUserSession* _session;
	FBBrowserSavedLinksDataStoreManagerListenerAnnouncer* _announcer;
	int _count;
	NSString* _timeFrame;
	NSDate* _lastFetchTime;

}

@property (nonatomic,readonly) int count;                              //@synthesize count=_count - In the implementation block
@property (nonatomic,copy,readonly) NSString * timeFrame;              //@synthesize timeFrame=_timeFrame - In the implementation block
@property (nonatomic,readonly) NSDate * lastFetchTime;                 //@synthesize lastFetchTime=_lastFetchTime - In the implementation block
-(NSDate *)lastFetchTime;
-(NSString *)timeFrame;
-(void)fetchSavedLinkCountData;
-(int)count;
-(id)initWithSession:(id)arg1 ;
-(void)addListener:(id)arg1 ;
-(void)removeListener:(id)arg1 ;
@end
