/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 10:10:02 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/4C83B32D-E9D7-434B-B0B8-8A6C2C13527D/SportyTrader.app/SportyTrader
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
-(void)showActivity;
-(void)stopActivity;
@end

