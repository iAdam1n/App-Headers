/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 12:03:42 AM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FE008365-307B-4CDF-8948-1B974F28A799/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>
#import <UIKit/UIWebViewDelegate.h>

@class UIWebView, MyViewController, UIImageView, UILabel, MWFlatButton, NSString;

@interface WhatsNew : UIView <UIWebViewDelegate> {

	UIWebView* webView;
	MyViewController* controller;
	BOOL loaded;
	UIImageView* _backgroundImageView;
	UILabel* _scrollLabel;
	MWFlatButton* _doneButton;
	UIImageView* _bottomLine;

}

@property (nonatomic,retain) UIImageView * backgroundImageView;              //@synthesize backgroundImageView=_backgroundImageView - In the implementation block
@property (nonatomic,retain) UILabel * scrollLabel;                          //@synthesize scrollLabel=_scrollLabel - In the implementation block
@property (nonatomic,retain) MWFlatButton * doneButton;                      //@synthesize doneButton=_doneButton - In the implementation block
@property (nonatomic,retain) UIImageView * bottomLine;                       //@synthesize bottomLine=_bottomLine - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)isAtleastOS7;
+(BOOL)isPad;
-(void)moveControls:(long long)arg1 ;
-(UIImageView *)bottomLine;
-(void)loadWebView;
-(void)doneActionNormal:(id)arg1 ;
-(UILabel *)scrollLabel;
-(void)flashScrollIndicator;
-(void)doneActionNewOption:(id)arg1 ;
-(void)setScrollLabel:(UILabel *)arg1 ;
-(void)setBottomLine:(UIImageView *)arg1 ;
-(UIImageView *)backgroundImageView;
-(void)webView:(id)arg1 didFailLoadWithError:(id)arg2 ;
-(BOOL)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3 ;
-(void)webViewDidFinishLoad:(id)arg1 ;
-(void)setDoneButton:(MWFlatButton *)arg1 ;
-(MWFlatButton *)doneButton;
-(id)initWithController:(id)arg1 ;
-(void)setBackgroundImageView:(UIImageView *)arg1 ;
@end

