/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:36 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBModalWebFlowDelegate.h>

@protocol FBQueriedFeedUnitFieldsProtocol, FBQueriedActorFieldsProtocol;
@class FBFeedSecondaryActionContext, NSString, FBMemModelObject, FBNegativeFeedbackActionsManager, NSArray;

@interface FBFeedNegativeFeedbackSecondaryActionHelper : NSObject <FBModalWebFlowDelegate> {

	FBFeedSecondaryActionContext* _context;
	NSString* _hideableToken;
	FBMemModelObject*<FBQueriedFeedUnitFieldsProtocol> _feedUnit;
	FBNegativeFeedbackActionsManager* _negativeFeedbackActionsManager;
	NSArray* _trackingCodes;
	FBMemModelObject*<FBQueriedActorFieldsProtocol> _actor;

}

@property (nonatomic,readonly) FBMemModelObject*<FBQueriedActorFieldsProtocol> actor;              //@synthesize actor=_actor - In the implementation block
@property (nonatomic,readonly) FBFeedSecondaryActionContext * context;                             //@synthesize context=_context - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithHideableToken:(id)arg1 actor:(id)arg2 feedUnit:(id)arg3 trackingCodes:(id)arg4 context:(id)arg5 ;
-(void)hideWithoutReportingNegativeFeedback;
-(void)webViewControllerDidComplete:(id)arg1 ;
-(void)sendNegativeFeedbackAction:(id)arg1 ;
-(void)hideAll;
-(id)_negativeFeedbackActionsManager;
-(void)_performBlockAfterNegativeFeedbackResponder:(/*^block*/id)arg1 ;
-(void)_hideUnit;
-(void)reportNegativeFeedbackAction:(id)arg1 ;
-(void)unfollow;
-(void)hide;
-(FBFeedSecondaryActionContext *)context;
-(FBMemModelObject*<FBQueriedActorFieldsProtocol>)actor;
@end
