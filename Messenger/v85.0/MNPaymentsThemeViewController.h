/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:20 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <Messenger/MNPaymentsThemeCoordinatorListener.h>

@protocol OS_dispatch_queue, MNPaymentsThemeViewControllerDelegate;
@class MNPaymentsThemeCollectionView, MNPaymentsThemeCollectionViewLayout, FBUserSession, MNPaymentsThemeCoordinator, NSArray, NSObject, NSMutableDictionary, MNPaymentsThemeConfiguration, FBMemMessengerPayTheme, NSString;

@interface MNPaymentsThemeViewController : UIViewController <UICollectionViewDataSource, UICollectionViewDelegate, MNPaymentsThemeCoordinatorListener> {

	MNPaymentsThemeCollectionView* _themeCollectionView;
	MNPaymentsThemeCollectionViewLayout* _themeLayout;
	FBUserSession* _session;
	MNPaymentsThemeCoordinator* _themeCoordinator;
	NSArray* _themes;
	NSObject*<OS_dispatch_queue> _imageProcessQueue;
	NSMutableDictionary* _imagesForThemeId;
	MNPaymentsThemeConfiguration* _configuration;
	FBMemMessengerPayTheme* _preSelectedTheme;
	NSArray* _fetchedThemeList;
	BOOL _shouldPerformThemeCollectionViewUpdate;
	BOOL _isThemeViewVisible;
	id<MNPaymentsThemeViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MNPaymentsThemeViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_reloadThemes;
-(void)_updateThemesIfNeeded;
-(BOOL)_isThemeDataLoaded;
-(void)_updateWithThemes:(id)arg1 withSelectedTheme:(id)arg2 ;
-(id)_themeAtIndexPath:(id)arg1 ;
-(id)currentThemeFBID;
-(BOOL)shouldPerformPromotion;
-(void)_downloadThemeImageAtIndexPath:(id)arg1 ;
-(void)_processImageWithDownloaderResponse:(id)arg1 atIndexPath:(id)arg2 ;
-(void)didUpdateTheme:(id)arg1 ;
-(id)initWithUserSession:(id)arg1 themeConfiguration:(id)arg2 themeCoordinator:(id)arg3 ;
-(id)themeView;
-(void)bumpImpression;
-(void)bumpUsagePromotion;
-(void)setDelegate:(id<MNPaymentsThemeViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<MNPaymentsThemeViewControllerDelegate>)delegate;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidDisappear:(BOOL)arg1 ;
@end
