/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:50:47 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/F01A5503-B253-4A30-B0BC-B7B5406FD725/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WhatsApp/WAStaticTableViewController.h>
#import <WhatsApp/WAQRCodeScannerViewControllerDelegate.h>

@class NSString;

@interface WAWebClientSettingsViewController : WAStaticTableViewController <WAQRCodeScannerViewControllerDelegate> {

	BOOL _ignoreWebClientSessionDataUpdates;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)scanQRCode;
-(BOOL)qrCodeScannerViewController:(id)arg1 shouldAcceptCode:(id)arg2 ;
-(void)qrCodeScannerViewControllerDidCancel:(id)arg1 ;
-(void)qrCodeScannerViewController:(id)arg1 didFinishWithCode:(id)arg2 ;
-(void)webClientDidUpdateSessionData:(id)arg1 ;
-(void)promptUserToSignOut;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(id)initWithStyle:(long long)arg1 ;
-(void)signOut;
-(void)setupTableView;
@end
