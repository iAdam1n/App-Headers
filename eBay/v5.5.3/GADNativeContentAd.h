/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 23, 2016 at 8:53:16 PM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/B79A6C91-6A31-4B98-98DF-DAB1E6185487/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <eBay/GADNativeAd.h>
#import <eBay/GADMediatedNativeContentAd.h>
#import <eBay/GADAdLoading.h>
#import <eBay/GADNativeAdSourceAttributing.h>
#import <eBay/GADOverlayViewSource.h>

@class NSArray, NSMutableArray, GADOverlayView, NSString, GADNativeAdImage, GADNativeAdAttribution;

@interface GADNativeContentAd : GADNativeAd <GADMediatedNativeContentAd, GADAdLoading, GADNativeAdSourceAttributing, GADOverlayViewSource> {

	BOOL _disableImageLoading;
	NSArray* _nativeAdImages;
	NSMutableArray* _availableNativeAdImages;
	GADOverlayView* _overlayView;
	NSString* _headline;
	NSString* _body;
	NSString* _callToAction;
	GADNativeAdImage* _logo;
	NSString* _advertiser;
	GADNativeAdAttribution* _attribution;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * headline; 
@property (nonatomic,copy,readonly) NSString * body; 
@property (nonatomic,copy,readonly) NSArray * images; 
@property (nonatomic,readonly) GADNativeAdImage * logo;                         //@synthesize logo=_logo - In the implementation block
@property (nonatomic,copy,readonly) NSString * callToAction;                    //@synthesize callToAction=_callToAction - In the implementation block
@property (nonatomic,copy,readonly) NSString * advertiser;                      //@synthesize advertiser=_advertiser - In the implementation block
@property (nonatomic,retain) GADNativeAdAttribution * attribution;              //@synthesize attribution=_attribution - In the implementation block
+(id)requiredDelegateProtocol;
+(id)requestParametersForAdLoader:(id)arg1 ;
-(void)GADNativeContentAd_category;
-(NSString *)callToAction;
-(id)initWithMediatedNativeAd:(id)arg1 options:(id)arg2 ;
-(id)requiredAssets;
-(void)loadAssetsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)adLoaderDidReceiveAd:(id)arg1 ;
-(id)clickActionTemplateID;
-(NSArray *)images;
-(NSString *)body;
-(GADNativeAdAttribution *)attribution;
-(void)setAttribution:(GADNativeAdAttribution *)arg1 ;
-(GADNativeAdImage *)logo;
-(id)initWithDictionary:(id)arg1 options:(id)arg2 ;
-(id)overlayView;
-(void)setSlot:(id)arg1 ;
-(NSString *)advertiser;
-(NSString *)headline;
@end
