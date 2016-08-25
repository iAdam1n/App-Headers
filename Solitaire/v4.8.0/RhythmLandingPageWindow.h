/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 12:03:43 AM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FE008365-307B-4CDF-8948-1B974F28A799/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIWindow.h>
#import <UIKit/UIWebViewDelegate.h>
#import <SolitaireFree/RhythmClickHandlerDelegate.h>

@protocol RhythmLandingPageWindowDelegate;
@class NSObject, UIWebView, RhythmClickHandler, NSString;

@interface RhythmLandingPageWindow : UIWindow <UIWebViewDelegate, RhythmClickHandlerDelegate> {

	NSObject*<RhythmLandingPageWindowDelegate> landingPageWindowDelegate;
	UIWebView* webView;
	RhythmClickHandler* clickHandler;

}

@property (nonatomic,retain) NSObject*<RhythmLandingPageWindowDelegate> landingPageWindowDelegate; 
@property (nonatomic,retain) RhythmClickHandler * clickHandler; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)arrowImage:(int)arg1 left:(BOOL)arg2 ;
-(void)updateNavButtons:(id)arg1 ;
-(void)removeActivityIndicator;
-(void)didDismiss;
-(void)moveCenterOffScreen:(id)arg1 ;
-(void)clickActionDone:(BOOL)arg1 ;
-(void)setContentViewBackgroundColor:(id)arg1 ;
-(void)showAsLandingPage:(id)arg1 ;
-(NSObject*<RhythmLandingPageWindowDelegate>)landingPageWindowDelegate;
-(void)setLandingPageWindowDelegate:(NSObject*<RhythmLandingPageWindowDelegate>)arg1 ;
-(RhythmClickHandler *)clickHandler;
-(void)setClickHandler:(RhythmClickHandler *)arg1 ;
-(void)dealloc;
-(id)init;
-(void)dismiss;
-(void)webView:(id)arg1 didFailLoadWithError:(id)arg2 ;
-(BOOL)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3 ;
-(void)webViewDidFinishLoad:(id)arg1 ;
-(void)goBack;
-(void)goForward;
-(void)dismiss:(BOOL)arg1 ;
-(void)showActivityIndicator;
@end

