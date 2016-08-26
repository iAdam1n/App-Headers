/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:35 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>
#import <Facebook/FBFacecastInteractionViewDelegate.h>

@class FBUserSession, NSString, FBFacecastRecordingOverlayToolbar, FBFacecastGradientView, FBFacecastQuietModeNuxView, UIView, FBFacecastCameraView, FBFacecastStatusOverlayView, FBFacecastOverlayButton, FBFacecastInteractionView, FBCrowdNoiseView, FBFacecastCommercialBreakView, FBVideoCreativeToolsPreviewOverlayView, UIButton, FBFacecastCommercialBreakMenuItemView, FBButtonWithExtendedTapTarget;

@interface FBFacecastRecordingOverlayView : UIView <FBFacecastInteractionViewDelegate> {

	FBUserSession* _userSession;
	NSString* _broadcastId;
	FBFacecastRecordingOverlayToolbar* _toolbar;
	FBFacecastGradientView* _interactionVeil;
	FBFacecastQuietModeNuxView* _quietModeNuxView;
	BOOL _isCreativeToolsViewLeaving;
	UIView* _creativeToolsView;
	CGSize _streamingVideoSize;
	BOOL _creativeToolsButtonEnabled;
	NSString* _videoIdentifier;
	FBFacecastCameraView* _cameraView;
	FBFacecastStatusOverlayView* _statusOverlayView;
	FBFacecastOverlayButton* _cameraFlipButton;
	FBFacecastOverlayButton* _creativeToolsButton;
	FBFacecastInteractionView* _interactionView;
	FBCrowdNoiseView* _crowdNoiseView;
	FBFacecastCommercialBreakView* _commercialBreakView;
	UIView* _inviteFriendsPresenterView;
	FBVideoCreativeToolsPreviewOverlayView* _videoOverlayView;
	unsigned long long _style;

}

@property (nonatomic,copy) NSString * videoIdentifier;                                                           //@synthesize videoIdentifier=_videoIdentifier - In the implementation block
@property (nonatomic,retain) FBFacecastCameraView * cameraView;                                                  //@synthesize cameraView=_cameraView - In the implementation block
@property (nonatomic,readonly) FBFacecastStatusOverlayView * statusOverlayView;                                  //@synthesize statusOverlayView=_statusOverlayView - In the implementation block
@property (nonatomic,readonly) FBFacecastOverlayButton * cameraFlipButton;                                       //@synthesize cameraFlipButton=_cameraFlipButton - In the implementation block
@property (nonatomic,readonly) FBFacecastOverlayButton * creativeToolsButton;                                    //@synthesize creativeToolsButton=_creativeToolsButton - In the implementation block
@property (assign,nonatomic) BOOL creativeToolsButtonEnabled;                                                    //@synthesize creativeToolsButtonEnabled=_creativeToolsButtonEnabled - In the implementation block
@property (nonatomic,readonly) UIButton * stopButton; 
@property (nonatomic,retain) FBFacecastInteractionView * interactionView;                                        //@synthesize interactionView=_interactionView - In the implementation block
@property (nonatomic,retain) FBCrowdNoiseView * crowdNoiseView;                                                  //@synthesize crowdNoiseView=_crowdNoiseView - In the implementation block
@property (nonatomic,readonly) FBFacecastCommercialBreakMenuItemView * commercialBreakMenuItemView; 
@property (nonatomic,retain) FBFacecastCommercialBreakView * commercialBreakView;                                //@synthesize commercialBreakView=_commercialBreakView - In the implementation block
@property (nonatomic,readonly) FBButtonWithExtendedTapTarget * inviteFriendsMenuItemView; 
@property (nonatomic,retain) UIView * inviteFriendsPresenterView;                                                //@synthesize inviteFriendsPresenterView=_inviteFriendsPresenterView - In the implementation block
@property (nonatomic,readonly) FBButtonWithExtendedTapTarget * commentingMenuItemView; 
@property (nonatomic,readonly) FBVideoCreativeToolsPreviewOverlayView * videoOverlayView;                        //@synthesize videoOverlayView=_videoOverlayView - In the implementation block
@property (assign,nonatomic) unsigned long long style;                                                           //@synthesize style=_style - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(FBFacecastCommercialBreakView *)commercialBreakView;
-(CGRect)_cameraFrame;
-(BOOL)creativeToolsButtonEnabled;
-(void)_layoutCreativeTools;
-(CGRect)_interactionFrame;
-(BOOL)_creativeToolsHidden;
-(BOOL)_isVideoPortraitFullScreen;
-(void)_reorderSubviews;
-(void)_cameraPannedWithGesture:(id)arg1 ;
-(FBButtonWithExtendedTapTarget *)commentingMenuItemView;
-(void)_setCreativeToolsButtonAccessibilityLabelWithButtonSelected:(BOOL)arg1 ;
-(void)_animateInWithView:(id)arg1 ;
-(void)_setQuietModeNuxHidden:(BOOL)arg1 ;
-(void)_setQuietModeNuxHidden;
-(void)facecastInteractionView:(id)arg1 changedQuietModePercent:(double)arg2 quietModePageVisible:(BOOL)arg3 ;
-(void)facecastInteractionView:(id)arg1 changedContentInset:(UIEdgeInsets)arg2 ;
-(void)facecastInteractionView:(id)arg1 tapFellThrough:(id)arg2 ;
-(BOOL)_isVideoLandscapeFullScreen;
-(NSString *)videoIdentifier;
-(UIView *)inviteFriendsPresenterView;
-(id)initWithUserSession:(id)arg1 cameraCount:(long long)arg2 streamingVideoSize:(CGSize)arg3 scenePath:(id)arg4 broadcastId:(id)arg5 composition:(id)arg6 privacySetting:(id)arg7 ;
-(void)setVideoIdentifier:(NSString *)arg1 ;
-(FBFacecastStatusOverlayView *)statusOverlayView;
-(FBFacecastOverlayButton *)cameraFlipButton;
-(void)setDurationHidden:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setInteractionView:(FBFacecastInteractionView *)arg1 ;
-(FBFacecastCommercialBreakMenuItemView *)commercialBreakMenuItemView;
-(void)setCreativeToolsButtonEnabled:(BOOL)arg1 ;
-(FBFacecastOverlayButton *)creativeToolsButton;
-(void)addCreativeToolsView:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)removeCreativeToolsViewWithCompletion:(/*^block*/id)arg1 ;
-(FBCrowdNoiseView *)crowdNoiseView;
-(void)setCrowdNoiseView:(FBCrowdNoiseView *)arg1 ;
-(void)addCommercialBreakMenuItemView;
-(void)addInviteFriendsMenuItemView;
-(FBButtonWithExtendedTapTarget *)inviteFriendsMenuItemView;
-(void)addCommentingMenuItemView;
-(void)setCommercialBreakView:(FBFacecastCommercialBreakView *)arg1 ;
-(void)setInviteFriendsPresenterView:(UIView *)arg1 ;
-(void)dealloc;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)layoutSubviews;
-(unsigned long long)style;
-(void)setStyle:(unsigned long long)arg1 ;
-(void)didRotateFromInterfaceOrientation:(long long)arg1 ;
-(FBFacecastInteractionView *)interactionView;
-(FBFacecastCameraView *)cameraView;
-(void)setCameraView:(FBFacecastCameraView *)arg1 ;
-(UIButton *)stopButton;
-(void)animateIn;
-(FBVideoCreativeToolsPreviewOverlayView *)videoOverlayView;
@end
