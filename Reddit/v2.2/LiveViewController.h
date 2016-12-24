/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:34:06 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/3DFA7E95-0979-4D86-B373-C986386EF259/Reddit.app/Reddit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Reddit/Reddit-Structs.h>
#import <Reddit/ListingViewController.h>
#import <Reddit/LiveHandlerDelegate.h>
#import <Reddit/PagedTabControllerProtocol.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegateFlowLayout.h>
#import <Reddit/ListingNetworkSourceDelegate.h>
#import <Reddit/LiveNetworkSourceDelegate.h>
#import <Reddit/LiveUpdateContentViewDelegate.h>

@class LiveHandler, LiveEvent, BaseLabel, FloatingUpdateView, FeedViewFlowLayout, BaseCollectionView, NSIndexPath, NSURLSession, NSTimer, NSString;

@interface LiveViewController : ListingViewController <LiveHandlerDelegate, PagedTabControllerProtocol, UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, ListingNetworkSourceDelegate, LiveNetworkSourceDelegate, LiveUpdateContentViewDelegate> {

	BOOL _isReloading;
	LiveHandler* _liveHandler;
	LiveEvent* _liveEvent;
	BaseLabel* _titleLabel;
	FloatingUpdateView* _updateView;
	unsigned long long _newUpdatesCount;
	FeedViewFlowLayout* _feedViewFlowLayout;
	BaseCollectionView* _feedCollectionView;
	NSIndexPath* _maxScrollIndexPath;
	NSURLSession* _trackingSession;
	NSTimer* _trackingTimer;

}

@property (nonatomic,retain) LiveHandler * liveHandler;                            //@synthesize liveHandler=_liveHandler - In the implementation block
@property (nonatomic,retain) LiveEvent * liveEvent;                                //@synthesize liveEvent=_liveEvent - In the implementation block
@property (nonatomic,retain) BaseLabel * titleLabel;                               //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) FloatingUpdateView * updateView;                      //@synthesize updateView=_updateView - In the implementation block
@property (assign,nonatomic) unsigned long long newUpdatesCount;                   //@synthesize newUpdatesCount=_newUpdatesCount - In the implementation block
@property (nonatomic,retain) FeedViewFlowLayout * feedViewFlowLayout;              //@synthesize feedViewFlowLayout=_feedViewFlowLayout - In the implementation block
@property (nonatomic,retain) BaseCollectionView * feedCollectionView;              //@synthesize feedCollectionView=_feedCollectionView - In the implementation block
@property (assign,nonatomic) BOOL isReloading;                                     //@synthesize isReloading=_isReloading - In the implementation block
@property (nonatomic,retain) NSIndexPath * maxScrollIndexPath;                     //@synthesize maxScrollIndexPath=_maxScrollIndexPath - In the implementation block
@property (nonatomic,retain) NSURLSession * trackingSession;                       //@synthesize trackingSession=_trackingSession - In the implementation block
@property (nonatomic,retain) NSTimer * trackingTimer;                              //@synthesize trackingTimer=_trackingTimer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)analyticsScreenViewParameters;
-(id)analyticsScreenViewName;
-(void)setLiveEvent:(LiveEvent *)arg1 ;
-(void)configureWithLiveEvent:(id)arg1 ;
-(LiveEvent *)liveEvent;
-(void)configureNavigationBarAppearance;
-(BaseCollectionView *)feedCollectionView;
-(id)majorContentScrollView;
-(void)updateContentViewsWhenReloadFinishes;
-(void)updateContentViewsWhenLoadingMoreFinishes;
-(FeedViewFlowLayout *)feedViewFlowLayout;
-(NSIndexPath *)maxScrollIndexPath;
-(void)setMaxScrollIndexPath:(NSIndexPath *)arg1 ;
-(id)analyticsScrollEventParameters;
-(void)setFeedViewFlowLayout:(FeedViewFlowLayout *)arg1 ;
-(void)setFeedCollectionView:(BaseCollectionView *)arg1 ;
-(void)listingNetworkSourceDidFail:(id)arg1 ;
-(void)handleAppDidEnterForeground;
-(LiveHandler *)liveHandler;
-(void)setLiveHandler:(LiveHandler *)arg1 ;
-(void)liveHandlerDidLoseConnection:(id)arg1 ;
-(void)liveHandlerDidConnect:(id)arg1 ;
-(void)liveHandler:(id)arg1 didReceiveEmbeds:(id)arg2 withRenderedEmbeds:(id)arg3 forPK:(id)arg4 ;
-(void)liveHandler:(id)arg1 didReceiveUpdate:(id)arg2 ;
-(void)liveHandler:(id)arg1 didDeleteUpdateWithPK:(id)arg2 ;
-(void)liveHandler:(id)arg1 didStrikeUpdateWithPK:(id)arg2 ;
-(void)handleAppDidEnterBackgroundInternal;
-(BOOL)heartbeatLoggingEnabled;
-(id)pageItemImage;
-(id)pageItemSelectedImage;
-(id)pageItemText;
-(void)liveUpdateContentView:(id)arg1 didTapLinkWithURLString:(id)arg2 ;
-(void)liveUpdateContentView:(id)arg1 didRequestLightboxWithImage:(id)arg2 withURL:(id)arg3 ;
-(void)liveUpdateContentView:(id)arg1 didRequestLightboxWithVideoURL:(id)arg2 ;
-(void)liveEventDidUpdate:(id)arg1 ;
-(void)setupTrackingTimer;
-(void)stopTrackingTimer;
-(double)totalHeaderHeight;
-(void)configureTitleWithLiveEvent:(id)arg1 ;
-(void)setNewUpdatesCount:(unsigned long long)arg1 ;
-(void)didTouchFloatingUpdateView:(id)arg1 ;
-(void)setFloatingUpdateViewVisible:(BOOL)arg1 updatedTextOrNil:(id)arg2 animated:(BOOL)arg3 ;
-(unsigned long long)newUpdatesCount;
-(id)attributedStringForHeader;
-(BOOL)scrollViewIsAtTop;
-(NSTimer *)trackingTimer;
-(void)sendActivityTrackingRequest;
-(void)setTrackingTimer:(NSTimer *)arg1 ;
-(NSURLSession *)trackingSession;
-(void)liveNetworkSource:(id)arg1 didParseEmbedForUpdate:(id)arg2 ;
-(void)setUpdateView:(FloatingUpdateView *)arg1 ;
-(BOOL)isReloading;
-(void)setIsReloading:(BOOL)arg1 ;
-(void)setTrackingSession:(NSURLSession *)arg1 ;
-(id)init;
-(void)dealloc;
-(void)scrollViewDidScroll:(id)arg1 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(long long)preferredStatusBarStyle;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)viewWillLayoutSubviews;
-(BaseLabel *)titleLabel;
-(double)sectionHeaderHeight;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(void)viewDidLoad;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3 ;
-(FloatingUpdateView *)updateView;
-(void)setTitleLabel:(BaseLabel *)arg1 ;
@end
