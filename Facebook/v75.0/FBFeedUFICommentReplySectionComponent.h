/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:06 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/CKCompositeComponent.h>
#import <Facebook/FBFeedCommentsComponent.h>

@protocol FBConnectionPageProtocol;
@class FBMemFeedback, NSArray, FBFeedToolbox, NSString;

@interface FBFeedUFICommentReplySectionComponent : CKCompositeComponent <FBFeedCommentsComponent> {

	FBMemFeedback* _feedback;
	id<FBConnectionPageProtocol> _preloadedCommentsConnection;
	NSArray* _initialComments;
	long long _initialSeeMoreCount;
	FBFeedToolbox* _toolbox;
	NSArray* _trackingCodes;

}

@property (nonatomic,readonly) FBMemFeedback * feedback;                                              //@synthesize feedback=_feedback - In the implementation block
@property (nonatomic,readonly) id<FBConnectionPageProtocol> preloadedCommentsConnection;              //@synthesize preloadedCommentsConnection=_preloadedCommentsConnection - In the implementation block
@property (nonatomic,copy,readonly) NSArray * initialComments;                                        //@synthesize initialComments=_initialComments - In the implementation block
@property (nonatomic,readonly) long long initialSeeMoreCount;                                         //@synthesize initialSeeMoreCount=_initialSeeMoreCount - In the implementation block
@property (nonatomic,readonly) FBFeedToolbox * toolbox;                                               //@synthesize toolbox=_toolbox - In the implementation block
@property (nonatomic,copy,readonly) NSArray * trackingCodes;                                          //@synthesize trackingCodes=_trackingCodes - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)newWithComment:(id)arg1 editingComment:(id)arg2 cancelEditingAction:(CKTypedComponentAction<>)arg3 commitEditingAction:(CKTypedComponentAction<>)arg4 composerEndEditingAction:(CKTypedComponentAction<>)arg5 replyAction:(CKTypedComponentAction<>)arg6 showReplyComposer:(BOOL)arg7 shouldActivateComposer:(BOOL)arg8 toolbox:(id)arg9 ;
+(id)initialState;
-(id)navigationCoordinator;
-(id)intentHandler;
-(FBFeedToolbox *)toolbox;
-(NSArray *)trackingCodes;
-(id<FBConnectionPageProtocol>)preloadedCommentsConnection;
-(NSArray *)initialComments;
-(long long)initialSeeMoreCount;
-(FBMemFeedback *)feedback;
-(id)session;
@end
