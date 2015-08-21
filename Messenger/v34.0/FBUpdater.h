/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:45 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@protocol FBUpdaterDelegate;
@class NSDate, FBUpdateDataFetcher;

@interface FBUpdater : NSObject {

	unsigned long long _checkInterval;
	NSDate* _lastUpdateDate;
	FBUpdateDataFetcher* _dataFetcher;
	id<FBUpdaterDelegate> _delegate;

}

@property (assign,nonatomic) unsigned long long checkInterval;                   //@synthesize checkInterval=_checkInterval - In the implementation block
@property (nonatomic,readonly) NSDate * lastUpdateDate;                          //@synthesize lastUpdateDate=_lastUpdateDate - In the implementation block
@property (nonatomic,retain) FBUpdateDataFetcher * dataFetcher;                  //@synthesize dataFetcher=_dataFetcher - In the implementation block
@property (assign,nonatomic,__weak) id<FBUpdaterDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)initWithUserSession:(id)arg1 ;
-(void)registerDefaultDataFetcherWithUserSession:(id)arg1 ;
-(void)registerDefaultDelegate;
-(id)registeredDefaultUpdateCoordinator;
-(id)registeredDefaultUpdateController;
-(id)initWithDataFetcher:(id)arg1 delegate:(id)arg2 ;
-(BOOL)runService;
-(BOOL)forceFetchingData;
-(unsigned long long)checkInterval;
-(void)setCheckInterval:(unsigned long long)arg1 ;
-(FBUpdateDataFetcher *)dataFetcher;
-(void)setDataFetcher:(FBUpdateDataFetcher *)arg1 ;
-(void)setDelegate:(id<FBUpdaterDelegate>)arg1 ;
-(id<FBUpdaterDelegate>)delegate;
-(NSDate *)lastUpdateDate;
-(void)stopService;
@end

