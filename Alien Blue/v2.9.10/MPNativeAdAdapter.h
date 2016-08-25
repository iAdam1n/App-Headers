/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:41:47 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/91D74E3C-0E85-4CEF-8E44-3072C9AFF7E4/AlienBlue.app/AlienBlue
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSDictionary, NSURL;


@protocol MPNativeAdAdapter <NSObject>
@property (nonatomic,readonly) NSDictionary * properties; 
@property (nonatomic,readonly) NSURL * defaultActionURL; 
@property (assign,nonatomic,__weak) id<MPNativeAdAdapterDelegate> delegate; 
@property (nonatomic,readonly) double requiredSecondsForImpression; 
@optional
-(void)trackImpression;
-(void)trackClick;
-(void)displayContentForURL:(id)arg1 rootViewController:(id)arg2 completion:(/*^block*/id)arg3;
-(BOOL)enableThirdPartyImpressionTracking;
-(BOOL)enableThirdPartyClickTracking;
-(void)willAttachToView:(id)arg1;
-(void)didDetachFromView:(id)arg1;
-(double)requiredSecondsForImpression;
-(void)setDelegate:(id)arg1;
-(id<MPNativeAdAdapterDelegate>)delegate;

@required
-(NSDictionary *)properties;
-(NSURL *)defaultActionURL;

@end

