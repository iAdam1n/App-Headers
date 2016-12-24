/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:46:32 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/D20B482D-7A4B-420E-BEFA-D4B2B5C94752/Telegram.app/Telegram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Telegram/TGMenuSheetItemView.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <UIKit/UIWebViewDelegate.h>

@class NSURL, WKWebView, UIWebView, TGScrollIndicatorView, UIActivityIndicatorView, NSString;

@interface TGPreviewWebPageItemView : TGMenuSheetItemView <UIScrollViewDelegate, UIWebViewDelegate> {

	NSURL* _url;
	WKWebView* _wkWebView;
	UIWebView* _uiWebView;
	TGScrollIndicatorView* _scrollIndicator;
	UIActivityIndicatorView* _activityIndicatorView;
	BOOL _passPanGesture;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(double)preferredHeightForWidth:(double)arg1 screenHeight:(double)arg2 ;
-(BOOL)passPanOffset:(double)arg1 ;
-(void)menuView:(id)arg1 willAppearAnimated:(BOOL)arg2 ;
-(BOOL)handlesPan;
-(void)setupWKWebView;
-(void)setupUIWebView;
-(void)commonSetupWithWebView:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithWebPage:(id)arg1 ;
-(void)layoutSubviews;
-(void)dealloc;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(id)viewForZoomingInScrollView:(id)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)webViewDidFinishLoad:(id)arg1 ;
@end
