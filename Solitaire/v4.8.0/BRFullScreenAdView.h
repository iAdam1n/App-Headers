/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 12:03:44 AM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FE008365-307B-4CDF-8948-1B974F28A799/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@class UIActivityIndicatorView, UIWebView;

@interface BRFullScreenAdView : UIView {

	UIActivityIndicatorView* activityView;
	UIWebView* webView;

}

@property (nonatomic,retain) UIActivityIndicatorView * activityView; 
@property (nonatomic,retain) UIWebView * webView; 
-(void)dealloc;
-(void)layoutSubviews;
-(UIWebView *)webView;
-(void)setWebView:(UIWebView *)arg1 ;
-(UIActivityIndicatorView *)activityView;
-(void)setActivityView:(UIActivityIndicatorView *)arg1 ;
@end
