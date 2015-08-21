/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:49:27 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/FACE73A7-54D9-4209-946C-91D556037309/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <SportyTrader/ANNativeAdResponse.h>
#import <SportyTrader/ANNativeCustomAdapterAdDelegate.h>

@protocol ANNativeCustomAdapter;
@class NSString, ANNativeAdStarRating, UIImage, NSURL, NSDictionary;

@interface ANNativeMediatedAdResponse : ANNativeAdResponse <ANNativeCustomAdapterAdDelegate> {

	BOOL _expired;
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
	id<ANNativeCustomAdapter> _adapter;

}

@property (nonatomic,retain) NSString * title;                               //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSString * body;                                //@synthesize body=_body - In the implementation block
@property (nonatomic,retain) NSString * callToAction;                        //@synthesize callToAction=_callToAction - In the implementation block
@property (nonatomic,retain) ANNativeAdStarRating * rating;                  //@synthesize rating=_rating - In the implementation block
@property (nonatomic,retain) UIImage * mainImage;                            //@synthesize mainImage=_mainImage - In the implementation block
@property (nonatomic,retain) NSURL * mainImageURL;                           //@synthesize mainImageURL=_mainImageURL - In the implementation block
@property (nonatomic,retain) UIImage * iconImage;                            //@synthesize iconImage=_iconImage - In the implementation block
@property (nonatomic,retain) NSURL * iconImageURL;                           //@synthesize iconImageURL=_iconImageURL - In the implementation block
@property (nonatomic,retain) NSString * socialContext;                       //@synthesize socialContext=_socialContext - In the implementation block
@property (nonatomic,retain) NSDictionary * customElements;                  //@synthesize customElements=_customElements - In the implementation block
@property (nonatomic,retain) id<ANNativeCustomAdapter> adapter;              //@synthesize adapter=_adapter - In the implementation block
@property (assign,nonatomic) unsigned long long networkCode;                 //@synthesize networkCode=_networkCode - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)socialContext;
-(void)setSocialContext:(NSString *)arg1 ;
-(NSString *)callToAction;
-(void)setCallToAction:(NSString *)arg1 ;
-(void)setIconImageURL:(NSURL *)arg1 ;
-(NSURL *)iconImageURL;
-(void)handleClick;
-(void)setAdapter:(id<ANNativeCustomAdapter>)arg1 ;
-(void)unregisterViewFromTracking;
-(BOOL)registerResponseInstanceWithNativeView:(id)arg1 rootViewController:(id)arg2 clickableViews:(id)arg3 error:(id*)arg4 ;
-(UIImage *)mainImage;
-(void)setMainImage:(UIImage *)arg1 ;
-(NSURL *)mainImageURL;
-(void)setMainImageURL:(NSURL *)arg1 ;
-(NSDictionary *)customElements;
-(void)setCustomElements:(NSDictionary *)arg1 ;
-(unsigned long long)networkCode;
-(void)setNetworkCode:(unsigned long long)arg1 ;
-(BOOL)registerAdapterWithNativeView:(id)arg1 rootViewController:(id)arg2 clickableViews:(id)arg3 error:(id*)arg4 ;
-(id)initWithCustomAdapter:(id)arg1 networkCode:(unsigned long long)arg2 ;
-(id<ANNativeCustomAdapter>)adapter;
-(void)setIconImage:(UIImage *)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(NSString *)body;
-(UIImage *)iconImage;
-(void)setBody:(NSString *)arg1 ;
-(BOOL)hasExpired;
-(ANNativeAdStarRating *)rating;
-(void)setRating:(ANNativeAdStarRating *)arg1 ;
@end

