/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:49:27 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/FACE73A7-54D9-4209-946C-91D556037309/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <SportyTrader/ANNativeAdResponse.h>
#import <SportyTrader/ANBrowserViewControllerDelegate.h>

@class NSString, ANNativeAdStarRating, UIImage, NSURL, NSDictionary, NSArray, NSDate, ANBrowserViewController, NSTimer;

@interface ANNativeStandardAdResponse : ANNativeAdResponse <ANBrowserViewControllerDelegate> {

	BOOL _expired;
	BOOL _impressionHasBeenTracked;
	NSString* _title;
	NSString* _body;
	NSString* _callToAction;
	ANNativeAdStarRating* _rating;
	UIImage* _mainImage;
	NSURL* _mainImageURL;
	UIImage* _iconImage;
	NSURL* _iconImageURL;
	NSString* _socialContext;
	NSDictionary* _customElements;
	unsigned long long _networkCode;
	NSString* _mediaType;
	NSString* _fullText;
	NSArray* _clickTrackers;
	NSArray* _impTrackers;
	NSURL* _clickURL;
	NSURL* _clickFallbackURL;
	NSDate* _dateCreated;
	ANBrowserViewController* _inAppBrowser;
	unsigned long long _viewabilityValue;
	unsigned long long _targetViewabilityValue;
	NSTimer* _viewabilityTimer;

}

