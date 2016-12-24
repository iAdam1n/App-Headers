/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:16 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBPlatformNewThreadViewController.h>
#import <Messenger/FBPlatformShareDataLoadListener.h>

@class FBMessageOutgoingAttachmentContent, MNImageUploadCandidateStore, FBUserSession, NSString;

@interface _FBPlatformLinkMessageShareViewController : FBPlatformNewThreadViewController <FBPlatformShareDataLoadListener> {

	FBMessageOutgoingAttachmentContent* _loadedAttachment;
	MNImageUploadCandidateStore* _imageUploadCandidateStore;
	FBUserSession* _session;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)platformLoadedPayload:(id)arg1 ;
-(id)linkShareControllerMethodContext;
-(void)platformActionProcessor:(id)arg1 didCompleteOperation:(id)arg2 ;
-(void)platformActionProcessorDidComplete:(id)arg1 ;
-(void)linkShareControllerDidFetchLinkInformation:(id)arg1 ;
-(id)validateAction;
-(id)initWithAction:(id)arg1 navigationCoordinator:(id)arg2 composeViewControllerProvider:(id)arg3 peoplePickerViewControllerProvider:(id)arg4 keyboardResettingTracker:(id)arg5 session:(id)arg6 topContactsRetriever:(id)arg7 attachmentPreparer:(id)arg8 userStore:(id)arg9 imageUploadCandidateStore:(id)arg10 addressBookContactSyncPolicy:(id)arg11 secureMessagingCapabilityQuerier:(id)arg12 ;
-(void)_updateSharedObject;
-(void)dealloc;
-(void)viewDidLoad;
@end
