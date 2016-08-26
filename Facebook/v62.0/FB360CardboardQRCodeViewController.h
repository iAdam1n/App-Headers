/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:42 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <Facebook/FBQRCodeReaderDelegate.h>

@class FBUserSession, FBDismissalDoneButton, FBQRCodeReaderView, FBNetworkerRequest, NSString;

@interface FB360CardboardQRCodeViewController : UIViewController <FBQRCodeReaderDelegate> {

	FBUserSession* _session;
	FBDismissalDoneButton* _doneButton;
	FBQRCodeReaderView* _readerView;
	FBNetworkerRequest* _networkerRequest;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)handleDecodedString:(id)arg1 ;
-(void)_showAlertWithTitle:(id)arg1 message:(id)arg2 ;
-(void)_dismissFromButton:(id)arg1 ;
-(void)_decodeParameter:(id)arg1 ;
-(void)_requestParseURL:(id)arg1 ;
-(void)_showNetworkErrorAlert;
-(void)_parseJSON:(id)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(id)initWithSession:(id)arg1 ;
@end