@property (nonatomic,retain) NSString * title;                                       //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSString * body;                                        //@synthesize body=_body - In the implementation block
@property (nonatomic,retain) NSString * callToAction;                                //@synthesize callToAction=_callToAction - In the implementation block
@property (nonatomic,retain) ANNativeAdStarRating * rating;                          //@synthesize rating=_rating - In the implementation block
@property (nonatomic,retain) UIImage * mainImage;                                    //@synthesize mainImage=_mainImage - In the implementation block
@property (nonatomic,retain) NSURL * mainImageURL;                                   //@synthesize mainImageURL=_mainImageURL - In the implementation block
@property (nonatomic,retain) UIImage * iconImage;                                    //@synthesize iconImage=_iconImage - In the implementation block
@property (nonatomic,retain) NSURL * iconImageURL;                                   //@synthesize iconImageURL=_iconImageURL - In the implementation block
@property (nonatomic,retain) NSString * socialContext;                               //@synthesize socialContext=_socialContext - In the implementation block
@property (nonatomic,retain) NSDictionary * customElements;                          //@synthesize customElements=_customElements - In the implementation block
@property (nonatomic,retain) NSString * mediaType;                                   //@synthesize mediaType=_mediaType - In the implementation block
@property (nonatomic,retain) NSString * fullText;                                    //@synthesize fullText=_fullText - In the implementation block
@property (nonatomic,retain) NSArray * clickTrackers;                                //@synthesize clickTrackers=_clickTrackers - In the implementation block
@property (nonatomic,retain) NSArray * impTrackers;                                  //@synthesize impTrackers=_impTrackers - In the implementation block
@property (nonatomic,retain) NSURL * clickURL;                                       //@synthesize clickURL=_clickURL - In the implementation block
@property (nonatomic,retain) NSURL * clickFallbackURL;                               //@synthesize clickFallbackURL=_clickFallbackURL - In the implementation block
@property (nonatomic,retain) NSDate * dateCreated;                                   //@synthesize dateCreated=_dateCreated - In the implementation block
@property (assign,nonatomic) unsigned long long networkCode;                         //@synthesize networkCode=_networkCode - In the implementation block
@property (assign,getter=hasExpired,nonatomic) BOOL expired;                         //@synthesize expired=_expired - In the implementation block
@property (nonatomic,retain) ANBrowserViewController * inAppBrowser;                 //@synthesize inAppBrowser=_inAppBrowser - In the implementation block
@property (assign,nonatomic) unsigned long long viewabilityValue;                    //@synthesize viewabilityValue=_viewabilityValue - In the implementation block
@property (assign,nonatomic) unsigned long long targetViewabilityValue;              //@synthesize targetViewabilityValue=_targetViewabilityValue - In the implementation block
@property (nonatomic,retain) NSTimer * viewabilityTimer;                             //@synthesize viewabilityTimer=_viewabilityTimer - In the implementation block
@property (assign,nonatomic) BOOL impressionHasBeenTracked;                          //@synthesize impressionHasBeenTracked=_impressionHasBeenTracked - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)socialContext;
-(void)setSocialContext:(NSString *)arg1 ;
-(NSString *)callToAction;
-(void)setCallToAction:(NSString *)arg1 ;
-(void)checkViewability;
-(void)setIconImageURL:(NSURL *)arg1 ;
-(NSURL *)iconImageURL;
-(void)handleClick;
-(void)setClickURL:(NSURL *)arg1 ;
-(NSURL *)clickURL;
-(void)setupViewabilityTracker;
-(void)unregisterViewFromTracking;
-(NSTimer *)viewabilityTimer;
-(void)setTargetViewabilityValue:(unsigned long long)arg1 ;
-(void)setViewabilityTimer:(NSTimer *)arg1 ;
-(unsigned long long)viewabilityValue;
-(unsigned long long)targetViewabilityValue;
-(void)setViewabilityValue:(unsigned long long)arg1 ;
-(void)trackImpression;
-(BOOL)impressionHasBeenTracked;
-(void)fireImpTrackers;
-(void)setImpressionHasBeenTracked:(BOOL)arg1 ;
-(NSArray *)impTrackers;
-(void)fireClickTrackers;
-(BOOL)openIntendedBrowserWithURL:(id)arg1 ;
-(NSURL *)clickFallbackURL;
-(ANBrowserViewController *)inAppBrowser;
-(void)setInAppBrowser:(ANBrowserViewController *)arg1 ;
-(NSArray *)clickTrackers;
-(id)rootViewControllerForDisplayingBrowserViewController:(id)arg1 ;
-(void)willPresentBrowserViewController:(id)arg1 ;
-(void)didPresentBrowserViewController:(id)arg1 ;
-(void)willDismissBrowserViewController:(id)arg1 ;
-(void)didDismissBrowserViewController:(id)arg1 ;
-(void)willLeaveApplicationFromBrowserViewController:(id)arg1 ;
-(BOOL)registerResponseInstanceWithNativeView:(id)arg1 rootViewController:(id)arg2 clickableViews:(id)arg3 error:(id*)arg4 ;
-(UIImage *)mainImage;
-(void)setMainImage:(UIImage *)arg1 ;
-(NSURL *)mainImageURL;
-(void)setMainImageURL:(NSURL *)arg1 ;
-(NSDictionary *)customElements;
-(void)setCustomElements:(NSDictionary *)arg1 ;
-(unsigned long long)networkCode;
-(void)setNetworkCode:(unsigned long long)arg1 ;
-(NSString *)fullText;
-(void)setFullText:(NSString *)arg1 ;
-(void)setClickTrackers:(NSArray *)arg1 ;
-(void)setImpTrackers:(NSArray *)arg1 ;
-(void)setClickFallbackURL:(NSURL *)arg1 ;
-(void)setIconImage:(UIImage *)arg1 ;
-(void)dealloc;
-(id)init;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(NSString *)body;
-(UIImage *)iconImage;
-(void)setBody:(NSString *)arg1 ;
-(BOOL)hasExpired;
-(ANNativeAdStarRating *)rating;
-(void)setRating:(ANNativeAdStarRating *)arg1 ;
-(void)setExpired:(BOOL)arg1 ;
-(NSDate *)dateCreated;
-(void)setDateCreated:(NSDate *)arg1 ;
-(NSString *)mediaType;
-(void)setMediaType:(NSString *)arg1 ;
@end
