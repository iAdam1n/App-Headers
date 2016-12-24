/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:42:15 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/2E0DF6B4-8C57-4F66-9862-2B2C129D4027/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SolitaireFree/SolitaireFree-Structs.h>
#import <UIKit/UIView.h>
#import <SolitaireFree/AMAdViewDelegate.h>

@protocol AmazonAdViewDelegate, AmazonOOAdViewDelegate;
@class AMAdView, AmazonAdOptions, NSString;

@interface AmazonAdView : UIView <AMAdViewDelegate> {

	id<AmazonAdViewDelegate> _delegate;
	AMAdView* _amAdView;
	AmazonAdOptions* _options;
	id<AmazonOOAdViewDelegate> _ooDelegate;
	NSString* _requestId;

}

@property (assign,nonatomic,__weak) id<AmazonAdViewDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) AMAdView * amAdView;                                       //@synthesize amAdView=_amAdView - In the implementation block
@property (nonatomic,retain) AmazonAdOptions * options;                                 //@synthesize options=_options - In the implementation block
@property (assign,nonatomic,__weak) id<AmazonOOAdViewDelegate> ooDelegate;              //@synthesize ooDelegate=_ooDelegate - In the implementation block
@property (nonatomic,retain) NSString * requestId;                                      //@synthesize requestId=_requestId - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)amazonAdViewWithAdSize:(CGSize)arg1 ;
+(id)alloc;
-(id)viewControllerForPresentingModalView;
-(void)adViewDidFailToLoadAd:(id)arg1 ;
-(void)willPresentModalViewForAd:(id)arg1 ;
-(void)didDismissModalViewForAd:(id)arg1 ;
-(void)adViewDidFailToLoadAd:(id)arg1 withError:(id)arg2 ;
-(id)initWithAdSize:(CGSize)arg1 ;
-(void)submitMetricsOnSuccess;
-(void)submitMetricsOnFailure;
-(id)initProperties:(CGSize)arg1 autoSizeEnabled:(BOOL)arg2 ;
-(id)initWithFrame:(CGRect)arg1 autoSizeEnabled:(BOOL)arg2 ;
-(AMAdView *)amAdView;
-(void)setAmAdView:(AMAdView *)arg1 ;
-(void)adViewDidClickOnAd:(id)arg1 withPrivateURL:(id)arg2 ;
-(BOOL)isAdExpanded;
-(void)willResizeAd:(id)arg1 toFrame:(CGRect)arg2 ;
-(void)adViewDidLoadAd:(id)arg1 withRequestId:(id)arg2 ;
-(id)adErrorFromError:(id)arg1 ;
-(id<AmazonOOAdViewDelegate>)ooDelegate;
-(void)setOoDelegate:(id<AmazonOOAdViewDelegate>)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setDelegate:(id<AmazonAdViewDelegate>)arg1 ;
-(void)dealloc;
-(id<AmazonAdViewDelegate>)delegate;
-(AmazonAdOptions *)options;
-(void)setOptions:(AmazonAdOptions *)arg1 ;
-(void)setHorizontalAlignment:(long long)arg1 ;
-(void)setVerticalAlignment:(long long)arg1 ;
-(NSString *)requestId;
-(void)setRequestId:(NSString *)arg1 ;
-(void)loadAd:(id)arg1 ;
@end
