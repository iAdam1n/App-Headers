/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:33 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/CKCompositeComponent.h>

@protocol FBQueriedActorFieldsProtocol;
@class FBMemModelObject, FBAnalyticsInfo, CKComponent, FBVideoChannelPlaylistScrollBlockingController, FBVideoChannelPlaylistItem, FBVideoChannelFeedToolbox, NSArray, FBVideoChannelPlaylistItemComponentState, FBMemFeedStory, FBMemVideo;

@interface FBVideoChannelPlaylistItemComponent : CKCompositeComponent {

	FBMemModelObject*<FBQueriedActorFieldsProtocol> _actor;
	FBAnalyticsInfo* _analyticsInfo;
	FBAnalyticsInfo* _attachmentAnalyticsInfo;
	CKComponent* _scrollBlockingComponent;
	FBVideoChannelPlaylistScrollBlockingController* _scrollBlockingController;
	FBVideoChannelPlaylistItem* _item;
	FBVideoChannelFeedToolbox* _toolbox;
	NSArray* _trackingCodes;
	FBVideoChannelPlaylistItemComponentState* _state;
	FBMemFeedStory* _videoCreationStory;
	FBMemFeedStory* _feedbackStory;
	FBMemVideo* _video;
	SEL _overlayPresentedAction;
	SEL _overlayDismissedAction;
	SEL _fullScreenAction;

}

@property (nonatomic,readonly) FBVideoChannelFeedToolbox * toolbox;                           //@synthesize toolbox=_toolbox - In the implementation block
@property (nonatomic,copy,readonly) NSArray * trackingCodes;                                  //@synthesize trackingCodes=_trackingCodes - In the implementation block
@property (nonatomic,readonly) FBVideoChannelPlaylistItemComponentState * state;              //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) FBMemFeedStory * videoCreationStory;                           //@synthesize videoCreationStory=_videoCreationStory - In the implementation block
@property (nonatomic,readonly) FBMemFeedStory * feedbackStory;                                //@synthesize feedbackStory=_feedbackStory - In the implementation block
@property (nonatomic,readonly) FBMemVideo * video;                                            //@synthesize video=_video - In the implementation block
@property (nonatomic,readonly) SEL overlayPresentedAction;                                    //@synthesize overlayPresentedAction=_overlayPresentedAction - In the implementation block
@property (nonatomic,readonly) SEL overlayDismissedAction;                                    //@synthesize overlayDismissedAction=_overlayDismissedAction - In the implementation block
@property (nonatomic,readonly) SEL fullScreenAction;                                          //@synthesize fullScreenAction=_fullScreenAction - In the implementation block
+(id)newWithVideoPlaylistItem:(id)arg1 options:(const FBVideoChannelPlaylistItemComponentOptions*)arg2 toolbox:(id)arg3 ;
+(id)initialState;
-(FBVideoChannelFeedToolbox *)toolbox;
-(NSArray *)trackingCodes;
-(void)didTapHeader;
-(vector<CKComponentAnimation, std::__1::allocator<CKComponentAnimation> >*)animationsFromPreviousComponent:(id)arg1 ;
-(void)didExpandItem;
-(FBMemFeedStory *)videoCreationStory;
-(void)logTapWithEventTarget:(id)arg1 ;
-(void)didTapContextHeader;
-(void)didTapEntity:(id)arg1 context:(id)arg2 ;
-(void)didTapThumbnail;
-(void)pauseVideoSessionForEventTarget:(id)arg1 andEntity:(id)arg2 ;
-(SEL)fullScreenAction;
-(FBMemFeedStory *)feedbackStory;
-(SEL)overlayPresentedAction;
-(SEL)overlayDismissedAction;
-(FBVideoChannelPlaylistItemComponentState *)state;
-(FBMemVideo *)video;
@end
