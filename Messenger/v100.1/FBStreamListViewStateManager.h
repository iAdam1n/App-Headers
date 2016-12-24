/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:22 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBReachabilityListener.h>

@protocol FBLoadingView, FBStreamListViewStateManagerDelegate;
@class FBPullToRefreshView, UIView, FBTransientViewStateManager, FBFeedBannerPresenter, FBFeedNetworkErrorBanner, FBFeedBannerContainerView, FBReachabilityAnnouncer, NSString, UIImage;

@interface FBStreamListViewStateManager : NSObject <FBReachabilityListener> {

	FBPullToRefreshView* _pullToRefreshView;
	UIView*<FBLoadingView> _loadingView;
	FBTransientViewStateManager* _viewStateManager;
	FBFeedBannerPresenter* _bannerPresenter;
	FBFeedNetworkErrorBanner* _networkErrorBanner;
	FBFeedBannerContainerView* _bannerContainer;
	FBReachabilityAnnouncer* _reachabilityAnnouncer;
	BOOL _animating;
	id<FBStreamListViewStateManagerDelegate> _delegate;
	long long _state;

}

@property (assign,nonatomic,__weak) id<FBStreamListViewStateManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) long long state;                                                       //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) UIView * emptyStateView; 
@property (nonatomic,copy) NSString * emptyStateText; 
@property (nonatomic,retain) UIImage * imageForEmptyView; 
@property (nonatomic,copy) NSString * buttonTextForEmpty; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)reachabilityStateChangedTo:(unsigned long long)arg1 from:(unsigned long long)arg2 ;
-(void)setImageForEmptyView:(UIImage *)arg1 ;
-(id)initWithView:(id)arg1 pullToRefreshView:(id)arg2 loadingView:(id)arg3 ;
-(void)setEmptyStateText:(NSString *)arg1 ;
-(void)setEmptyStateView:(UIView *)arg1 ;
-(void)updatePullToRefreshView:(id)arg1 ;
-(void)updateLayoutWithContentWidth:(double)arg1 ;
-(void)hideLoadingViewForState:(unsigned long long)arg1 ;
-(void)removeReachabilityObserver;
-(void)_showBannerWithTitle:(id)arg1 ;
-(void)_retryButtonPressed;
-(void)addReachabilityObserver;
-(UIImage *)imageForEmptyView;
-(NSString *)buttonTextForEmpty;
-(void)setButtonTextForEmpty:(NSString *)arg1 ;
-(void)_sizeBanner;
-(id)initWithView:(id)arg1 pullToRefreshView:(id)arg2 ;
-(UIView *)emptyStateView;
-(NSString *)emptyStateText;
-(void)setDelegate:(id<FBStreamListViewStateManagerDelegate>)arg1 ;
-(id<FBStreamListViewStateManagerDelegate>)delegate;
-(long long)state;
-(void)setState:(long long)arg1 ;
-(void)_hideBanner;
@end
