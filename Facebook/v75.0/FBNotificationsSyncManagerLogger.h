/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:03 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBNotificationsSyncManagerLogging.h>

@class NSString;

@interface FBNotificationsSyncManagerLogger : NSObject <FBNotificationsSyncManagerLogging>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)syncManagerStartedNeckLoadSyncWithLoadReason:(long long)arg1 currentChunks:(id)arg2 ;
-(void)syncManagerFinishedNeckLoadSyncWithCurrentChunks:(id)arg1 ;
-(void)syncManagerDroppedLoadRequestWithLoadReason:(long long)arg1 ;
-(void)syncManagerStartedDeltaSyncWithLoadReason:(long long)arg1 ;
-(void)syncManagerStartedReadnessSyncWithLoadReason:(long long)arg1 ;
-(void)syncManagerUpdatedBackgroundFetchIntervalWithInterval:(double)arg1 oldBackgroundFetchInterval:(double)arg2 ;
-(id)_chunksInfoFromChunks:(id)arg1 ;
@end
