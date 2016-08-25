/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:49:35 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/A861CD42-DC74-45D3-9030-D3B6F185E279/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegate.h>

@protocol ECItemDataProviderProtocol;
@class NSString, UIImage, UICollectionViewFlowLayout, UICollectionView, ECHomeItemStripeHeaderLabel, NSArray, UIActivityIndicatorView, ECHomeStripeNoItemsView, ECHomeStripeBaseNoItemsView, UIImageView;

@interface ECHomeItemViewController : UIViewController <UICollectionViewDataSource, UICollectionViewDelegate> {

	BOOL _useWatchListNoItemsView;
	BOOL _hideInfoIcon;
	BOOL _hasShowAllPath;
	BOOL _needsLoadFlag;
	id<ECItemDataProviderProtocol> _dataProvider;
	unsigned long long _maxNumberOfItems;
	NSString* _noItemTitle;
	NSString* _nonItemSubTitle;
	NSString* _errorTitle;
	UIImage* _noItemImage;
	/*^block*/id _onSelectAd;
	/*^block*/id _onSelectShowAllAds;
	/*^block*/id _onError;
	UICollectionViewFlowLayout* _layout;
	UICollectionView* _collectionView;
	ECHomeItemStripeHeaderLabel* _label;
	NSArray* _items;
	UIActivityIndicatorView* _loadingIndicator;
	UIActivityIndicatorView* _activityIndicator;
	ECHomeStripeNoItemsView* _watchListNoItemsView;
	ECHomeStripeBaseNoItemsView* _simpleNoItemsView;
	UIImageView* _infoIcon;
	UIImageView* _backgroundViewForActivityIndicator;

}

