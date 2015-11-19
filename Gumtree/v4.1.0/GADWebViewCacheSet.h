/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 5:05:13 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/BE5DA1E5-E5C1-4952-A4BE-28BA22319130/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Gumtree/GADCacheSet.h>
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

