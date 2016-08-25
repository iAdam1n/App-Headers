/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:54:34 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/EDDCC4DC-B551-47FD-8F2D-ADD28D2EEB77/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableSet, GADAdView, NSURL, NSSet;

@interface GADAdViewURLCollection : NSObject {

	NSMutableSet* _URLRequests;
	GADAdView* _adView;
	NSURL* _mainDocumentURL;

}

@property (nonatomic,__weak,readonly) GADAdView * adView;              //@synthesize adView=_adView - In the implementation block
@property (nonatomic,copy) NSURL * mainDocumentURL;                    //@synthesize mainDocumentURL=_mainDocumentURL - In the implementation block
@property (nonatomic,copy,readonly) NSSet * URLRequests; 
+(void)setGreedyCollectionEnabled:(BOOL)arg1 ;
-(void)addURLRequest:(id)arg1 ;
-(NSSet *)URLRequests;
-(NSURL *)mainDocumentURL;
-(void)setMainDocumentURL:(NSURL *)arg1 ;
-(id)init;
-(id)initWithAdView:(id)arg1 ;
-(GADAdView *)adView;
@end

