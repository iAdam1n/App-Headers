/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:27:58 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/21F2B006-1C28-48A8-85CE-538D78391B66/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
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
-(void)setHasLoaded:(BOOL)arg1 ;
-(void)webView:(id)arg1 didFailLoadWithError:(id)arg2 ;
-(BOOL)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3 ;
-(void)webViewDidStartLoad:(id)arg1 ;
-(void)webViewDidFinishLoad:(id)arg1 ;
-(BOOL)hasLoaded;
@end

