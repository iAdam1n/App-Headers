/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:20 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNThreadMontageViewDelegate.h>

@protocol MNThreadMontageCellControllerDelegate;
@class MNProfileImageViewController, MNMontageThumbnailController, MNMontageSeenHeadsController, UICollectionView, FBLazyCreator, NSString;

@interface MNThreadMontageCellController : NSObject <MNThreadMontageViewDelegate> {

	MNProfileImageViewController* _profileImageViewController;
	MNMontageThumbnailController* _montageThumbnailController;
	MNMontageSeenHeadsController* _montageSeenHeadsController;
	UICollectionView* _collectionView;
	FBLazyCreator* _montageViewCreator;
	id<MNThreadMontageCellControllerDelegate> _delegate;

}

@property (assign,nonatomic) BOOL montageCellVisible; 
@property (assign,nonatomic,__weak) id<MNThreadMontageCellControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)awakeWithCollectionView:(id)arg1 ;
-(void)updateThreadMontageView:(id)arg1 withViewModel:(id)arg2 ;
-(void)setMontageCellVisible:(BOOL)arg1 ;
-(void)threadMontageViewDidAppear:(id)arg1 ;
-(void)threadMontageViewDidDisappear:(id)arg1 ;
-(id)layoutElements;
-(id)initWithProfileImageViewController:(id)arg1 montageThumbnailController:(id)arg2 stickerResourceManager:(id)arg3 ;
-(id)cellForThreadMontageViewModel:(id)arg1 atIndexPath:(id)arg2 inCollectionView:(id)arg3 ;
-(void)_updateProfileImageForStatusHead:(id)arg1 inProfileImageView:(id)arg2 ;
-(void)_updateMontageThumbnail:(id)arg1 inThumbnailView:(id)arg2 ;
-(void)threadMontageView:(id)arg1 didTapThumbnail:(id)arg2 ;
-(void)threadMontageView:(id)arg1 didTapProfileImageForUser:(id)arg2 inProfileImageView:(id)arg3 ;
-(void)threadMontageView:(id)arg1 didTapAddAudience:(id)arg2 ;
-(BOOL)montageCellVisible;
-(void)setDelegate:(id<MNThreadMontageCellControllerDelegate>)arg1 ;
-(id<MNThreadMontageCellControllerDelegate>)delegate;
@end
