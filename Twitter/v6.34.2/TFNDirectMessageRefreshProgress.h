/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:45 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, TFNDirectMessageUserUpdatesResponse;

@interface TFNDirectMessageRefreshProgress : NSObject {

	NSObject*<OS_dispatch_queue> _transitionLockQueue;
	TFNDirectMessageUserUpdatesResponse* _userUpdatesResponse;
	unsigned long long _state;

}

@property (nonatomic,retain) TFNDirectMessageUserUpdatesResponse * userUpdatesResponse;              //@synthesize userUpdatesResponse=_userUpdatesResponse - In the implementation block
@property (assign,nonatomic) unsigned long long state;                                               //@synthesize state=_state - In the implementation block
-(BOOL)transitionToFetchUpdatesWasCancelled;
-(BOOL)transitionToFetchingUpdates;
-(BOOL)transitionToFetchUpdatesFailed;
-(BOOL)transitionToFetchUpdatesSucceededWithResponse:(id)arg1 ;
-(BOOL)_performStateTransition:(/*^block*/id)arg1 ;
-(void)setUserUpdatesResponse:(TFNDirectMessageUserUpdatesResponse *)arg1 ;
-(BOOL)transitionToApplyingResponse;
-(BOOL)transitionToResponseApplied;
-(TFNDirectMessageUserUpdatesResponse *)userUpdatesResponse;
-(id)init;
-(unsigned long long)state;
-(void)setState:(unsigned long long)arg1 ;
@end
