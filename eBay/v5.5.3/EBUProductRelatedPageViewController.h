/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 23, 2016 at 8:53:13 PM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/B79A6C91-6A31-4B98-98DF-DAB1E6185487/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <eBay/EbayWeb.h>

@class NSString;

@interface EBUProductRelatedPageViewController : EbayWeb {

	NSString* _epid;

}

@property (nonatomic,copy) NSString * epid;              //@synthesize epid=_epid - In the implementation block
-(void)trackViewDidBecomeActive;
-(void)loadWithSSO;
-(id)initWithEPID:(id)arg1 ;
-(void)reloadPageWithSSO;
-(void)registerTracking;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)initWithURL:(id)arg1 ;
-(BOOL)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3 ;
-(void)webViewDidFinishLoad:(id)arg1 ;
-(NSString *)epid;
-(void)setEpid:(NSString *)arg1 ;
@end

