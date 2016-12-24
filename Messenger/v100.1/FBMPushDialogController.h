/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:19 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBClassProvidable.h>
#import <UIKit/UIAlertViewDelegate.h>

@protocol FBMPushDialogControllerDelegate;
@class UIAlertView, FBMPushNotificationRequestContentConfiguration, NSString;

@interface FBMPushDialogController : NSObject <FBClassProvidable, UIAlertViewDelegate> {

	UIAlertView* _pushDialogView;
	FBMPushNotificationRequestContentConfiguration* _notificationRequestContentConfiguration;
	id<FBMPushDialogControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBMPushDialogControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(void)showPushDialog;
-(void)dismissPushDialog;
-(id)initWithNotificationRequestContentConfiguration:(id)arg1 ;
-(void)setDelegate:(id<FBMPushDialogControllerDelegate>)arg1 ;
-(id<FBMPushDialogControllerDelegate>)delegate;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2 ;
@end
