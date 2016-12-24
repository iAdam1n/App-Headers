/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:06 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/CKCompositeComponent.h>

@class FBAnalyticsInfo, FBMemFeedStory, FBFeedToolbox, NSArray, FBFeedEventBus;

@interface FBFeedStoryUFIContentComponent : CKCompositeComponent {

	BOOL _hasInlineComposer;
	FBAnalyticsInfo* _intentAnalyticsInfo;
	BOOL _embedded;
	BOOL _omitButtons;
	BOOL _suppressCountsAction;
	BOOL _hasFakeComposerComponent;
	FBMemFeedStory* _story;
	FBFeedToolbox* _toolbox;
	NSArray* _trackingCodes;
	NSArray* _trackingNodes;
	NSArray* _parentTrackingCodes;
	FBFeedEventBus* _eventBus;
	CKTypedComponentAction<> _likeAction;

}

@property (nonatomic,readonly) CKTypedComponentAction<> likeAction;              //@synthesize likeAction=_likeAction - In the implementation block
@property (nonatomic,readonly) BOOL hasFakeComposerComponent;                    //@synthesize hasFakeComposerComponent=_hasFakeComposerComponent - In the implementation block
@property (nonatomic,readonly) FBMemFeedStory * story;                           //@synthesize story=_story - In the implementation block
@property (nonatomic,readonly) FBFeedToolbox * toolbox;                          //@synthesize toolbox=_toolbox - In the implementation block
@property (nonatomic,copy,readonly) NSArray * trackingCodes;                     //@synthesize trackingCodes=_trackingCodes - In the implementation block
@property (nonatomic,copy,readonly) NSArray * trackingNodes;                     //@synthesize trackingNodes=_trackingNodes - In the implementation block
@property (nonatomic,copy,readonly) NSArray * parentTrackingCodes;               //@synthesize parentTrackingCodes=_parentTrackingCodes - In the implementation block
@property (nonatomic,readonly) FBFeedEventBus * eventBus;                        //@synthesize eventBus=_eventBus - In the implementation block
+(id)newWithStory:(id)arg1 options:(const FBFeedStoryUFIComponentOptions*)arg2 parentTrackingCodes:(id)arg3 likeAction:(CKTypedComponentAction<>)arg4 commentAction:(CKTypedComponentAction<>)arg5 shareActionOverride:(CKTypedComponentAction<>)arg6 toolbox:(id)arg7 ;
+(void)setLikeCountShowsLikersList:(BOOL)arg1 ;
+(id)initialState;
-(FBFeedToolbox *)toolbox;
-(FBMemFeedStory *)story;
-(NSArray *)trackingCodes;
-(CKComponentBoundsAnimation)boundsAnimationFromPreviousComponent:(id)arg1 ;
-(NSArray *)trackingNodes;
-(FBFeedEventBus *)eventBus;
-(NSArray *)parentTrackingCodes;
-(void)viewerDidLike:(id)arg1 context:(id)arg2 ;
-(void)didTapReplyRow:(id)arg1 withComment:(id)arg2 ;
-(void)countsActionForInlineComments;
-(void)commentAction:(id)arg1 context:(id)arg2 ;
-(void)countsAction:(id)arg1 context:(id)arg2 ;
-(void)presentFeedbackWithOptions:(unsigned long long)arg1 countsActionType:(unsigned long long)arg2 focusedComment:(id)arg3 tapSource:(id)arg4 ;
-(CKTypedComponentAction<>)likeAction;
-(BOOL)hasFakeComposerComponent;
-(void)didTapReplyButton:(id)arg1 withComment:(id)arg2 ;
-(void)composerDidEndEditing;
@end
