/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:04 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBGraphQLSubscriptionHandle, FBReactionUnitUpdateSubscriptionHandlerDelegate;
@class FBReactionContext, NSString;

@interface FBReactionUnitUpdateSubscriptionHandler : NSObject {

	FBReactionContext* _reactionContext;
	NSString* _unitIDToken;
	id<FBGraphQLSubscriptionHandle> _subscriptionHandle;
	BOOL _subscribed;
	id<FBReactionUnitUpdateSubscriptionHandlerDelegate> _delegate;

}

@property (nonatomic,readonly) BOOL subscribed;                                                                //@synthesize subscribed=_subscribed - In the implementation block
@property (assign,nonatomic,__weak) id<FBReactionUnitUpdateSubscriptionHandlerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)_didReceiveResponsePayload:(id)arg1 ;
-(id)initWithReactionContext:(id)arg1 unitIDToken:(id)arg2 ;
-(void)setDelegate:(id<FBReactionUnitUpdateSubscriptionHandlerDelegate>)arg1 ;
-(void)dealloc;
-(id<FBReactionUnitUpdateSubscriptionHandlerDelegate>)delegate;
-(BOOL)subscribed;
-(void)subscribe;
-(void)unsubscribe;
@end
