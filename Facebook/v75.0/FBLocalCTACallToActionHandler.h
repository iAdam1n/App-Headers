/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:11 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/MFMailComposeViewControllerDelegate.h>

@class NSString;

@interface FBLocalCTACallToActionHandler : NSObject <MFMailComposeViewControllerDelegate>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithUserSession:(id)arg1 intentHandler:(id)arg2 navigationCoordinator:(id)arg3 ;
-(void)handlePrimaryCTATapActionForPage:(id)arg1 ;
-(void)_tryCallingPhoneNumber:(id)arg1 ;
-(void)_tryMessagingPageWithId:(id)arg1 pageName:(id)arg2 ;
-(void)_tryEmailingPageWithEmailAddress:(id)arg1 emailSenderName:(id)arg2 pageName:(id)arg3 ;
-(BOOL)_tryOpeningDeeplink:(id)arg1 ;
-(void)_tryOpeningFallbackURI:(id)arg1 pageCallToAction:(id)arg2 ;
-(void)mailComposeController:(id)arg1 didFinishWithResult:(long long)arg2 error:(id)arg3 ;
@end
