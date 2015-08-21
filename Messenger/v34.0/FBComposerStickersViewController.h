/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:36 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIViewController.h>
#import <Messenger/FBMediaTopNavigationBarDelegation.h>
#import <Messenger/FBComposerStickersViewDelegate.h>
#import <Messenger/FBMStickerInputViewDelegate.h>
#import <Messenger/FBMStickerStoreViewControllerDelegate.h>
#import <Messenger/FBComposerStickersPickerTopBarDelegate.h>
#import <UIKit/UIViewControllerAnimatedTransitioning.h>
#import <Messenger/FBComposerPhotoOverlayAttachmentsViewController.h>
#import <Messenger/FBMediaGalleryToolProtocol.h>

@protocol FBMediaGalleryBannerProviderProtocol, FBComposerPhotoOverlayViewControllerDelegate;
@class NSString, UIViewController, UIImage, FBStickersInPhotosLogger, UIView, FBUserSession, FBMStickerInputView, NSArray, FBComposerStickersPickerTopBar, FBComposerStickersView, FBMediaGalleryTopBarConfiguration, UICollectionViewCell, UIImageView;

@interface FBComposerStickersViewController : UIViewController <FBMediaTopNavigationBarDelegation, FBComposerStickersViewDelegate, FBMStickerInputViewDelegate, FBMStickerStoreViewControllerDelegate, FBComposerStickersPickerTopBarDelegate, UIViewControllerAnimatedTransitioning, FBComposerPhotoOverlayAttachmentsViewController, FBMediaGalleryToolProtocol> {

	BOOL _addedInitialStickers;
	CGRect _animationFrame;
	id<FBMediaGalleryBannerProviderProtocol> _bannerProvider;
	UIViewController* _bannerViewController;
	BOOL _didChangePhotoOverlay;
	double _imageRotation;
	UIImage* _imageToAddStickersTo;
	BOOL _isStickersPickerPresented;
	FBStickersInPhotosLogger* _logger;
	unsigned long long _numberOfStickersAdded;
	BOOL _presentationTransitionComplete;
	UIView* _privacyMessageView;
	BOOL _removedOutOfBoundsStickers;
	FBUserSession* _session;
	FBMStickerInputView* _stickerInputView;
	NSArray* _stickersInformation;
	UIImage* _stickersLayer;
	FBComposerStickersPickerTopBar* _stickersPickerTopBar;
	FBComposerStickersView* _stickersView;
	unsigned long long _style;
	FBMediaGalleryTopBarConfiguration* _topBarConfiguration;
	UICollectionViewCell* _transitioningBackToCell;
	CGRect _transitioningBackToFrame;
	UIImageView* _transitionImageView;
	BOOL _shouldStartWithStickerPack;
	NSString* _assetID;
	id<FBComposerPhotoOverlayViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBComposerPhotoOverlayViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * assetID;                                                              //@synthesize assetID=_assetID - In the implementation block
-(NSString *)assetID;
-(void)setAssetID:(NSString *)arg1 ;
-(void)stickerInputView:(id)arg1 didSelectSticker:(id)arg2 ;
-(void)didSelectStickerStoreWith:(unsigned long long)arg1 sourceView:(id)arg2 ;
-(void)stickerInputView:(id)arg1 didBeginSearching:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)stickerInputView:(id)arg1 didEndSearching:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)stickerInputView:(id)arg1 didTapTabWithTitle:(id)arg2 ;
-(void)stickerStoreViewController:(id)arg1 didSelectViewStickerPack:(id)arg2 ;
-(void)didSelectDismissStickerStoreViewController:(id)arg1 ;
-(void)didTapLeftButton:(id)arg1 ;
-(void)didTapRightButton:(id)arg1 ;
-(void)_performPresentationTransition:(id)arg1 ;
-(void)_performDismissalTransition:(id)arg1 ;
-(unsigned long long)getMediaGalleryToolType;
-(void)mediaGalleryWillPresentTool:(unsigned long long)arg1 ;
-(void)mediaGalleryDidPressCurrentTool;
-(void)_showStickerPicker;
-(id)overlayAttachmentsImageLayer;
-(void)_dismissStickerPickerWithCompletion:(/*^block*/id)arg1 ;
-(void)_informDelegateDoneWithNavBarHit:(BOOL)arg1 ;
-(void)_doneButtonWasHit;
-(void)composerStickersViewDidRemoveSticker:(id)arg1 ;
-(void)composerStickersViewDidTapCancel:(id)arg1 ;
-(void)composerStickersViewDidTapDone:(id)arg1 ;
-(void)composerPhotoOverlayViewDidTapAddButton:(id)arg1 ;
-(void)composerPhotoOverlayViewDidChangeOverlay:(id)arg1 ;
-(void)composerStickersPickerTopBarDidHitCloseButton:(id)arg1 ;
-(void)prepareForDismissalAnimationWithCellEndFrame:(CGRect)arg1 cell:(id)arg2 animationFrame:(CGRect)arg3 ;
-(id)photoOverlayAttachmentsInformation;
-(id)initWithImage:(id)arg1 stickersLayer:(id)arg2 stickersInformation:(id)arg3 imageRotation:(double)arg4 imageView:(id)arg5 photoAssetID:(id)arg6 logger:(id)arg7 style:(unsigned long long)arg8 topBarConfiguration:(id)arg9 shouldStartWithStickerPack:(BOOL)arg10 session:(id)arg11 bannerProvider:(id)arg12 ;
-(void)setDelegate:(id<FBComposerPhotoOverlayViewControllerDelegate>)arg1 ;
-(id<FBComposerPhotoOverlayViewControllerDelegate>)delegate;
-(double)transitionDuration:(id)arg1 ;
-(void)animateTransition:(id)arg1 ;
-(unsigned long long)supportedInterfaceOrientations;
-(void)viewWillLayoutSubviews;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
@end

