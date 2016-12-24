/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:17 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBContainerViewController.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegateFlowLayout.h>
#import <Messenger/MNPhotosDataSourceUpdateListener.h>
#import <Messenger/MNMultiAssetPickerViewControllerDelegate.h>
#import <Messenger/MNMediaTrayViewPhotoCellDelegate.h>

@protocol MNPhotosDataSource, MNPhotosDataRequesting, OS_dispatch_queue, MNMediaGridViewControllerDelegate;
@class MNCollectionViewUpdater, MNAssetsListController, MNMediaPickerAccessibilityLabelGenerator, PHAssetCollection, MNMultiAssetPickerViewController, MNMediaGridView, PHImageRequestOptions, NSObject, NSString;

@interface MNMediaGridViewController : FBContainerViewController <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, MNPhotosDataSourceUpdateListener, MNMultiAssetPickerViewControllerDelegate, MNMediaTrayViewPhotoCellDelegate> {

	MNCollectionViewUpdater* _collectionViewUpdater;
	id<MNPhotosDataSource> _photosDataSource;
	id<MNPhotosDataRequesting> _photosDataRequester;
	MNAssetsListController* _assetsListController;
	MNMediaPickerAccessibilityLabelGenerator* _mediaPickerAccessibilityLabelGenerator;
	PHAssetCollection* _currentAlbum;
	MNMultiAssetPickerViewController* _multiAssetPickerViewController;
	MNMediaGridView* _mediaGridView;
	BOOL _isVisible;
	BOOL _needsUpdate;
	PHImageRequestOptions* _imageRequestOptions;
	NSObject*<OS_dispatch_queue> _fetchResultsLoadingQueue;
	id<MNMediaGridViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MNMediaGridViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_addViewControllerAsChild:(id)arg1 ;
-(void)photosDataSourceDidUpdate;
-(void)photosDataSourceDidFinishLoadingDefaultAlbum;
-(void)configureWithAlbum:(id)arg1 ;
-(void)_updateGridViewIfNeeded;
-(BOOL)_canUpdate;
-(id)_loadAssetsFromAlbum:(id)arg1 ;
-(void)_updateCollectionViewDataWithAssetsFetchResult:(id)arg1 ;
-(void)_setupCollectionViewForUpdatedAssetCollection;
-(void)_setNeedsUpdateGridView;
-(void)_applyEditInfoUponFinishingEditing:(id)arg1 forAsset:(id)arg2 atIndexPath:(id)arg3 ;
-(void)multiAssetPickerViewControllerDidChangeToHidden:(BOOL)arg1 ;
-(void)multiAssetPickerViewControllerDidTapSend:(id)arg1 ;
-(void)mediaTrayViewPhotoCellDidSelectSend:(id)arg1 ;
-(void)mediaTrayViewPhotoCellDidSelectEdit:(id)arg1 ;
-(BOOL)mediaTrayViewPhotoCellShouldShowCheckMark:(id)arg1 ;
-(id)initWithPhotosDataSource:(id)arg1 photosDataRequester:(id)arg2 mediaPickerAccessibilityLabelGenerator:(id)arg3 assetsListController:(id)arg4 multiAssetPickerViewController:(id)arg5 ;
-(void)setDelegate:(id<MNMediaGridViewControllerDelegate>)arg1 ;
-(id<MNMediaGridViewControllerDelegate>)delegate;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(BOOL)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2 ;
-(double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3 ;
-(double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3 ;
-(unsigned long long)supportedInterfaceOrientations;
-(BOOL)shouldAutorotate;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)viewWillLayoutSubviews;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(long long)preferredInterfaceOrientationForPresentation;
-(void)viewDidLoad;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3 ;
-(id)_assetAtIndex:(long long)arg1 ;
@end
