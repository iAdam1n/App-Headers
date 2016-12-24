/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:46:35 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/D20B482D-7A4B-420E-BEFA-D4B2B5C94752/Telegram.app/Telegram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Telegram/Telegram-Structs.h>
#import <UIKit/UITableViewCell.h>
#import <UIKit/UIWebViewDelegate.h>

@class UIWebView, NSString, UIColor;

@interface BITWebTableViewCell : UITableViewCell <UIWebViewDelegate> {

	UIWebView* _webView;
	NSString* _webViewContent;
	UIColor* _cellBackgroundColor;
	CGSize _webViewSize;

}

@property (nonatomic,retain) UIWebView * webView;                        //@synthesize webView=_webView - In the implementation block
@property (nonatomic,copy) NSString * webViewContent;                    //@synthesize webViewContent=_webViewContent - In the implementation block
@property (assign,nonatomic) CGSize webViewSize;                         //@synthesize webViewSize=_webViewSize - In the implementation block
@property (nonatomic,retain) UIColor * cellBackgroundColor;              //@synthesize cellBackgroundColor=_cellBackgroundColor - In the implementation block
-(void)setWebViewContent:(NSString *)arg1 ;
-(void)addWebView;
-(NSString *)webViewContent;
-(void)removeWebView;
-(void)showWebView;
-(void)setWebViewSize:(CGSize)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)dealloc;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)prepareForReuse;
-(UIWebView *)webView;
-(void)setWebView:(UIWebView *)arg1 ;
-(BOOL)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3 ;
-(void)webViewDidFinishLoad:(id)arg1 ;
-(void)setCellBackgroundColor:(UIColor *)arg1 ;
-(CGSize)webViewSize;
-(UIColor *)cellBackgroundColor;
@end
