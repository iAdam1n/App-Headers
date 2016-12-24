/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:00 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBVideoHomeJewelController.h>
#import <Facebook/FBVideoHomeGuideDataFetcherListener.h>

@class FBVideoHomeSession, FBVideoHomeJewelProxyDataSource, NSString;

@interface FBVideoHomeJewelManager : NSObject <FBVideoHomeJewelController, FBVideoHomeGuideDataFetcherListener> {

	FBVideoHomeSession* _videoHomeSession;
	FBVideoHomeJewelProxyDataSource* _jewelProxy;

}

@property (nonatomic,readonly) id<FBJewelNetworkDataSource> jewelDataSource; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) unsigned long long badgeCount; 
-(id)buildDebugInfo;
-(id<FBJewelNetworkDataSource>)jewelDataSource;
-(void)_processUnits:(id)arg1 ;
-(id)initWithVideoHomeSession:(id)arg1 ;
-(void)videoHomeGuideDataFetcherWillLoadUnits:(id)arg1 loadType:(unsigned long long)arg2 ;
-(void)videoHomeGuideDataFetcher:(id)arg1 didLoadUnits:(id)arg2 loadType:(unsigned long long)arg3 requestType:(unsigned long long)arg4 error:(id)arg5 ;
-(void)videoHomeGuideDataFetcherDidClearDataAndRequests:(id)arg1 ;
-(void)videoHomeGuideDataFetcherDidMarkDataDirty:(id)arg1 withReason:(id)arg2 ;
-(void)setBadgeCount:(unsigned long long)arg1 ;
-(unsigned long long)badgeCount;
@end
