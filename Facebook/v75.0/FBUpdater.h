/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:26 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
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
-(FBUpdateDataFetcher *)dataFetcher;
-(void)setDataFetcher:(FBUpdateDataFetcher *)arg1 ;
-(id)initWithUserSession:(id)arg1 forceManualUpdate:(BOOL)arg2 ;
-(void)registerDefaultDataFetcherWithUserSession:(id)arg1 ;
-(id)initWithDataFetcher:(id)arg1 delegate:(id)arg2 forceManualUpdate:(BOOL)arg3 ;
-(BOOL)runService;
-(BOOL)forceFetchingData;
-(unsigned long long)checkInterval;
-(void)setCheckInterval:(unsigned long long)arg1 ;
-(void)registerDefaultDelegate;
-(id)registeredDefaultUpdateCoordinator;
-(id)registeredDefaultUpdateController;
-(void)stopService;
-(void)setDelegate:(id<FBUpdaterDelegate>)arg1 ;
-(id<FBUpdaterDelegate>)delegate;
-(NSDate *)lastUpdateDate;
@end
