/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:39 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBPaymentsCardAction.h>
#import <Facebook/FBPaymentsEventAnnouncing.h>

@protocol FBPaymentsPaymentMethodsDataMutator, FBPaymentsCardRemoveActionContentProviding, FBPaymentsCardActionDelegate, FBPaymentsNavigationDelegate;
@class FBPaymentsEventListenerAnnouncer, FBUserSession, NSString;

@interface FBPaymentsCardRemoveAction : NSObject <FBPaymentsCardAction, FBPaymentsEventAnnouncing> {

	id<FBPaymentsPaymentMethodsDataMutator> _cardMutator;
	id<FBPaymentsCardRemoveActionContentProviding> _contentProvider;
	FBPaymentsEventListenerAnnouncer* _eventAnnouncer;
	FBUserSession* _session;
	id<FBPaymentsCardActionDelegate> _actionDelegate;
	id<FBPaymentsNavigationDelegate> _navigationDelegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<FBPaymentsCardActionDelegate> actionDelegate;                  //@synthesize actionDelegate=_actionDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<FBPaymentsNavigationDelegate> navigationDelegate;              //@synthesize navigationDelegate=_navigationDelegate - In the implementation block
+(id)announcerIdentifier;
-(void)addEventListener:(id)arg1 ;
-(void)removeEventListener:(id)arg1 ;
-(BOOL)shouldDisplayForCard:(id)arg1 ;
-(BOOL)shouldEnableForCard:(id)arg1 cardCollectedData:(id)arg2 cardOption:(id)arg3 ;
-(id)titleWithCard:(id)arg1 ;
-(BOOL)isActionDestructive;
-(void)handleActionWithCard:(id)arg1 cardCollectedData:(id)arg2 ;
-(id)initWithSession:(id)arg1 cardMutator:(id)arg2 contentProvider:(id)arg3 ;
-(void)_deleteCard:(id)arg1 ;
-(void)_handleConfirmDeleteActionWithCard:(id)arg1 ;
-(void)_handleCancelDeleteAction;
-(void)_handleDeleteCardActionWithCard:(id)arg1 ;
-(void)_handleDeleteCardCallbackWithError:(id)arg1 ;
-(void)_dispatchDeleteCardSuccess;
-(id)initWithSession:(id)arg1 cardMutator:(id)arg2 ;
-(id<FBPaymentsNavigationDelegate>)navigationDelegate;
-(void)setActionDelegate:(id<FBPaymentsCardActionDelegate>)arg1 ;
-(id<FBPaymentsCardActionDelegate>)actionDelegate;
-(void)setNavigationDelegate:(id<FBPaymentsNavigationDelegate>)arg1 ;
@end
