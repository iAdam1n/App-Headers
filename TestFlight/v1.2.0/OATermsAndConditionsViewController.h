/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:46:45 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/F33794C7-8EE9-404B-9696-A101FD0B9D87/TestFlight.app/TestFlight
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <TestFlight/MFMailComposeViewControllerDelegate.h>
#import <UIKit/UIWebViewDelegate.h>

@class OASAuthenticationManager, OASMetrics, UIActivityIndicatorView, UIWebView, NSString;

@interface OATermsAndConditionsViewController : UIViewController <MFMailComposeViewControllerDelegate, UIWebViewDelegate> {

	BOOL _downloading;
	BOOL _agreementRequired;
	/*^block*/id _doneBlock;
	OASAuthenticationManager* _authManager;
	OASMetrics* _metrics;
	UIActivityIndicatorView* _activityIndicator;
	UIWebView* _webView;
	NSString* _termsAndConditions;

}

@property (nonatomic,copy) id doneBlock;                                               //@synthesize doneBlock=_doneBlock - In the implementation block
@property (nonatomic,readonly) OASAuthenticationManager * authManager;                 //@synthesize authManager=_authManager - In the implementation block
@property (nonatomic,readonly) OASMetrics * metrics;                                   //@synthesize metrics=_metrics - In the implementation block
@property (nonatomic,retain) UIActivityIndicatorView * activityIndicator;              //@synthesize activityIndicator=_activityIndicator - In the implementation block
@property (nonatomic,retain) UIWebView * webView;                                      //@synthesize webView=_webView - In the implementation block
@property (assign,nonatomic) BOOL downloading;                                         //@synthesize downloading=_downloading - In the implementation block
@property (assign,nonatomic) BOOL agreementRequired;                                   //@synthesize agreementRequired=_agreementRequired - In the implementation block
@property (nonatomic,copy) NSString * termsAndConditions;                              //@synthesize termsAndConditions=_termsAndConditions - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(OASAuthenticationManager *)authManager;
-(BOOL)agreementRequired;
-(NSString *)termsAndConditions;
-(void)downloadLatestTermsAndConditions;
-(void)showTermsAndConditions;
-(id)doneBlock;
-(void)setDoneBlock:(id)arg1 ;
-(void)fireDoneWithAcceptance:(BOOL)arg1 ;
-(BOOL)downloading;
-(void)setDownloading:(BOOL)arg1 ;
-(void)downloadLatestTermsAndConditionsCallbackWithTermsAndConditions:(id)arg1 error:(id)arg2 ;
-(void)setTermsAndConditions:(NSString *)arg1 ;
-(id)htmlFromTermsAndConditions:(id)arg1 ;
-(id)initWithAuthenticationManager:(id)arg1 metrics:(id)arg2 ;
-(void)setAgreementRequired:(BOOL)arg1 ;
-(void)cancel;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(UIWebView *)webView;
-(void)setWebView:(UIWebView *)arg1 ;
-(OASMetrics *)metrics;
-(BOOL)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3 ;
-(void)mailComposeController:(id)arg1 didFinishWithResult:(int)arg2 error:(id)arg3 ;
-(void)setActivityIndicator:(UIActivityIndicatorView *)arg1 ;
-(UIActivityIndicatorView *)activityIndicator;
-(void)accept;
@end

