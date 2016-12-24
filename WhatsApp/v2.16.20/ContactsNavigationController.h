/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:50:45 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/F01A5503-B253-4A30-B0BC-B7B5406FD725/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WhatsApp/WANavigationController.h>
#import <WhatsApp/GroupViewControllerDelegate.h>

@class NSMutableDictionary;

@interface ContactsNavigationController : WANavigationController <GroupViewControllerDelegate> {

	NSMutableDictionary* _contactViewControllers;

}
-(void)popToMainViewControllerAnimated:(BOOL)arg1 ;
-(void)groupViewController:(id)arg1 didSelectGroupWithIdentifier:(id)arg2 ;
-(id)contactsViewControllerForGroupIdentifier:(id)arg1 ;
-(void)reloadViewControllers;
-(id)init;
@end
