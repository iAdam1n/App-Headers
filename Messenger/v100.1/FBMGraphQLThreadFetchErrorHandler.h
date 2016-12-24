/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:19 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBMGraphQLThreadFetchErrorHandling.h>

@protocol MNThreadSummaryCacheWriting;
@class MNDeletedThreadKeyTracker, FBMDiskThreadDeleter, FBAnalytics, NSString;

@interface FBMGraphQLThreadFetchErrorHandler : NSObject <FBMGraphQLThreadFetchErrorHandling> {

	id<MNThreadSummaryCacheWriting> _threadSummaryCacheWriter;
	MNDeletedThreadKeyTracker* _deletedThreadKeyTracker;
	FBMDiskThreadDeleter* _diskDeleter;
	FBAnalytics* _analytics;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)parseError:(id)arg1 fromFetchForThreadWithThreadKey:(id)arg2 ;
-(void)_cleanUpThreadWithThreadKey:(id)arg1 ;
-(id)initWithThreadSummaryCacheWriter:(id)arg1 deletedThreadKeyTracker:(id)arg2 diskDeleter:(id)arg3 analytics:(id)arg4 ;
@end
