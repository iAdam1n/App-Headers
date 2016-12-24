/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:15 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNThreadViewModelConfigurable.h>

@protocol MNThreadMembersUpdaterDelegate;
@class NSMutableSet, MNThreadUpdateRunningService, MNThreadViewModel, NSString;

@interface MNThreadMembersUpdater : NSObject <MNThreadViewModelConfigurable> {

	NSMutableSet* _participantsWithOutstandingRequests;
	MNThreadUpdateRunningService* _summaryUpdateRunningService;
	id<MNThreadMembersUpdaterDelegate> _delegate;
	MNThreadViewModel* _threadViewModel;

}

@property (nonatomic,retain) MNThreadViewModel * threadViewModel;                             //@synthesize threadViewModel=_threadViewModel - In the implementation block
@property (assign,nonatomic,__weak) id<MNThreadMembersUpdaterDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)tearDownThreadViewModelDependencies;
-(void)configureThreadViewModelDependenciesWith:(id)arg1 ;
-(MNThreadViewModel *)threadViewModel;
-(void)setThreadViewModel:(MNThreadViewModel *)arg1 ;
-(void)_didRemoveParticipant:(id)arg1 ;
-(void)_couldNotRemoveParticipant:(id)arg1 error:(id)arg2 ;
-(void)_notfifyDelegateIfAllRequestsFinished;
-(id)initWithSummaryUpdateRunningService:(id)arg1 ;
-(void)sendRemoveRequestForParticipantWithUserId:(id)arg1 ;
-(void)setDelegate:(id<MNThreadMembersUpdaterDelegate>)arg1 ;
-(id<MNThreadMembersUpdaterDelegate>)delegate;
@end
