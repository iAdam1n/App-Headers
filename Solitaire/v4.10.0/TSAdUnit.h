/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:42:15 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/2E0DF6B4-8C57-4F66-9862-2B2C129D4027/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, TSCloseButtonAttributes, TSWatchKitData, NSData, NSURL, NSArray, NSDictionary, UIColor, TapSenseNativeAdsData;

@interface TSAdUnit : NSObject {

	BOOL _canUseInAppDownload;
	BOOL _useTSBrowser;
	BOOL _oneStepDismiss;
	BOOL _muted;
	BOOL _showToolBar;
	BOOL _impressionSent;
	int _actionType;
	NSString* _html;
	NSString* _tapSenseImpressionUrl;
	NSString* _tapSenseClickUrl;
	NSString* _targetingExpr;
	TSCloseButtonAttributes* _closeButtonAttributes;
	NSString* _imageUrl;
	TSWatchKitData* _watchKitData;
	NSData* _imageData;
	NSURL* _baseUrl;
	NSArray* _impressionUrls;
	NSArray* _clickTrackingUrls;
	NSString* _clickThroughUrl;
	NSDictionary* _trackingEvents;
	NSString* _mediaFileUrl;
	NSString* _callToActionText;
	NSString* _advertiserApp;
	UIColor* _ctaTextColor;
	TapSenseNativeAdsData* _nativeAdData;
	long long _index;

}

