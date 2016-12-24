/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:06 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@protocol FBWebView, FBInstantExperienceDeveloperChromeDelegateProtocol;
@class FBInstantExperienceDeveloperChrome, UIView;

@interface FBInstantExperienceDeveloperChromeController : UIViewController {

	FBInstantExperienceDeveloperChrome* _developerChrome;
	UIView*<FBWebView> _webview;
	id<FBInstantExperienceDeveloperChromeDelegateProtocol> _chromeDelegate;

}

@property (assign,nonatomic,__weak) id<FBInstantExperienceDeveloperChromeDelegateProtocol> chromeDelegate;              //@synthesize chromeDelegate=_chromeDelegate - In the implementation block
-(id)_base64EncodingFromString:(id)arg1 ;
-(id)initWithDeveloperChrome:(id)arg1 webview:(id)arg2 ;
-(void)basicActionPressed:(id)arg1 context:(id)arg2 ;
-(void)navigationActionPressed:(id)arg1 ;
-(id<FBInstantExperienceDeveloperChromeDelegateProtocol>)chromeDelegate;
-(void)setChromeDelegate:(id<FBInstantExperienceDeveloperChromeDelegateProtocol>)arg1 ;
-(void)loadView;
@end
