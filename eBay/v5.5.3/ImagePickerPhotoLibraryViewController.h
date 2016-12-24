/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 23, 2016 at 8:53:14 PM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/B79A6C91-6A31-4B98-98DF-DAB1E6185487/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <eBay/eBay-Structs.h>
#import <ComponentUI/EUIViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <libobjc.A.dylib/PHPhotoLibraryChangeObserver.h>

@protocol ImagePickerPhotoProtocol;
@class ImagePickerController, PHPhotoLibrary, UITableView, UIView, UILabel, UIImageView, NSMutableArray, EUIAlertControllerWrapper, EBNCoalescer, NSString;

@interface ImagePickerPhotoLibraryViewController : EUIViewController <UITableViewDataSource, UITableViewDelegate, PHPhotoLibraryChangeObserver> {

	ImagePickerController* controller;
	BOOL _isRotating;
	BOOL _isAlbumEmpty;
	BOOL _permissionsAlertShown;
	id<ImagePickerPhotoProtocol> _delegate;
	PHPhotoLibrary* _photoLibrary;
	UITableView* _tableView;
	UIView* _emptyAlbumView;
	UILabel* _emptyAlbumTitleLabel;
	UILabel* _emptyAlbumDescriptionLabel;
	UIImageView* _noPhotosImageView;
	unsigned long long _numberOfColumnsInternal;
	NSMutableArray* _assetCollections;
	EUIAlertControllerWrapper* _alertController;
	EBNCoalescer* _refreshLimiter;
	CGSize _cellSize;

}

@property (nonatomic,retain) UITableView * tableView;                                  //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,retain) UIView * emptyAlbumView;                                  //@synthesize emptyAlbumView=_emptyAlbumView - In the implementation block
@property (nonatomic,retain) UILabel * emptyAlbumTitleLabel;                           //@synthesize emptyAlbumTitleLabel=_emptyAlbumTitleLabel - In the implementation block
@property (nonatomic,retain) UILabel * emptyAlbumDescriptionLabel;                     //@synthesize emptyAlbumDescriptionLabel=_emptyAlbumDescriptionLabel - In the implementation block
@property (nonatomic,retain) UIImageView * noPhotosImageView;                          //@synthesize noPhotosImageView=_noPhotosImageView - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfColumnsInternal;               //@synthesize numberOfColumnsInternal=_numberOfColumnsInternal - In the implementation block
@property (assign,nonatomic) BOOL isRotating;                                          //@synthesize isRotating=_isRotating - In the implementation block
@property (assign,nonatomic) BOOL isAlbumEmpty;                                        //@synthesize isAlbumEmpty=_isAlbumEmpty - In the implementation block
@property (assign,nonatomic) BOOL permissionsAlertShown;                               //@synthesize permissionsAlertShown=_permissionsAlertShown - In the implementation block
@property (nonatomic,retain) NSMutableArray * assetCollections;                        //@synthesize assetCollections=_assetCollections - In the implementation block
@property (assign,nonatomic) CGSize cellSize;                                          //@synthesize cellSize=_cellSize - In the implementation block
@property (nonatomic,retain) EUIAlertControllerWrapper * alertController;              //@synthesize alertController=_alertController - In the implementation block
@property (nonatomic,copy) EBNCoalescer * refreshLimiter;                              //@synthesize refreshLimiter=_refreshLimiter - In the implementation block
@property (__weak) id<ImagePickerPhotoProtocol> delegate;                              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) PHPhotoLibrary * photoLibrary;                            //@synthesize photoLibrary=_photoLibrary - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)loadAssetCollectionsWithPermissionCheck;
-(void)setPermissionsAlertShown:(BOOL)arg1 ;
-(UILabel *)emptyAlbumTitleLabel;
-(UILabel *)emptyAlbumDescriptionLabel;
-(UIImageView *)noPhotosImageView;
-(void)collectionSelected:(id)arg1 ;
-(EBNCoalescer *)refreshLimiter;
-(BOOL)isAlbumEmpty;
-(void)setRefreshLimiter:(EBNCoalescer *)arg1 ;
-(BOOL)permissionsAlertShown;
-(void)sortAndReloadCollections;
-(void)showAssetFailureAlert;
-(void)setIsAlbumEmpty:(BOOL)arg1 ;
-(UIView *)emptyAlbumView;
-(id)assetCollectionsForIndexPath:(id)arg1 ;
-(void)showPhotosForAssetCollection:(id)arg1 ;
-(id)iPadTableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)iPhoneTableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)setEmptyAlbumView:(UIView *)arg1 ;
-(void)setEmptyAlbumTitleLabel:(UILabel *)arg1 ;
-(void)setEmptyAlbumDescriptionLabel:(UILabel *)arg1 ;
-(void)setNoPhotosImageView:(UIImageView *)arg1 ;
-(unsigned long long)numberOfColumnsInternal;
-(void)setNumberOfColumnsInternal:(unsigned long long)arg1 ;
-(void)setDelegate:(id<ImagePickerPhotoProtocol>)arg1 ;
-(void)dealloc;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(unsigned long long)numberOfColumns;
-(id<ImagePickerPhotoProtocol>)delegate;
-(BOOL)prefersStatusBarHidden;
-(unsigned long long)supportedInterfaceOrientations;
-(BOOL)shouldAutorotate;
-(BOOL)shouldAutorotateToInterfaceOrientation:(long long)arg1 ;
-(BOOL)isRotating;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)setTableView:(UITableView *)arg1 ;
-(UITableView *)tableView;
-(void)viewDidLoad;
-(void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)didRotateFromInterfaceOrientation:(long long)arg1 ;
-(void)setAlertController:(EUIAlertControllerWrapper *)arg1 ;
-(EUIAlertControllerWrapper *)alertController;
-(double)spacing;
-(CGSize)cellSize;
-(void)setPhotoLibrary:(PHPhotoLibrary *)arg1 ;
-(PHPhotoLibrary *)photoLibrary;
-(void)photoLibraryDidChange:(id)arg1 ;
-(id)initWithController:(id)arg1 ;
-(void)appDidBecomeActive:(id)arg1 ;
-(void)cancelAction:(id)arg1 ;
-(BOOL)isIpad;
-(void)setIsRotating:(BOOL)arg1 ;
-(void)loadAssetCollections;
-(NSMutableArray *)assetCollections;
-(void)setAssetCollections:(NSMutableArray *)arg1 ;
-(void)setCellSize:(CGSize)arg1 ;
@end
