/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:05 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <Facebook/FBCreditCardViewControllerDelegate.h>

@protocol FBCreditCardViewController;
@class UIViewController, FBUserSession, NSString;

@interface FBSamplePresentationCreditCardViewController : UIViewController <FBCreditCardViewControllerDelegate> {

	UIViewController*<FBCreditCardViewController> _creditCardViewController;
	FBUserSession* _session;
	BOOL _showFullName;
	BOOL _showZipCode;
	BOOL _showBillingAddress;

}

@property (assign,nonatomic) BOOL showFullName;                     //@synthesize showFullName=_showFullName - In the implementation block
@property (assign,nonatomic) BOOL showZipCode;                      //@synthesize showZipCode=_showZipCode - In the implementation block
@property (assign,nonatomic) BOOL showBillingAddress;               //@synthesize showBillingAddress=_showBillingAddress - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setShowFullName:(BOOL)arg1 ;
-(void)setShowZipCode:(BOOL)arg1 ;
-(void)creditCardViewController:(id)arg1 didSaveCreditCard:(id)arg2 ;
-(void)creditCardViewController:(id)arg1 failedWithErrors:(id)arg2 isCanceled:(BOOL)arg3 ;
-(BOOL)showFullName;
-(BOOL)showZipCode;
-(void)pushCreditCard:(id)arg1 ;
-(void)popoverCreditCard:(id)arg1 ;
-(void)modalCreditCard:(id)arg1 ;
-(void)addViewController;
-(unsigned long long)supportedInterfaceOrientations;
-(BOOL)shouldAutorotate;
-(void)viewDidLoad;
-(id)initWithSession:(id)arg1 ;
-(BOOL)showBillingAddress;
-(void)setShowBillingAddress:(BOOL)arg1 ;
@end
