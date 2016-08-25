/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 12:03:43 AM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FE008365-307B-4CDF-8948-1B974F28A799/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SolitaireFree/GADCacheSet.h>
#import <UIKit/UIWebViewDelegate.h>

@class NSMutableSet, NSString;

@interface GADWebViewCacheSet : GADCacheSet <UIWebViewDelegate> {

	NSMutableSet* _clearingWebViews;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)adView:(id)arg1 didFailLoadWithError:(id)arg2 ;
-(void)clearWebView:(id)arg1 ;
-(void)dealloc;
-(void)addObject:(id)arg1 ;
-(id)anyObject;
-(BOOL)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3 ;
-(void)webViewDidFinishLoad:(id)arg1 ;
-(id)initWithMaxCapacity:(unsigned long long)arg1 ;
@end

