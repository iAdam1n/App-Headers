/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:07 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@class FBUserSession, NSString, UIActivityIndicatorView;

@interface FBQRCodeDeepLinkingViewController : UIViewController {

	FBUserSession* _session;
	NSString* _qrcodeID;
	UIActivityIndicatorView* _spinner;

}

@property (nonatomic,retain) UIActivityIndicatorView * spinner;              //@synthesize spinner=_spinner - In the implementation block
-(id)initWithSession:(id)arg1 andQRCodeID:(id)arg2 ;
-(void)initSpinner;
-(void)sendGraphAPICallToRecordScanHistory;
-(void)qrcodeDownloadResponseBlockHelper:(id)arg1 error:(id)arg2 ;
-(void)finishWithViewDismissal;
-(unsigned long long)supportedInterfaceOrientations;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillLayoutSubviews;
-(long long)preferredInterfaceOrientationForPresentation;
-(void)viewDidLoad;
-(UIActivityIndicatorView *)spinner;
-(void)setSpinner:(UIActivityIndicatorView *)arg1 ;
-(void)handleError:(id)arg1 ;
-(void)decode;
-(void)handleDownloadError:(id)arg1 ;
@end
