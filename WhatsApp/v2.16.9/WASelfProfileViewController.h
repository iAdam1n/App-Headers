/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:47:03 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/342EE397-EC3B-4D13-968C-80EF1D13592D/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WhatsApp/WAViewController.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <WhatsApp/WAQRCodeScannerViewControllerDelegate.h>
#import <libobjc.A.dylib/ABNewPersonViewControllerDelegate.h>

@class WAScannableProfileView, UITableView, NSArray, WAContactInfo, NSString;

@interface WASelfProfileViewController : WAViewController <UITableViewDelegate, UITableViewDataSource, WAQRCodeScannerViewControllerDelegate, ABNewPersonViewControllerDelegate> {

	WAScannableProfileView* _profileView;
	UITableView* _tableView;
	NSArray* _sections;
	WAContactInfo* _contactInfoToSendAfterAddingContact;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)wa_fontSizeDidChange;
-(BOOL)qrCodeScannerViewController:(id)arg1 shouldAcceptCode:(id)arg2 ;
-(void)qrCodeScannerViewControllerDidCancel:(id)arg1 ;
-(void)qrCodeScannerViewController:(id)arg1 didFinishWithCode:(id)arg2 ;
-(void)setUpTableView;
-(void)scanCode;
-(id)decodeQRCode:(id)arg1 ;
-(void)receiveContactInfoFromUserWithName:(id)arg1 jid:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidLayoutSubviews;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)newPersonViewController:(id)arg1 didCompleteWithNewPerson:(const void*)arg2 ;
@end

