/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 5:05:18 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/BE5DA1E5-E5C1-4952-A4BE-28BA22319130/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Gumtree/ECBaseViewController.h>
#import <UIKit/UITextViewDelegate.h>
#import <Gumtree/ECChatViewModelDelegate.h>

@class ECChatDialogView, ECChatDialog, ECChatViewModel, ECChatDialogDetailsTableViewAdapter, ECDismissableMessageView, NSLayoutConstraint, ECNotificationObserver, NSString;

@interface ECChatDialogViewController : ECBaseViewController <UITextViewDelegate, ECChatViewModelDelegate> {

	BOOL _loadedDraftMessage;
	ECChatDialogView* _dialogView;
	ECChatDialog* _chatDialog;
	ECChatViewModel* _chatViewModel;
	ECChatDialogDetailsTableViewAdapter* _historyAdapter;
	ECDismissableMessageView* _welcomeMessageView;
	NSLayoutConstraint* _dialogViewTopConstraint;
	ECNotificationObserver* _profileObserver;

}

@property (nonatomic,retain) ECChatDialogView * dialogView;                                     //@synthesize dialogView=_dialogView - In the implementation block
@property (nonatomic,retain) ECChatDialog * chatDialog;                                         //@synthesize chatDialog=_chatDialog - In the implementation block
@property (nonatomic,retain) ECChatViewModel * chatViewModel;                                   //@synthesize chatViewModel=_chatViewModel - In the implementation block
@property (nonatomic,retain) ECChatDialogDetailsTableViewAdapter * historyAdapter;              //@synthesize historyAdapter=_historyAdapter - In the implementation block
@property (assign,nonatomic) BOOL loadedDraftMessage;                                           //@synthesize loadedDraftMessage=_loadedDraftMessage - In the implementation block
@property (nonatomic,retain) ECDismissableMessageView * welcomeMessageView;                     //@synthesize welcomeMessageView=_welcomeMessageView - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * dialogViewTopConstraint;                      //@synthesize dialogViewTopConstraint=_dialogViewTopConstraint - In the implementation block
@property (nonatomic,retain) ECNotificationObserver * profileObserver;                          //@synthesize profileObserver=_profileObserver - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)trackPageView;
-(ECChatDialog *)chatDialog;
-(void)setChatDialog:(ECChatDialog *)arg1 ;
-(void)updateData;
-(ECNotificationObserver *)profileObserver;
-(void)setProfileObserver:(ECNotificationObserver *)arg1 ;
-(void)viewModel:(id)arg1 didUpdateDialog:(id)arg2 ;
-(void)viewModel:(id)arg1 navigateToAdDetails:(id)arg2 ;
-(void)viewModel:(id)arg1 didLoadAdDetails:(id)arg2 forDialog:(id)arg3 ;
-(BOOL)viewIsPresenting:(id)arg1 ;
-(BOOL)viewModel:(id)arg1 didReceiveMessage:(id)arg2 forDialog:(id)arg3 ;
-(void)viewModel:(id)arg1 didSendMessage:(id)arg2 withSuccess:(BOOL)arg3 ;
-(void)setHistoryAdapter:(ECChatDialogDetailsTableViewAdapter *)arg1 ;
-(ECChatDialogView *)dialogView;
-(void)setDialogView:(ECChatDialogView *)arg1 ;
-(void)setDialogViewTopConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)dialogViewTopConstraint;
-(void)didTapSendButton;
-(void)didTapReplyOption:(id)arg1 ;
-(ECChatDialogDetailsTableViewAdapter *)historyAdapter;
-(ECChatViewModel *)chatViewModel;
-(void)didActionRefreshButton;
-(void)setLoadedDraftMessage:(BOOL)arg1 ;
-(void)displayWelcomeMessageIfNeeded;
-(BOOL)loadedDraftMessage;
-(ECDismissableMessageView *)welcomeMessageView;
-(void)setWelcomeMessageView:(ECDismissableMessageView *)arg1 ;
-(void)updateWelcomeMessage;
-(void)keyboardWillChangeFrameNotification:(id)arg1 ;
-(void)sendMessageWithText:(id)arg1 ;
-(void)setChatViewModel:(ECChatViewModel *)arg1 ;
-(void)dealloc;
-(id)init;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)willMoveToParentViewController:(id)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)textViewDidChange:(id)arg1 ;
-(void)setupNotifications;
@end
