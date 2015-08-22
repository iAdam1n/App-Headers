/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:57 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/FBReportingFlowConfigProviderDelegateProtocol.h>
#import <Messenger/FBReportingFlowGuidedActionDispatchingDelegateProtocol.h>
#import <Messenger/FBAvatarPickerControllerDelegate.h>
#import <Messenger/FBModalWebFlowDelegate.h>
#import <Messenger/FBReportingFlowCoordinatorDelegateProtocol.h>

@protocol FBReportingFlowConfigProviderProtocol, FBReportingFlowGuidedActionDispatchingProtocol;
@class FBUserSession, NSString, UINavigationController;

@interface FBReportingFlowCoordinator : NSObject <FBReportingFlowConfigProviderDelegateProtocol, FBReportingFlowGuidedActionDispatchingDelegateProtocol, FBAvatarPickerControllerDelegate, FBModalWebFlowDelegate, FBReportingFlowCoordinatorDelegateProtocol> {

	FBUserSession* _userSession;
	NSString* _counterpartyUID;
	NSString* _location;
	NSString* _nodeID;
	id<FBReportingFlowConfigProviderProtocol> _configProvider;
	UINavigationController* _navigationController;
	id<FBReportingFlowGuidedActionDispatchingProtocol> _guidedActionDispatcher;
	long long _previousStatusBarStyle;
	int _uiPresentationStyle;
	/*^block*/id _dismissBlock;

}

@property (nonatomic,copy) id dismissBlock;                         //@synthesize dismissBlock=_dismissBlock - In the implementation block
@property (assign,nonatomic) int uiPresentationStyle;               //@synthesize uiPresentationStyle=_uiPresentationStyle - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)nativeReportingFlowIsEnabledForWilde:(id)arg1 ;
-(id)dismissBlock;
-(void)setDismissBlock:(id)arg1 ;
-(void)avatarPicker:(id)arg1 didFinishWithSelection:(id)arg2 ;
-(void)avatarPickerDidCancel:(id)arg1 ;
-(void)removeTemporaryViewControllersAndAddViewController:(id)arg1 ;
-(void)messageWasSent;
-(void)_webViewControllerDidClose;
-(void)dismissReportingFlow;
-(void)_showErrorAlertView:(id)arg1 description:(id)arg2 ;
-(void)didFetchPromptModel:(id)arg1 ;
-(void)didFail;
-(void)actionDidSucceed;
-(void)actionDidFail:(id)arg1 description:(id)arg2 ;
-(void)loadNewBranchForDetailedResponse:(id)arg1 ;
-(void)performGuidedAction:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)performMessageGuidedAction:(id)arg1 completionBlock:(/*^block*/id)arg2 targetFBID:(id)arg3 message:(id)arg4 ;
-(void)loadMessageComposer:(id)arg1 ;
-(void)showAvatarPicker;
-(id)initWithUserSession:(id)arg1 counterpartyUID:(id)arg2 nodeID:(id)arg3 ;
-(id)initWithUserSession:(id)arg1 location:(id)arg2 nodeID:(id)arg3 ;
-(id)viewControllerForReportingFlow;
-(int)uiPresentationStyle;
-(void)setUiPresentationStyle:(int)arg1 ;
-(int)presentationStyle;
-(void)goBack;
-(void)redirectToURL:(id)arg1 ;
@end
