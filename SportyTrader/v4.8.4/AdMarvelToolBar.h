/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:45:10 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/5A964037-04EE-4DC1-9951-0A6265E75908/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIToolbar.h>

@protocol AdMarvelDelegate;
@class NSObject, UIActivityIndicatorView, UIBarButtonItem;

@interface AdMarvelToolBar : UIToolbar {

	NSObject*<AdMarvelDelegate> adMarvelDelegate;
	UIActivityIndicatorView* toolBarActivityIndicator;
	UIBarButtonItem* backButtonItem;
	UIBarButtonItem* forwardButtonItem;
	UIBarButtonItem* refreshButtonItem;

}
-(id)initWithDelegate:(id)arg1 webView:(id)arg2 ;
-(void)addToSuperView:(id)arg1 ;
-(void)setBackButtonEnabled:(BOOL)arg1 ;
-(void)setForwardButtonEnabled:(BOOL)arg1 ;
-(void)setRefreshButtonEnabled:(BOOL)arg1 ;
-(BOOL)refreshEnabled;
-(void)setupFrame;
-(void)setupFrame:(int)arg1 ;
-(void)dealloc;
-(void)removeFromSuperview;
-(void)stopActivity;
-(void)showActivity;
@end
