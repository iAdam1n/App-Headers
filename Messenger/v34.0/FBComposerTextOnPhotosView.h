/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:36 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/FBComposerPhotoOverlaysView.h>
#import <Messenger/FBComposerPhotoOverlaysViewProtocol.h>

@protocol FBComposerTextOnPhotosViewDelegate;
@class NSString;

@interface FBComposerTextOnPhotosView : FBComposerPhotoOverlaysView <FBComposerPhotoOverlaysViewProtocol> {

	id<FBComposerTextOnPhotosViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBComposerTextOnPhotosViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)composerPhotoOverlaysView:(id)arg1 didAddPhotoOverlayView:(id)arg2 ;
-(void)composerPhotoOverlaysView:(id)arg1 didRemovePhotoOverlayView:(id)arg2 ;
-(void)composerPhotoOverlaysViewDidTapAddAttachmentsButton:(id)arg1 ;
-(id)createPhotoOverlayViewForPhotoOverlay:(id)arg1 ;
-(id)createPhotoOverlayForOverlayView:(id)arg1 ;
-(void)composerPhotoOverlaysView:(id)arg1 didTapPhotoOverlayView:(id)arg2 ;
-(id)addImageToUseForBarForPhotoOverlay:(id)arg1 ;
-(void)composerPhotoOverlaysViewDidTapCancel:(id)arg1 ;
-(void)composerPhotoOverlaysViewDidTapDone:(id)arg1 ;
-(void)didChangePhotoAttachmentOverlay;
-(void)setDelegate:(id<FBComposerTextOnPhotosViewDelegate>)arg1 ;
-(id<FBComposerTextOnPhotosViewDelegate>)delegate;
@end

