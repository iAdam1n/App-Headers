/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:07 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/CKCompositeComponent.h>

@class FBMemFeedback, FBFeedbackReactionDataProvider, NSString, NSArray, FBUFICommentToolbox, FBSentryErrorHandlerComponent;

@interface FBUFICommentDetailComponent : CKCompositeComponent {

	BOOL _reactionEnabledForFeedback;
	FBMemFeedback* _feedbackTypeModel;
	FBFeedbackReactionDataProvider* _reactionDataProvider;
	NSString* _analyticsModule;
	NSArray* _trackingCodes;
	FBUFICommentToolbox* _toolbox;
	unsigned long long _theme;
	FBSentryErrorHandlerComponent* _sentryErrorHandlerComponent;
	Feedback* _feedback;
	CKTypedComponentAction<> _likeButtonAction;
	CKTypedComponentAction<> _reactionsButtonAction;

}

@property (assign,nonatomic) Feedback* feedback;                                                         //@synthesize feedback=_feedback - In the implementation block
@property (nonatomic,readonly) FBMemFeedback * feedbackTypeModel;                                        //@synthesize feedbackTypeModel=_feedbackTypeModel - In the implementation block
@property (nonatomic,readonly) FBFeedbackReactionDataProvider * reactionDataProvider;                    //@synthesize reactionDataProvider=_reactionDataProvider - In the implementation block
@property (nonatomic,copy,readonly) NSString * analyticsModule;                                          //@synthesize analyticsModule=_analyticsModule - In the implementation block
@property (nonatomic,copy,readonly) NSArray * trackingCodes;                                             //@synthesize trackingCodes=_trackingCodes - In the implementation block
@property (nonatomic,readonly) BOOL reactionEnabledForFeedback;                                          //@synthesize reactionEnabledForFeedback=_reactionEnabledForFeedback - In the implementation block
@property (nonatomic,readonly) FBUFICommentToolbox * toolbox;                                            //@synthesize toolbox=_toolbox - In the implementation block
@property (nonatomic,readonly) unsigned long long theme;                                                 //@synthesize theme=_theme - In the implementation block
@property (nonatomic,readonly) CKTypedComponentAction<> likeButtonAction;                                //@synthesize likeButtonAction=_likeButtonAction - In the implementation block
@property (nonatomic,readonly) CKTypedComponentAction<> reactionsButtonAction;                           //@synthesize reactionsButtonAction=_reactionsButtonAction - In the implementation block
@property (nonatomic,readonly) FBSentryErrorHandlerComponent * sentryErrorHandlerComponent;              //@synthesize sentryErrorHandlerComponent=_sentryErrorHandlerComponent - In the implementation block
+(double)horizontalSpacing;
+(id)newWithComment:(const FBUFICommentDetailComponentGraphQL*)arg1 likeButtonAction:(CKTypedComponentAction<>)arg2 reactionsButtonAction:(CKTypedComponentAction<>)arg3 replyButtonAction:(CKTypedComponentAction<>)arg4 editedButtonAction:(CKTypedComponentAction<>)arg5 layoutDefinition:(FBUFICommentDetailLayoutDefinition)arg6 theme:(unsigned long long)arg7 toolbox:(id)arg8 ;
+(double)verticalSpacing;
+(id)initialState;
-(NSString *)analyticsModule;
-(FBUFICommentToolbox *)toolbox;
-(NSArray *)trackingCodes;
-(FBMemFeedback *)feedbackTypeModel;
-(FBFeedbackReactionDataProvider *)reactionDataProvider;
-(BOOL)reactionEnabledForFeedback;
-(CKTypedComponentAction<>)likeButtonAction;
-(CKTypedComponentAction<>)reactionsButtonAction;
-(FBSentryErrorHandlerComponent *)sentryErrorHandlerComponent;
-(Feedback*)feedback;
-(void)setFeedback:(Feedback*)arg1 ;
-(unsigned long long)theme;
@end
