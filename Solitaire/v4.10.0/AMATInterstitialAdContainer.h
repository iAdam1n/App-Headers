/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:42:15 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/2E0DF6B4-8C57-4F66-9862-2B2C129D4027/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SolitaireFree/AMATBaseAdContainer.h>

@interface AMATInterstitialAdContainer : AMATBaseAdContainer

@property (assign,nonatomic,__weak) id<AMATInterstitialAdContainerDelegate><AMATAdContainerDelegate> delegate; 
-(void)prerenderHtml:(id)arg1 withBridges:(id)arg2 ;
-(void)webView:(id)arg1 didFailLoadWithError:(id)arg2 ;
-(void)webViewDidFinishLoad:(id)arg1 ;
-(void)render;
@end
