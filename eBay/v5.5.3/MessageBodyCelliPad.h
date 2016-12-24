/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 23, 2016 at 8:53:15 PM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/B79A6C91-6A31-4B98-98DF-DAB1E6185487/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <eBay/eBay-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UIWebViewDelegate.h>

@protocol MessageBodyCelliPadDelegate;
@class EBNMessage, NSString, UIWebView, UIView, UIImageView, ActivitySpinnerView;

@interface MessageBodyCelliPad : UIView <UIWebViewDelegate> {

	EBNMessage* message;
	NSString* messageHTML;
	UIWebView* webView;
	id<MessageBodyCelliPadDelegate> webDelegate;
	UIView* tearView;
	UIImageView* dividerView;
	ActivitySpinnerView* spinner;

}

@property (nonatomic,retain) EBNMessage * message; 
@property (nonatomic,retain) NSString * messageHTML; 
@property (assign,nonatomic,__weak) id<MessageBodyCelliPadDelegate> webDelegate; 
@property (nonatomic,retain) UIView * tearView; 
@property (nonatomic,retain) UIImageView * dividerView; 
@property (nonatomic,readonly) UIWebView * webView; 
@property (nonatomic,retain) ActivitySpinnerView * spinner; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setupForTheme;
-(id)modifyHTML:(id)arg1 ;
-(id<MessageBodyCelliPadDelegate>)webDelegate;
-(void)setWebDelegate:(id<MessageBodyCelliPadDelegate>)arg1 ;
-(void)setDividerView:(UIImageView *)arg1 ;
-(UIView *)tearView;
-(void)webScrollViewDidScroll:(id)arg1 ;
-(void)setTearView:(UIView *)arg1 ;
-(void)setMessageHTML:(NSString *)arg1 ;
-(NSString *)messageHTML;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)dealloc;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(UIWebView *)webView;
-(void)setMessage:(EBNMessage *)arg1 ;
-(EBNMessage *)message;
-(void)webView:(id)arg1 didFailLoadWithError:(id)arg2 ;
-(BOOL)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3 ;
-(void)webViewDidStartLoad:(id)arg1 ;
-(void)webViewDidFinishLoad:(id)arg1 ;
-(ActivitySpinnerView *)spinner;
-(void)setSpinner:(ActivitySpinnerView *)arg1 ;
-(UIImageView *)dividerView;
@end
