/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:15 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBClassProvidable.h>

@protocol FBIntentHandler;
@class FBUserSession, MNNavigationCoordinator, MNThreadParticipantNameFormatter, MNBlockUserFullScreenViewController, NSString;

@interface MNManagePageInThreadHandler : NSObject <FBClassProvidable> {

	FBUserSession* _session;
	MNNavigationCoordinator* _navigationCoordinator;
	MNThreadParticipantNameFormatter* _nameFormatter;
	MNBlockUserFullScreenViewController* _blockUserViewController;
	id<FBIntentHandler> _intentHandler;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(id)initWithSession:(id)arg1 navigationCoordinator:(id)arg2 nameFormatter:(id)arg3 blockUserViewController:(id)arg4 intentHandler:(id)arg5 ;
-(id)_adPreferencesActionWithAdPreferencesLink:(id)arg1 adProperties:(id)arg2 ;
-(id)_manageMessagesActionWithPage:(id)arg1 threadClientSummaryUpdateCreator:(id)arg2 ;
-(id)_sendFeedbackActionWithPage:(id)arg1 ;
-(id)_reportPageActionWithPage:(id)arg1 threadClientSummaryUpdateCreator:(id)arg2 ;
-(void)_handleAdPreferencesActionWithAdPreferencesLink:(id)arg1 ;
-(void)_handleManageMessagesActionWithPage:(id)arg1 threadClientSummaryUpdateCreator:(id)arg2 ;
-(void)_handleSendFeedbackActionWithPage:(id)arg1 ;
-(void)_handleDismissBotReviewController:(id)arg1 ;
-(void)_handleReportPageActionWithPage:(id)arg1 threadClientSummaryUpdateCreator:(id)arg2 ;
-(void)_handleDimissReportPageViewController:(id)arg1 ;
-(void)presentManagePageControllerForPage:(id)arg1 threadClientSummaryUpdateCreator:(id)arg2 adPreferencesLink:(id)arg3 adProperties:(id)arg4 ;
@end

