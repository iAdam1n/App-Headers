/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:10 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBGraphQLSubscriptionHandle, FBSportsReactionLiveHeaderUpdateSubscriptionHandlerDelegate;
@class FBUserSession, NSString, NSDate;

@interface FBSportsReactionLiveHeaderUpdateSubscriptionHandler : NSObject {

	FBUserSession* _session;
	NSString* _pageID;
	NSDate* _latestDate;
	id<FBGraphQLSubscriptionHandle> _subscriptionHandle;
	id<FBSportsReactionLiveHeaderUpdateSubscriptionHandlerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBSportsReactionLiveHeaderUpdateSubscriptionHandlerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)initWithSession:(id)arg1 pageID:(id)arg2 ;
-(void)subscribeWithStartingUpdatedTime:(id)arg1 ;
-(void)_didReceivePayload:(id)arg1 ;
-(void)setDelegate:(id<FBSportsReactionLiveHeaderUpdateSubscriptionHandlerDelegate>)arg1 ;
-(void)dealloc;
-(id<FBSportsReactionLiveHeaderUpdateSubscriptionHandlerDelegate>)delegate;
-(void)unsubscribe;
@end
