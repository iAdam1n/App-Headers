/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 23, 2016 at 8:53:13 PM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/B79A6C91-6A31-4B98-98DF-DAB1E6185487/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <eBay/eBay-Structs.h>
#import <ComponentUI/EUIViewController.h>
#import <UIKit/UIWebViewDelegate.h>

@class NSString, UIViewController, UINavigationController;

@interface HTMLAlert : EUIViewController <UIWebViewDelegate> {

	BOOL _openURLInApp;
	NSString* _htmlContent;
	NSString* _alertTitle;
	UIViewController* _contentController;
	UINavigationController* _navController;
	/*^block*/id _completionHandler;

}

@property (nonatomic,copy) NSString * htmlContent;                                //@synthesize htmlContent=_htmlContent - In the implementation block
@property (nonatomic,copy) NSString * alertTitle;                                 //@synthesize alertTitle=_alertTitle - In the implementation block
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,retain) UIViewController * contentController;                //@synthesize contentController=_contentController - In the implementation block
@property (nonatomic,retain) UINavigationController * navController;              //@synthesize navController=_navController - In the implementation block
@property (nonatomic,copy) id completionHandler;                                  //@synthesize completionHandler=_completionHandler - In the implementation block
@property (assign,nonatomic) BOOL openURLInApp;                                   //@synthesize openURLInApp=_openURLInApp - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)alert;
-(id)htmlContentWrapper;
-(void)showWithCompletion:(/*^block*/id)arg1 ;
-(CGRect)adjustWindowFrameForSlideIn:(CGRect)arg1 ;
-(BOOL)openURLInApp;
-(void)setOpenURLInApp:(BOOL)arg1 ;
-(id)init;
-(void)show;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
-(void)dismiss;
-(UINavigationController *)navController;
-(BOOL)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3 ;
-(NSString *)alertTitle;
-(void)setAlertTitle:(NSString *)arg1 ;
-(UIViewController *)contentController;
-(void)setContentController:(UIViewController *)arg1 ;
-(void)alertDidDismiss;
-(NSString *)htmlContent;
-(void)setHtmlContent:(NSString *)arg1 ;
-(void)setNavController:(UINavigationController *)arg1 ;
-(void)doneAction:(id)arg1 ;
@end
