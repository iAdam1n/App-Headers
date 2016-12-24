/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:42:15 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/2E0DF6B4-8C57-4F66-9862-2B2C129D4027/SolitaireFree.app/SolitaireFree
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
-(void)didDismiss;
-(void)setClickHandler:(RhythmClickHandler *)arg1 ;
-(RhythmClickHandler *)clickHandler;
-(id)arrowImage:(int)arg1 left:(BOOL)arg2 ;
-(void)updateNavButtons:(id)arg1 ;
-(void)removeActivityIndicator;
-(void)moveCenterOffScreen:(id)arg1 ;
-(void)clickActionDone:(BOOL)arg1 ;
-(void)setContentViewBackgroundColor:(id)arg1 ;
-(void)showAsLandingPage:(id)arg1 ;
-(NSObject*<RhythmLandingPageWindowDelegate>)landingPageWindowDelegate;
-(void)setLandingPageWindowDelegate:(NSObject*<RhythmLandingPageWindowDelegate>)arg1 ;
-(id)init;
-(void)dealloc;
-(void)dismiss;
-(void)webView:(id)arg1 didFailLoadWithError:(id)arg2 ;
-(BOOL)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3 ;
-(void)webViewDidFinishLoad:(id)arg1 ;
-(void)goBack;
-(void)goForward;
-(void)dismiss:(BOOL)arg1 ;
-(void)showActivityIndicator;
@end
