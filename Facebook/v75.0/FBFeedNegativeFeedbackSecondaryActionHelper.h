/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:09 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
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
@property (nonatomic,readonly) BOOL actsAsPageVoices; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithHideableToken:(id)arg1 actor:(id)arg2 feedUnit:(id)arg3 trackingCodes:(id)arg4 context:(id)arg5 ;
-(void)hideWithoutReportingNegativeFeedback;
-(void)sendNegativeFeedbackAction:(id)arg1 ;
-(void)reportNegativeFeedbackAction:(id)arg1 ;
-(void)hideAll;
-(BOOL)actsAsPageVoices;
-(id)_negativeFeedbackActionsManager;
-(void)_performBlockAfterNegativeFeedbackResponder:(/*^block*/id)arg1 ;
-(void)_hideUnitWithNegativeFeedbackAction:(id)arg1 ;
-(void)webViewControllerDidComplete:(id)arg1 ;
-(void)hide;
-(FBFeedSecondaryActionContext *)context;
-(void)unfollow;
-(FBMemModelObject*<FBQueriedActorFieldsProtocol>)actor;
@end
