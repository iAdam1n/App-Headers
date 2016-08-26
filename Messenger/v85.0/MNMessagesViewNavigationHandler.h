/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:19 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBViewerContextClassProvidable.h>
#import <Messenger/MNMessagesViewControllerDelegate.h>

@protocol FBProvider;
@class NSString;

@interface MNMessagesViewNavigationHandler : NSObject <FBViewerContextClassProvidable, MNMessagesViewControllerDelegate> {

	id<FBProvider> _navigationCoordinatorProvider;
	id<FBProvider> _messagesViewPresenterProvider;
	id<FBProvider> _blockUserViewControllerProvider;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(id)_navigationCoordinator;
-(void)_dismissMessagesViewController:(id)arg1 ;
-(id)_messagesViewPresenter;
-(BOOL)messagesViewControllerIsPushed:(id)arg1 ;
-(void)messagesViewControllerDidPressBack:(id)arg1 ;
-(void)messagesViewControllerDidDeleteThread:(id)arg1 ;
-(void)messagesViewControllerDidIgnoreMessageRequest:(id)arg1 ;
-(void)messagesViewControllerDidSelectLeaveGroup:(id)arg1 ;
-(void)messagesViewController:(id)arg1 didSelectToViewWebViewController:(id)arg2 ;
-(void)messagesViewControllerDidSelectUnblockUser:(id)arg1 ;
@end
