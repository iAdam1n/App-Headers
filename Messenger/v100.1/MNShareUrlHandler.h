/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:15 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNForwardFlowControllerDelegate.h>
#import <Messenger/MNForwardFlowPresenter.h>
#import <Messenger/MNUrlHandlerExtending.h>

@protocol FBProvider;
@class MNForwardFlowControllerFactory, FBLazyCreator, MNForwardFlowController, NSString;

@interface MNShareUrlHandler : NSObject <MNForwardFlowControllerDelegate, MNForwardFlowPresenter, MNUrlHandlerExtending> {

	MNForwardFlowControllerFactory* _forwardFlowControllerFactory;
	FBLazyCreator* _suggestedContactsRetrieverCreator;
	id<FBProvider> _messageSenderProvider;
	id<FBProvider> _navigationCoordinatorProvider;
	MNForwardFlowController* _forwardFlowController;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)canOpenURL:(id)arg1 sourceApplication:(id)arg2 ;
-(BOOL)openURL:(id)arg1 sourceApplication:(id)arg2 ;
-(void)dismissForwardFlowViewController;
-(void)forwardFlowControllerDidCancel:(id)arg1 ;
-(BOOL)forwardFlowController:(id)arg1 shouldHandleForwardWithRecipientInfos:(id)arg2 ;
-(void)forwardFlowController:(id)arg1 willForwardWithRecipientInfos:(id)arg2 forwardContent:(id)arg3 ;
-(void)forwardFlowController:(id)arg1 didForwardMessageWithRecipientInfos:(id)arg2 didCompleteFlow:(BOOL)arg3 ;
-(void)forwardFlowController:(id)arg1 didForwardMessage:(id)arg2 ;
-(void)presentForwardFlowViewController:(id)arg1 ;
-(void)_presentForwardFlowViewControllerWithSendConversionContext:(id)arg1 externalForwardDataFetcher:(id)arg2 ;
-(void)_dismissForwardFlowViewControllerAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)_presentForwardFlowViewControllerWithSuggestedContactsRetriever:(id)arg1 sendConversionContext:(id)arg2 externalForwardDataFetcher:(id)arg3 ;
-(id)initWithForwardFlowControllerFactory:(id)arg1 navigationCoordinatorProvider:(id)arg2 suggestedContractsRetrieverProvider:(id)arg3 messageSenderProvider:(id)arg4 ;
-(BOOL)isPublic;
@end
