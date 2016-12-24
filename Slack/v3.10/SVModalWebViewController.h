/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:38:00 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/B4EAB98E-4B8F-47BB-A92B-B0524BEFEA49/Slack.app/Slack
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UINavigationController.h>

@class UIColor, SVWebViewController;

@interface SVModalWebViewController : UINavigationController {

	UIColor* _barsTintColor;
	SVWebViewController* _webViewController;

}

@property (nonatomic,retain) SVWebViewController * webViewController;              //@synthesize webViewController=_webViewController - In the implementation block
@property (nonatomic,retain) UIColor * barsTintColor;                              //@synthesize barsTintColor=_barsTintColor - In the implementation block
-(UIColor *)barsTintColor;
-(void)setBarsTintColor:(UIColor *)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)initWithURL:(id)arg1 ;
-(id)initWithAddress:(id)arg1 ;
-(SVWebViewController *)webViewController;
-(void)setWebViewController:(SVWebViewController *)arg1 ;
@end
