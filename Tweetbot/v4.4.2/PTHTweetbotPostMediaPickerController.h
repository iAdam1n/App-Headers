/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:52:55 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D57A2E05-BD0B-4E00-BA11-E75114DE004A/Tweetbot.app/Tweetbot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Tweetbot/Tweetbot-Structs.h>
#import <UIKit/UICollectionViewController.h>
#import <UIKit/UIImagePickerControllerDelegate.h>
#import <UIKit/UINavigationControllerDelegate.h>

@class PTHTweetbotPostDraft, PHCachingImageManager, UICollectionView, NSMutableArray, PTHInvertingButton, NSString;

@interface PTHTweetbotPostMediaPickerController : UICollectionViewController <UIImagePickerControllerDelegate, UINavigationControllerDelegate> {

	PTHTweetbotPostDraft* _draft;
	PHCachingImageManager* _imageManager;
	UICollectionView* _collectionView;
	NSMutableArray* _media;
	NSMutableArray* _orderedSelectedIndexPaths;
	NSMutableArray* _mediaToDelete;
	PTHInvertingButton* _libraryButton;
	PTHInvertingButton* _cameraButton;
	long long _horizontalSizeClass;
	NSMutableArray* _buttonSizeClassConstraints;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)chooseFromLibrary:(id)arg1 ;
-(void)takeFromCamera:(id)arg1 ;
-(void)_updateLibraryButton;
-(void)_updateHorizontalSizeClassIfNeeded:(id)arg1 ;
-(BOOL)_canAddMediumOrAsset:(id)arg1 ;
-(void)_showImagePicker:(long long)arg1 inView:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)initWithDraft:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)dealloc;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(BOOL)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didHighlightItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didUnhighlightItemAtIndexPath:(id)arg2 ;
-(BOOL)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2 ;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)_update;
-(void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(void)imagePickerControllerDidCancel:(id)arg1 ;
-(void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2 ;
-(id)initWithCollectionViewLayout:(id)arg1 ;
@end

