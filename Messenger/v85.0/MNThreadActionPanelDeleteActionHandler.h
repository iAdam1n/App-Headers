/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:18 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIAlertViewDelegate.h>
#import <Messenger/MNThreadActionPanelActionHandling.h>

@protocol MNThreadActionPerformer, MNThreadActionPanelActionHandlingDelegate;
@class FBAnalytics, FBAlertViewCoordinator, MNThreadActionPanelActionConfiguration, NSString;

@interface MNThreadActionPanelDeleteActionHandler : NSObject <UIAlertViewDelegate, MNThreadActionPanelActionHandling> {

	FBAnalytics* _analytics;
	FBAlertViewCoordinator* _alertViewCoordinator;
	id<MNThreadActionPerformer> _threadActionPerformer;
	MNThreadActionPanelActionConfiguration* _config;
	id<MNThreadActionPanelActionHandlingDelegate> _delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)handleActionWithDelegate:(id)arg1 ;
-(void)dismissActionSheets;
-(id)initWithThreadActionPerformer:(id)arg1 analytics:(id)arg2 alertViewCoordinator:(id)arg3 actionConfig:(id)arg4 ;
-(BOOL)isDeletingChatRequest;
-(void)_deleteThread;
-(void)_archiveThread;
-(void)_abortDeleteAction;
-(void)_finishAction;
-(void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2 ;
@end
