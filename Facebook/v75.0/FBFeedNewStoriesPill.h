/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:10 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBFeedBanner.h>
#import <UIKit/UIScrollViewDelegate.h>

@protocol FBFeedNewStoriesPillDelegate;
@class NSObject, FBFeedNewStoriesPillView, FBFeedBannerPresenter, CAKeyframeAnimation, NSString;

@interface FBFeedNewStoriesPill : NSObject <FBFeedBanner, UIScrollViewDelegate> {

	NSObject*<FBFeedNewStoriesPillDelegate> _delegate;
	FBFeedNewStoriesPillView* _bannerView;
	FBFeedBannerPresenter* _presenter;
	double _lastContentOffset;
	BOOL _hiding;
	BOOL _unhideOnAppear;
	CAKeyframeAnimation* _dropAndBounceAnimation;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithBannerPresenter:(id)arg1 delegate:(id)arg2 ;
-(void)setUnreadCount:(long long)arg1 hasGap:(BOOL)arg2 ;
-(void)pillTapped:(id)arg1 ;
-(void)_showPill;
-(id)dropAndBounceAnimation;
-(BOOL)_isCurrentBanner;
-(BOOL)shouldAnimateBannerAppearance;
-(void)_ensureNotPartiallyVisible;
-(void)_moveForContentOffset:(double)arg1 ;
-(BOOL)shouldAnimateBannerDisappearanceWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)bannerOverlapsWithShadow;
-(void)bannerWillAppear;
-(void)bannerWillDisappear;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(void)scrollViewDidScrollToTop:(id)arg1 ;
-(void)viewDidAppear;
-(void)_hideBanner;
-(id)bannerView;
-(long long)unreadCount;
@end
