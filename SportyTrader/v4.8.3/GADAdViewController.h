/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 10:10:01 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/4C83B32D-E9D7-434B-B0B8-8A6C2C13527D/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SportyTrader/SportyTrader-Structs.h>
#import <UIKit/UIViewController.h>
#import <SportyTrader/GADBannerViewDelegate.h>

@class NSLayoutConstraint, UIView, UISwipeGestureRecognizer, GADBannerView, NSString, GADRequest;

@interface GADAdViewController : UIViewController <GADBannerViewDelegate> {

	NSLayoutConstraint* _bannerPositionConstraintVertical;
	NSLayoutConstraint* _bannerPositionConstraintHorizontal;
	NSLayoutConstraint* _topConstraint;
	NSLayoutConstraint* _bottomConstraint;
	NSLayoutConstraint* _leadingConstraint;
	NSLayoutConstraint* _trailingConstraint;
	UIView* _contentView;
	UISwipeGestureRecognizer* _swipeRecognizer;
	BOOL _handlingSwipe;
	BOOL _hasReceivedValidAd;
	GADBannerView* _bannerView;
	BOOL _animatesVisibility;
	BOOL _adViewHidden;
	BOOL _allowsHidingAds;
	UIView* _originalContentView;
	NSString* _adViewAdUnitID;
	GADRequest* _request;
	long long _adViewPositionVertical;
	long long _adViewPositionHorizontal;
	GADAdSize _adSize;

}

@property (nonatomic,readonly) UIView * originalContentView;                  //@synthesize originalContentView=_originalContentView - In the implementation block
@property (nonatomic,copy) NSString * adViewAdUnitID;                         //@synthesize adViewAdUnitID=_adViewAdUnitID - In the implementation block
@property (nonatomic,retain) GADRequest * request;                            //@synthesize request=_request - In the implementation block
@property (assign,nonatomic) long long adViewPositionVertical;                //@synthesize adViewPositionVertical=_adViewPositionVertical - In the implementation block
@property (assign,nonatomic) long long adViewPositionHorizontal;              //@synthesize adViewPositionHorizontal=_adViewPositionHorizontal - In the implementation block
@property (assign,nonatomic) GADAdSize adSize;                                //@synthesize adSize=_adSize - In the implementation block
@property (assign,nonatomic) BOOL animatesVisibility;                         //@synthesize animatesVisibility=_animatesVisibility - In the implementation block
@property (assign,nonatomic) BOOL adViewHidden;                               //@synthesize adViewHidden=_adViewHidden - In the implementation block
@property (assign,nonatomic) BOOL allowsHidingAds;                            //@synthesize allowsHidingAds=_allowsHidingAds - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)adViewDidReceiveAd:(id)arg1 ;
-(GADAdSize)adSize;
-(void)setAdSize:(GADAdSize)arg1 ;
-(void)setUpBannerViewIfNeededWithOldBannerView:(id)arg1 ;
-(void)bannerPositionUpdated;
-(void)resetContentViewConstraints;
-(void)setUpPositionConstraints;
-(void)updateAdViewHidden:(BOOL)arg1 ;
-(void)bannerSwiped;
-(void)setAdViewAdUnitID:(NSString *)arg1 ;
-(void)setAdViewPositionHorizontal:(long long)arg1 ;
-(void)setAdViewPositionVertical:(long long)arg1 ;
-(void)setAdViewHidden:(BOOL)arg1 ;
-(void)setAllowsHidingAds:(BOOL)arg1 ;
-(NSString *)adViewAdUnitID;
-(long long)adViewPositionVertical;
-(long long)adViewPositionHorizontal;
-(BOOL)animatesVisibility;
-(void)setAnimatesVisibility:(BOOL)arg1 ;
-(BOOL)adViewHidden;
-(BOOL)allowsHidingAds;
-(id)initWithCoder:(id)arg1 ;
-(id)init;
-(GADRequest *)request;
-(void)setView:(id)arg1 ;
-(void)viewDidLoad;
-(void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)didRotateFromInterfaceOrientation:(long long)arg1 ;
-(void)updateLayout;
-(void)commonInit;
-(void)setRequest:(GADRequest *)arg1 ;
-(UIView *)originalContentView;
@end

