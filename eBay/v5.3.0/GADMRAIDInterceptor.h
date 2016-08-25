/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:54:34 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/EDDCC4DC-B551-47FD-8F2D-ADD28D2EEB77/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSString, NSSet;

@interface GADMRAIDInterceptor : NSObject {

	NSObject*<OS_dispatch_queue> _lockQueue;
	NSString* _bannerImplementationURLString;
	NSString* _expandedBannerImplementationURLString;
	NSString* _interstitialImplementationURLString;
	NSSet* _implementationURLStrings;
	BOOL _enabled;

}

@property (copy) NSString * bannerImplementationURLString; 
@property (copy) NSString * expandedBannerImplementationURLString; 
@property (copy) NSString * interstitialImplementationURLString; 
+(id)sharedInstance;
-(void)setBannerImplementationURLString:(NSString *)arg1 ;
-(void)setInterstitialImplementationURLString:(NSString *)arg1 ;
-(void)setExpandedBannerImplementationURLString:(NSString *)arg1 ;
-(BOOL)canRedirect;
-(BOOL)shouldRedirectRequest:(id)arg1 ;
-(NSString *)interstitialImplementationURLString;
-(NSString *)bannerImplementationURLString;
-(NSString *)expandedBannerImplementationURLString;
-(void)updateImplementationURLStrings;
-(BOOL)URLisImplementationURL:(id)arg1 ;
-(id)init;
-(void)setEnabled:(BOOL)arg1 ;
@end

