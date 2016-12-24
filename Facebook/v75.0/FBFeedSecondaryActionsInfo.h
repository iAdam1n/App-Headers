/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:09 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBFeedSecondaryActionSequence, FBResolvableProxyingNegativeFeedbackActionDelegate, FBResolvableProxyingSeeFirstActionDelegate, FBResolvableProxyingHideTopicForUserActionDelegate;

@interface FBFeedSecondaryActionsInfo : NSObject {

	FBFeedSecondaryActionSequence* _actionSequence;
	FBResolvableProxyingNegativeFeedbackActionDelegate* _resolvableProxyingNegativeFeedbackActionDelegate;
	FBResolvableProxyingSeeFirstActionDelegate* _resolvableProxyingSeeFirstActionDelegate;
	FBResolvableProxyingHideTopicForUserActionDelegate* _resolvableProxyingHideTopicForUserActionDelegate;

}

@property (nonatomic,readonly) FBFeedSecondaryActionSequence * actionSequence;                                                                     //@synthesize actionSequence=_actionSequence - In the implementation block
@property (nonatomic,readonly) FBResolvableProxyingNegativeFeedbackActionDelegate * resolvableProxyingNegativeFeedbackActionDelegate;              //@synthesize resolvableProxyingNegativeFeedbackActionDelegate=_resolvableProxyingNegativeFeedbackActionDelegate - In the implementation block
@property (nonatomic,readonly) FBResolvableProxyingSeeFirstActionDelegate * resolvableProxyingSeeFirstActionDelegate;                              //@synthesize resolvableProxyingSeeFirstActionDelegate=_resolvableProxyingSeeFirstActionDelegate - In the implementation block
@property (nonatomic,readonly) FBResolvableProxyingHideTopicForUserActionDelegate * resolvableProxyingHideTopicForUserActionDelegate;              //@synthesize resolvableProxyingHideTopicForUserActionDelegate=_resolvableProxyingHideTopicForUserActionDelegate - In the implementation block
-(FBFeedSecondaryActionSequence *)actionSequence;
-(FBResolvableProxyingNegativeFeedbackActionDelegate *)resolvableProxyingNegativeFeedbackActionDelegate;
-(FBResolvableProxyingHideTopicForUserActionDelegate *)resolvableProxyingHideTopicForUserActionDelegate;
-(FBResolvableProxyingSeeFirstActionDelegate *)resolvableProxyingSeeFirstActionDelegate;
-(id)initWithActionSequence:(id)arg1 resolvableProxyingNegativeFeedbackActionDelegate:(id)arg2 resolvableProxyingSeeFirstActionDelegate:(id)arg3 resolvableProxyingHideTopicForUserActionDelegate:(id)arg4 ;
@end
