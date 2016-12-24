/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:12 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/CKComponent.h>

@class NSMutableArray, FBFeedbackReactionDataProvider, FBFeedToolbox, FBUFICountComponent, FBMemFeedback, FBUserSession;

@interface FBUFIReactionsFacepileAndTextCountsComponent : CKComponent {

	NSMutableArray* _reactions;
	FBFeedbackReactionDataProvider* _reactionDataProvider;
	FBFeedToolbox* _toolbox;
	FBUFICountComponent* _textCountsComponent;
	vector<CKStackLayoutComponentChild, std::__1::allocator<CKStackLayoutComponentChild> >* _facepileChildren;
	BOOL _viewerIsOnlyReactor;
	FBMemFeedback* _feedback;
	FBUserSession* _session;

}

@property (nonatomic,retain) FBMemFeedback * feedback;              //@synthesize feedback=_feedback - In the implementation block
@property (nonatomic,retain) FBUserSession * session;               //@synthesize session=_session - In the implementation block
@property (assign,nonatomic) BOOL viewerIsOnlyReactor;              //@synthesize viewerIsOnlyReactor=_viewerIsOnlyReactor - In the implementation block
+(id)newWithFeedback:(id)arg1 reactionDataProvider:(id)arg2 options:(const FBUFIReactionsFacepileAndTextCountsOptions*)arg3 toolbox:(id)arg4 ;
+(id)initialState;
-(CKComponentLayout*)computeLayoutThatFits:(CKSizeRange)arg1 ;
-(vector<CKStackLayoutComponentChild, std::__1::allocator<CKStackLayoutComponentChild> >*)_childComponentsForMaxCount:(long long)arg1 ;
-(BOOL)viewerIsOnlyReactor;
-(void)setViewerIsOnlyReactor:(BOOL)arg1 ;
-(FBMemFeedback *)feedback;
-(void)setFeedback:(FBMemFeedback *)arg1 ;
-(void)setSession:(FBUserSession *)arg1 ;
-(FBUserSession *)session;
@end
