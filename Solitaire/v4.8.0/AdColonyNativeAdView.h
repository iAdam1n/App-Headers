/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 12:03:43 AM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FE008365-307B-4CDF-8948-1B974F28A799/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SolitaireFree/SolitaireFree-Structs.h>
#import <UIKit/UIView.h>
#import <libobjc.A.dylib/SKStoreProductViewControllerDelegate.h>
#import <SolitaireFree/AdColonyAdDelegate.h>
#import <SolitaireFree/AdColonyNativeAdEngagementDelegate.h>

@protocol AdColonyNativeAdDelegate;
@class ADCAd, NSString, NSDictionary, UIImage, ADCZone, UIViewController, UIView, ADCAVPlayerPlaybackView, UIImageView, UIButton;

@interface AdColonyNativeAdView : UIView <SKStoreProductViewControllerDelegate, AdColonyAdDelegate, AdColonyNativeAdEngagementDelegate> {

	ADCAd* _ad;
	id<AdColonyNativeAdDelegate> _delegate;
	NSString* _adSessionGUID;
	NSDictionary* _tracking;
	NSDictionary* _thirdPartyTracking;
	BOOL sentFirstQuartile;
	BOOL sentMidPoint;
	BOOL sentThirdQuartile;
	double _aspectRatio;
	UIImage* _advertiserIcon;
	NSString* _advertiserName;
	NSString* _adTitle;
	NSString* _adDescription;
	float _volume;
	BOOL _muted;
	unsigned long long _state;
	id _videoTimeObserver;
	double _videoDuration;
	ADCZone* _zone;
	int _ad_slot;
	UIViewController* _viewController;
	UIView* _videoContainer;
	ADCAVPlayerPlaybackView* _videoView;
	UIImageView* _posterView;
	UIButton* _muteButton;
	UIButton* _playButton;
	BOOL _userMutable;
	double _muteWidth;
	double _muteHeight;
	double _unmuteWidth;
	double _unmuteHeight;
	BOOL _engagementEnabled;
	UIButton* _engagementButton;
	NSString* _engagementType;
	NSString* _engagementData;
	NSString* _engagementProductID;
	BOOL _posterClickActionInApp;
	NSString* _posterClickActionType;
	NSString* _posterClickActionProductID;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<AdColonyNativeAdDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSString * advertiserName;                               //@synthesize advertiserName=_advertiserName - In the implementation block
@property (nonatomic,readonly) UIImage * advertiserIcon;                                //@synthesize advertiserIcon=_advertiserIcon - In the implementation block
@property (nonatomic,readonly) NSString * adTitle;                                      //@synthesize adTitle=_adTitle - In the implementation block
@property (nonatomic,readonly) NSString * adDescription;                                //@synthesize adDescription=_adDescription - In the implementation block
@property (nonatomic,retain) UIButton * engagementButton;                               //@synthesize engagementButton=_engagementButton - In the implementation block
@property (assign,nonatomic) float volume; 
@property (assign,nonatomic) BOOL muted; 
-(void)onAdColonyAdAttemptFinished:(BOOL)arg1 inZone:(id)arg2 ;
-(void)onBackgrounded;
-(void)onResignActive;
-(void)onBecomeActive;
-(void)onVideoTimeChanged:(id)arg1 ;
-(void)onVideoFinished;
-(void)onVideoContainerTapped;
-(void)onEngagementTapped;
-(void)updateCurrentAdInfo:(BOOL)arg1 ;
-(void)showAppStoreWithProductID:(id)arg1 ;
-(void)showInAppAppStoreWithProductID:(id)arg1 ;
-(void)showFullscreen;
-(void)onInVideoEngagementPressed:(BOOL)arg1 ;
-(void)showAppStoreWithURL:(id)arg1 ;
-(id)initWithAd:(id)arg1 aspectRatio:(double)arg2 config:(id)arg3 tracking:(id)arg4 thirdPartyTracking:(id)arg5 inZone:(id)arg6 adSlot:(int)arg7 viewController:(id)arg8 ;
-(void)layoutSubviews;
-(void)productViewControllerDidFinish:(id)arg1 ;
-(void)mutePressed;
-(void)updateMuteButtonState;
-(void)reportMuteEvents:(BOOL)arg1 ;
-(double)recommendedHeightForWidth:(double)arg1 ;
-(NSString *)advertiserName;
-(UIImage *)advertiserIcon;
-(NSString *)adTitle;
-(NSString *)adDescription;
-(UIButton *)engagementButton;
-(void)setEngagementButton:(UIButton *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setDelegate:(id<AdColonyNativeAdDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(void)setFrame:(CGRect)arg1 ;
-(id<AdColonyNativeAdDelegate>)delegate;
-(void)resume;
-(void)pause;
-(BOOL)muted;
-(void)setMuted:(BOOL)arg1 ;
-(void)setVolume:(float)arg1 ;
-(float)volume;
@end

