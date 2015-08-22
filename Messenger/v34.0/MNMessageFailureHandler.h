/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:55 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <UIKit/UIActionSheetDelegate.h>
#import <Messenger/FBSessionClassProvidable.h>
#import <Messenger/MNMessageFailureHandling.h>

@class FBMSendEventLogger, FBUserSession, UIActionSheet, FBMMessageAppModel, NSString;

@interface MNMessageFailureHandler : NSObject <UIActionSheetDelegate, FBSessionClassProvidable, MNMessageFailureHandling> {

	/*^block*/id _completion;
	FBMSendEventLogger* _sendEventLogger;
	FBUserSession* _session;
	UIActionSheet* _retryActionSheet;
	FBMMessageAppModel* _selectedRetryMessage;

}

@property (nonatomic,retain) UIActionSheet * retryActionSheet;                     //@synthesize retryActionSheet=_retryActionSheet - In the implementation block
@property (nonatomic,copy) FBMMessageAppModel * selectedRetryMessage;              //@synthesize selectedRetryMessage=_selectedRetryMessage - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(BOOL)shouldHandleFailedMessage:(id)arg1 ;
-(BOOL)shouldShowNonRetriableErrorAlertWhenFailedToSendMessage:(id)arg1 ;
-(void)handleFailedMessage:(id)arg1 fromView:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)initWithSendLogger:(id)arg1 session:(id)arg2 ;
-(void)_showNonRetriableErrorAlertForForFailedMessage:(id)arg1 ;
-(void)setSelectedRetryMessage:(FBMMessageAppModel *)arg1 ;
-(void)_showRetryActionsInView:(id)arg1 withContentType:(unsigned long long)arg2 ;
-(void)_dispatchCompletionWithResult:(long long)arg1 ;
-(FBMMessageAppModel *)selectedRetryMessage;
-(BOOL)_showCustomActionSheet;
-(void)setRetryActionSheet:(UIActionSheet *)arg1 ;
-(UIActionSheet *)retryActionSheet;
-(void)dealloc;
-(id)init;
-(void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2 ;
-(void)actionSheet:(id)arg1 didDismissWithButtonIndex:(long long)arg2 ;
@end
