/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 23, 2016 at 8:53:13 PM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/B79A6C91-6A31-4B98-98DF-DAB1E6185487/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <eBay/eBayTableViewCell.h>
#import <UIKit/UIWebViewDelegate.h>

@protocol UIWebViewDelegate;
@class EBNMessage, UIActivityIndicatorView, EUIWebView, NSString;

@interface MessageBodyCell : eBayTableViewCell <UIWebViewDelegate> {

	double _height;
	EBNMessage* _message;
	UIActivityIndicatorView* _throbber;
	id<UIWebViewDelegate> _webDelegate;
	EUIWebView* _webView;

}

@property (nonatomic,retain) UIActivityIndicatorView * throbber;                    //@synthesize throbber=_throbber - In the implementation block
@property (nonatomic,retain) EUIWebView * webView;                                  //@synthesize webView=_webView - In the implementation block
@property (assign,nonatomic) double height;                                         //@synthesize height=_height - In the implementation block
@property (nonatomic,retain) EBNMessage * message;                                  //@synthesize message=_message - In the implementation block
@property (assign,nonatomic,__weak) id<UIWebViewDelegate> webDelegate;              //@synthesize webDelegate=_webDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(double)optimalHeight;
-(UIActivityIndicatorView *)throbber;
-(id)modifyHTML:(id)arg1 ;
-(void)setThrobber:(UIActivityIndicatorView *)arg1 ;
-(id<UIWebViewDelegate>)webDelegate;
-(void)setWebDelegate:(id<UIWebViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(void)dealloc;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)prepareForReuse;
-(double)height;
-(EUIWebView *)webView;
-(void)setWebView:(EUIWebView *)arg1 ;
-(void)setMessage:(EBNMessage *)arg1 ;
-(EBNMessage *)message;
-(void)webViewDidFinishLoad:(id)arg1 ;
-(void)setHeight:(double)arg1 ;
@end
