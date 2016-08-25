/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 12:03:43 AM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FE008365-307B-4CDF-8948-1B974F28A799/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SolitaireFree/SolitaireFree-Structs.h>
#import <SolitaireFree/MPNativeAdAdapterDelegate.h>
#import <SolitaireFree/MPNativeViewDelegate.h>

@protocol MPNativeAdDelegate, MPNativeAdRenderer, MPNativeAdAdapter;
@class NSDate, NSMutableSet, NSString, MPNativeView, NSDictionary;

@interface MPNativeAd : NSObject <MPNativeAdAdapterDelegate, MPNativeViewDelegate> {

	BOOL _hasTrackedImpression;
	BOOL _hasTrackedClick;
	BOOL _hasAttachedToView;
	id<MPNativeAdDelegate> _delegate;
	id<MPNativeAdRenderer> _renderer;
	NSDate* _creationDate;
	NSMutableSet* _clickTrackerURLs;
	NSMutableSet* _impressionTrackerURLs;
	id<MPNativeAdAdapter> _adAdapter;
	NSString* _adIdentifier;
	MPNativeView* _associatedView;

}

@property (nonatomic,readonly) NSDate * creationDate; 
@property (nonatomic,retain) MPNativeView * associatedView; 
@property (nonatomic,retain) id<MPNativeAdRenderer> renderer; 
@property (nonatomic,readonly) NSMutableSet * clickTrackerURLs; 
@property (nonatomic,readonly) NSMutableSet * impressionTrackerURLs; 
@property (nonatomic,readonly) id<MPNativeAdAdapter> adAdapter; 
@property (nonatomic,retain) id<MPNativeAdRenderer> renderer;                     //@synthesize renderer=_renderer - In the implementation block
@property (nonatomic,retain) NSDate * creationDate;                               //@synthesize creationDate=_creationDate - In the implementation block
@property (nonatomic,retain) NSMutableSet * clickTrackerURLs;                     //@synthesize clickTrackerURLs=_clickTrackerURLs - In the implementation block
@property (nonatomic,retain) NSMutableSet * impressionTrackerURLs;                //@synthesize impressionTrackerURLs=_impressionTrackerURLs - In the implementation block
@property (nonatomic,readonly) id<MPNativeAdAdapter> adAdapter;                   //@synthesize adAdapter=_adAdapter - In the implementation block
@property (assign,nonatomic) BOOL hasTrackedImpression;                           //@synthesize hasTrackedImpression=_hasTrackedImpression - In the implementation block
@property (assign,nonatomic) BOOL hasTrackedClick;                                //@synthesize hasTrackedClick=_hasTrackedClick - In the implementation block
@property (nonatomic,copy) NSString * adIdentifier;                               //@synthesize adIdentifier=_adIdentifier - In the implementation block
@property (nonatomic,retain) MPNativeView * associatedView;                       //@synthesize associatedView=_associatedView - In the implementation block
@property (assign,nonatomic) BOOL hasAttachedToView;                              //@synthesize hasAttachedToView=_hasAttachedToView - In the implementation block
@property (assign,nonatomic,__weak) id<MPNativeAdDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSDictionary * properties; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)updateAdViewSize:(CGSize)arg1 ;
-(id)viewControllerForPresentingModalView;
-(BOOL)hasTrackedImpression;
-(void)setHasTrackedImpression:(BOOL)arg1 ;
-(void)trackImpression;
-(BOOL)hasTrackedClick;
-(void)setHasTrackedClick:(BOOL)arg1 ;
-(void)trackClick;
-(void)nativeAdWillLeaveApplicationFromAdapter:(id)arg1 ;
-(void)nativeAdDidDismissModalForAdapter:(id)arg1 ;
-(void)nativeAdWillPresentModalForAdapter:(id)arg1 ;
-(id)initWithAdAdapter:(id)arg1 ;
-(NSMutableSet *)impressionTrackerURLs;
-(NSMutableSet *)clickTrackerURLs;
-(void)nativeAdWillLogImpression:(id)arg1 ;
-(void)willAttachToView:(id)arg1 ;
-(void)adViewTapped;
-(MPNativeView *)associatedView;
-(id<MPNativeAdAdapter>)adAdapter;
-(BOOL)hasAttachedToView;
-(void)setHasAttachedToView:(BOOL)arg1 ;
-(NSString *)adIdentifier;
-(void)trackMetricsForURLs:(id)arg1 ;
-(BOOL)isThirdPartyHandlingClicks;
-(void)trackMetricForURL:(id)arg1 ;
-(void)displayAdContent;
-(void)nativeAdDidClick:(id)arg1 ;
-(void)nativeViewWillMoveToSuperview:(id)arg1 ;
-(id)retrieveAdViewWithError:(id*)arg1 ;
-(void)setClickTrackerURLs:(NSMutableSet *)arg1 ;
-(void)setImpressionTrackerURLs:(NSMutableSet *)arg1 ;
-(void)setAdIdentifier:(NSString *)arg1 ;
-(void)setAssociatedView:(MPNativeView *)arg1 ;
-(void)setDelegate:(id<MPNativeAdDelegate>)arg1 ;
-(id<MPNativeAdDelegate>)delegate;
-(NSDictionary *)properties;
-(void)setRenderer:(id<MPNativeAdRenderer>)arg1 ;
-(id<MPNativeAdRenderer>)renderer;
-(NSDate *)creationDate;
-(void)setCreationDate:(NSDate *)arg1 ;
@end