@property (assign,nonatomic,__weak) UICollectionViewFlowLayout * layout;                           //@synthesize layout=_layout - In the implementation block
@property (assign,nonatomic,__weak) UICollectionView * collectionView;                             //@synthesize collectionView=_collectionView - In the implementation block
@property (assign,nonatomic,__weak) ECHomeItemStripeHeaderLabel * label;                           //@synthesize label=_label - In the implementation block
@property (nonatomic,retain) NSArray * items;                                                      //@synthesize items=_items - In the implementation block
@property (assign,nonatomic,__weak) UIActivityIndicatorView * loadingIndicator;                    //@synthesize loadingIndicator=_loadingIndicator - In the implementation block
@property (assign,nonatomic) BOOL hasShowAllPath;                                                  //@synthesize hasShowAllPath=_hasShowAllPath - In the implementation block
@property (assign,nonatomic,__weak) UIActivityIndicatorView * activityIndicator;                   //@synthesize activityIndicator=_activityIndicator - In the implementation block
@property (assign,nonatomic,__weak) ECHomeStripeNoItemsView * watchListNoItemsView;                //@synthesize watchListNoItemsView=_watchListNoItemsView - In the implementation block
@property (assign,nonatomic,__weak) ECHomeStripeBaseNoItemsView * simpleNoItemsView;               //@synthesize simpleNoItemsView=_simpleNoItemsView - In the implementation block
@property (assign,nonatomic,__weak) UIImageView * infoIcon;                                        //@synthesize infoIcon=_infoIcon - In the implementation block
@property (assign,nonatomic) BOOL needsLoadFlag;                                                   //@synthesize needsLoadFlag=_needsLoadFlag - In the implementation block
@property (assign,nonatomic,__weak) UIImageView * backgroundViewForActivityIndicator;              //@synthesize backgroundViewForActivityIndicator=_backgroundViewForActivityIndicator - In the implementation block
@property (nonatomic,retain) id<ECItemDataProviderProtocol> dataProvider;                          //@synthesize dataProvider=_dataProvider - In the implementation block
@property (assign,nonatomic) unsigned long long maxNumberOfItems;                                  //@synthesize maxNumberOfItems=_maxNumberOfItems - In the implementation block
@property (nonatomic,copy) NSString * noItemTitle;                                                 //@synthesize noItemTitle=_noItemTitle - In the implementation block
@property (nonatomic,copy) NSString * nonItemSubTitle;                                             //@synthesize nonItemSubTitle=_nonItemSubTitle - In the implementation block
@property (nonatomic,copy) NSString * errorTitle;                                                  //@synthesize errorTitle=_errorTitle - In the implementation block
@property (nonatomic,retain) UIImage * noItemImage;                                                //@synthesize noItemImage=_noItemImage - In the implementation block
@property (nonatomic,copy) id onSelectAd;                                                          //@synthesize onSelectAd=_onSelectAd - In the implementation block
@property (nonatomic,copy) id onSelectShowAllAds;                                                  //@synthesize onSelectShowAllAds=_onSelectShowAllAds - In the implementation block
@property (nonatomic,copy) id onError;                                                             //@synthesize onError=_onError - In the implementation block
@property (assign,nonatomic) BOOL useWatchListNoItemsView;                                         //@synthesize useWatchListNoItemsView=_useWatchListNoItemsView - In the implementation block
@property (assign,nonatomic) BOOL hideInfoIcon;                                                    //@synthesize hideInfoIcon=_hideInfoIcon - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setNeedsLoadFlag:(BOOL)arg1 ;
-(void)setUpNoItemsView;
-(UIImageView *)infoIcon;
-(UIImageView *)backgroundViewForActivityIndicator;
-(BOOL)hideInfoIcon;
-(ECHomeStripeNoItemsView *)watchListNoItemsView;
-(ECHomeStripeBaseNoItemsView *)simpleNoItemsView;
-(BOOL)useWatchListNoItemsView;
-(void)setUpWatchListNoItemsView;
-(void)setUpBasicNoItemsView;
-(unsigned long long)positionOfAd:(id)arg1 ;
-(BOOL)needsLoadFlag;
-(void)activityStartAnimating;
-(void)activityStopAnimating;
-(unsigned long long)maxNumberOfItems;
-(void)setHasShowAllPath:(BOOL)arg1 ;
-(BOOL)hasShowAllPath;
-(BOOL)isShowAllPath:(id)arg1 ;
-(id)adForPath:(id)arg1 ;
-(id)onSelectShowAllAds;
-(BOOL)isItemCell:(id)arg1 ;
-(id)onSelectAd;
-(NSString *)noItemTitle;
-(NSString *)nonItemSubTitle;
-(UIImage *)noItemImage;
-(void)showAd:(id)arg1 ;
-(void)showSimpleErrorView;
-(void)setMaxNumberOfItems:(unsigned long long)arg1 ;
-(void)setNoItemTitle:(NSString *)arg1 ;
-(void)setNonItemSubTitle:(NSString *)arg1 ;
-(void)setNoItemImage:(UIImage *)arg1 ;
-(void)setOnSelectAd:(id)arg1 ;
-(void)setOnSelectShowAllAds:(id)arg1 ;
-(void)setUseWatchListNoItemsView:(BOOL)arg1 ;
-(void)setHideInfoIcon:(BOOL)arg1 ;
-(void)setWatchListNoItemsView:(ECHomeStripeNoItemsView *)arg1 ;
-(void)setSimpleNoItemsView:(ECHomeStripeBaseNoItemsView *)arg1 ;
-(void)setInfoIcon:(UIImageView *)arg1 ;
-(void)setBackgroundViewForActivityIndicator:(UIImageView *)arg1 ;
-(void)reloadData;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidLayoutSubviews;
-(NSArray *)items;
-(void)setItems:(NSArray *)arg1 ;
-(UICollectionViewFlowLayout *)layout;
-(UICollectionView *)collectionView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(ECHomeItemStripeHeaderLabel *)label;
-(void)setLabel:(ECHomeItemStripeHeaderLabel *)arg1 ;
-(void)setLayout:(UICollectionViewFlowLayout *)arg1 ;
-(void)setCollectionView:(UICollectionView *)arg1 ;
-(void)setDataProvider:(id<ECItemDataProviderProtocol>)arg1 ;
-(id<ECItemDataProviderProtocol>)dataProvider;
-(UIActivityIndicatorView *)activityIndicator;
-(void)setActivityIndicator:(UIActivityIndicatorView *)arg1 ;
-(void)setNeedsReload;
-(void)setLoadingIndicator:(UIActivityIndicatorView *)arg1 ;
-(UIActivityIndicatorView *)loadingIndicator;
-(void)reloadIfNeeded;
-(id)onError;
-(void)setOnError:(id)arg1 ;
-(void)setErrorTitle:(NSString *)arg1 ;
-(NSString *)errorTitle;
@end

