/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:54 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIWebViewDelegate.h>

@class NSString;

@interface BFWebViewAppLinkResolverWebViewDelegate : NSObject <UIWebViewDelegate> {

	BOOL _hasLoaded;
	/*^block*/id _didFinishLoad;
	/*^block*/id _didFailLoadWithError;

}

@property (nonatomic,copy) id didFinishLoad;                        //@synthesize didFinishLoad=_didFinishLoad - In the implementation block
@property (nonatomic,copy) id didFailLoadWithError;                 //@synthesize didFailLoadWithError=_didFailLoadWithError - In the implementation block
@property (assign,nonatomic) BOOL hasLoaded;                        //@synthesize hasLoaded=_hasLoaded - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)didFinishLoad;
-(id)didFailLoadWithError;
-(void)setDidFinishLoad:(id)arg1 ;
-(void)setDidFailLoadWithError:(id)arg1 ;
-(void)webView:(id)arg1 didFailLoadWithError:(id)arg2 ;
-(BOOL)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3 ;
-(void)webViewDidStartLoad:(id)arg1 ;
-(void)webViewDidFinishLoad:(id)arg1 ;
-(BOOL)hasLoaded;
-(void)setHasLoaded:(BOOL)arg1 ;
@end
