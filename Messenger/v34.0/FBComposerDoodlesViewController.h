/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:36 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <Messenger/FBComposerDoodlesViewDelegate.h>
#import <Messenger/FBMediaGalleryToolProtocol.h>

@protocol FBComposerDoodlesViewControllerDelegate;
@class NSString, FBComposerDoodlesView, FBDrawViewController, UIImage, FBUserSession, FBMediaGalleryTopBarConfiguration;

@interface FBComposerDoodlesViewController : UIViewController <FBComposerDoodlesViewDelegate, FBMediaGalleryToolProtocol> {

	BOOL _addedInitialDoodles;
	NSString* _assetID;
	BOOL _didChangePhotoOverlay;
	FBComposerDoodlesView* _doodlesView;
	FBDrawViewController* _drawViewController;
	UIImage* _imageToAddDoodles;
	UIImage* _photoOverlayLayer;
	FBUserSession* _session;
	FBMediaGalleryTopBarConfiguration* _topBarConfiguration;
	id<FBComposerDoodlesViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBComposerDoodlesViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned long long)getMediaGalleryToolType;
-(void)mediaGalleryWillPresentTool:(unsigned long long)arg1 ;
-(void)mediaGalleryDidPressCurrentTool;
-(void)composerDoodlesViewDidTapCancel:(id)arg1 ;
-(void)composerDoodlesViewDidTapDone:(id)arg1 ;
-(void)_doodlesControllerDoneWithNavBarHit:(BOOL)arg1 ;
-(id)initWithImage:(id)arg1 photoOverlayLayer:(id)arg2 photoAssetID:(id)arg3 topBarConfiguration:(id)arg4 session:(id)arg5 ;
-(void)setDelegate:(id<FBComposerDoodlesViewControllerDelegate>)arg1 ;
-(id<FBComposerDoodlesViewControllerDelegate>)delegate;
-(void)viewDidLoad;
@end