@property (nonatomic,retain) NSString * html;                                              //@synthesize html=_html - In the implementation block
@property (nonatomic,retain) NSString * tapSenseImpressionUrl;                             //@synthesize tapSenseImpressionUrl=_tapSenseImpressionUrl - In the implementation block
@property (nonatomic,retain) NSString * tapSenseClickUrl;                                  //@synthesize tapSenseClickUrl=_tapSenseClickUrl - In the implementation block
@property (assign,nonatomic) BOOL canUseInAppDownload;                                     //@synthesize canUseInAppDownload=_canUseInAppDownload - In the implementation block
@property (assign,nonatomic) BOOL useTSBrowser;                                            //@synthesize useTSBrowser=_useTSBrowser - In the implementation block
@property (nonatomic,retain) NSString * targetingExpr;                                     //@synthesize targetingExpr=_targetingExpr - In the implementation block
@property (assign,nonatomic) BOOL oneStepDismiss;                                          //@synthesize oneStepDismiss=_oneStepDismiss - In the implementation block
@property (nonatomic,retain) TSCloseButtonAttributes * closeButtonAttributes;              //@synthesize closeButtonAttributes=_closeButtonAttributes - In the implementation block
@property (nonatomic,retain) NSString * imageUrl;                                          //@synthesize imageUrl=_imageUrl - In the implementation block
@property (nonatomic,retain) TSWatchKitData * watchKitData;                                //@synthesize watchKitData=_watchKitData - In the implementation block
@property (nonatomic,retain) NSData * imageData;                                           //@synthesize imageData=_imageData - In the implementation block
@property (nonatomic,retain) NSURL * baseUrl;                                              //@synthesize baseUrl=_baseUrl - In the implementation block
@property (nonatomic,retain) NSArray * impressionUrls;                                     //@synthesize impressionUrls=_impressionUrls - In the implementation block
@property (nonatomic,retain) NSArray * clickTrackingUrls;                                  //@synthesize clickTrackingUrls=_clickTrackingUrls - In the implementation block
@property (nonatomic,retain) NSString * clickThroughUrl;                                   //@synthesize clickThroughUrl=_clickThroughUrl - In the implementation block
@property (nonatomic,retain) NSDictionary * trackingEvents;                                //@synthesize trackingEvents=_trackingEvents - In the implementation block
@property (nonatomic,retain) NSString * mediaFileUrl;                                      //@synthesize mediaFileUrl=_mediaFileUrl - In the implementation block
@property (assign,nonatomic) BOOL muted;                                                   //@synthesize muted=_muted - In the implementation block
@property (nonatomic,retain) NSString * callToActionText;                                  //@synthesize callToActionText=_callToActionText - In the implementation block
@property (nonatomic,retain) NSString * advertiserApp;                                     //@synthesize advertiserApp=_advertiserApp - In the implementation block
@property (assign,nonatomic) BOOL showToolBar;                                             //@synthesize showToolBar=_showToolBar - In the implementation block
@property (nonatomic,retain) UIColor * ctaTextColor;                                       //@synthesize ctaTextColor=_ctaTextColor - In the implementation block
@property (assign,nonatomic) BOOL impressionSent;                                          //@synthesize impressionSent=_impressionSent - In the implementation block
@property (nonatomic,retain) TapSenseNativeAdsData * nativeAdData;                         //@synthesize nativeAdData=_nativeAdData - In the implementation block
@property (assign,nonatomic) int actionType;                                               //@synthesize actionType=_actionType - In the implementation block
@property (assign,nonatomic) long long index;                                              //@synthesize index=_index - In the implementation block
-(BOOL)showToolBar;
-(void)setMediaFileUrl:(NSString *)arg1 ;
-(NSString *)mediaFileUrl;
-(NSURL *)baseUrl;
-(void)setBaseUrl:(NSURL *)arg1 ;
-(NSString *)callToActionText;
-(NSDictionary *)trackingEvents;
-(void)setTrackingEvents:(NSDictionary *)arg1 ;
-(NSArray *)clickTrackingUrls;
-(void)setClickTrackingUrls:(NSArray *)arg1 ;
-(NSArray *)impressionUrls;
-(void)setImpressionUrls:(NSArray *)arg1 ;
-(TapSenseNativeAdsData *)nativeAdData;
-(void)setNativeAdData:(TapSenseNativeAdsData *)arg1 ;
-(TSCloseButtonAttributes *)closeButtonAttributes;
-(NSString *)imageUrl;
-(void)setImageUrl:(NSString *)arg1 ;
-(NSString *)tapSenseImpressionUrl;
-(TSWatchKitData *)watchKitData;
-(NSString *)tapSenseClickUrl;
-(NSString *)clickThroughUrl;
-(UIColor *)ctaTextColor;
-(void)setClickThroughUrl:(NSString *)arg1 ;
-(void)setWatchKitData:(TSWatchKitData *)arg1 ;
-(void)setTapSenseImpressionUrl:(NSString *)arg1 ;
-(void)setTapSenseClickUrl:(NSString *)arg1 ;
-(void)setAdvertiserApp:(NSString *)arg1 ;
-(void)setOneStepDismiss:(BOOL)arg1 ;
-(void)setUseTSBrowser:(BOOL)arg1 ;
-(void)setCloseButtonAttributes:(TSCloseButtonAttributes *)arg1 ;
-(void)setCanUseInAppDownload:(BOOL)arg1 ;
-(void)setCallToActionText:(NSString *)arg1 ;
-(void)setShowToolBar:(BOOL)arg1 ;
-(void)setCtaTextColor:(UIColor *)arg1 ;
-(void)setTargetingExpr:(NSString *)arg1 ;
-(BOOL)useTSBrowser;
-(NSString *)targetingExpr;
-(BOOL)oneStepDismiss;
-(BOOL)canUseInAppDownload;
-(NSString *)advertiserApp;
-(BOOL)impressionSent;
-(void)setImpressionSent:(BOOL)arg1 ;
-(id)init;
-(long long)index;
-(void)setIndex:(long long)arg1 ;
-(void)setImageData:(NSData *)arg1 ;
-(void)setActionType:(int)arg1 ;
-(NSString *)html;
-(void)setHtml:(NSString *)arg1 ;
-(BOOL)muted;
-(int)actionType;
-(NSData *)imageData;
-(void)setMuted:(BOOL)arg1 ;
@end
