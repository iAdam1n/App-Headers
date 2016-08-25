/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:49:36 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/A861CD42-DC74-45D3-9030-D3B6F185E279/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <Gumtree/BackButtonHandlerProtocol.h>
#import <Gumtree/ECBaseViewController.h>
@class NSString;


@protocol ECBaseViewController <NSObject>
@property (nonatomic,retain) NSString * identifier; 
@property (nonatomic,retain) NSString * trackingName; 
@property (nonatomic,retain) NSString * parentTrackingName; 
@property (assign,nonatomic) BOOL shouldTrackPageView; 
@required
-(NSString *)trackingName;
-(void)setTrackingName:(id)arg1;
-(void)setShouldTrackPageView:(BOOL)arg1;
-(BOOL)shouldTrackPageView;
-(NSString *)parentTrackingName;
-(void)setParentTrackingName:(id)arg1;
-(NSString *)identifier;
-(void)setIdentifier:(id)arg1;

@end

#import <Gumtree/ECMockableConfig.h>

@class NSString, ECAdDeleter, ECNotificationObserver, ECThemedBackgroundView, UINavigationItem, NSArray;

@interface ECBaseViewController : UIViewController <BackButtonHandlerProtocol, ECBaseViewController, ECMockableConfig> {

	BOOL _skipThemedBackground;
	BOOL _shouldTrackPageView;
	BOOL _presentingModalLogin;
	NSString* _identifier;
	/*^block*/id _apptentiveHandler;
	ECAdDeleter* _adDeleter;
	NSString* _trackingName;
	NSString* _parentTrackingName;
	ECNotificationObserver* _loginObserver;
	ECNotificationObserver* _conversationsRetrievedObserver;
	ECThemedBackgroundView* _forcedLoginBackgroundView;

}

@property (assign,nonatomic) BOOL presentingModalLogin;                                            //@synthesize presentingModalLogin=_presentingModalLogin - In the implementation block
@property (nonatomic,retain) ECThemedBackgroundView * forcedLoginBackgroundView;                   //@synthesize forcedLoginBackgroundView=_forcedLoginBackgroundView - In the implementation block
@property (nonatomic,readonly) BOOL shouldSelectViewControllerAsRoot; 
@property (nonatomic,retain) NSString * identifier;                                                //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) UINavigationItem * relevantNavigationitem; 
@property (nonatomic,copy) id apptentiveHandler;                                                   //@synthesize apptentiveHandler=_apptentiveHandler - In the implementation block
@property (assign,nonatomic) BOOL skipThemedBackground;                                            //@synthesize skipThemedBackground=_skipThemedBackground - In the implementation block
@property (nonatomic,retain) ECAdDeleter * adDeleter;                                              //@synthesize adDeleter=_adDeleter - In the implementation block
@property (assign,nonatomic) BOOL shouldTrackPageView;                                             //@synthesize shouldTrackPageView=_shouldTrackPageView - In the implementation block
@property (nonatomic,retain) NSString * trackingName;                                              //@synthesize trackingName=_trackingName - In the implementation block
@property (nonatomic,retain) NSString * parentTrackingName;                                        //@synthesize parentTrackingName=_parentTrackingName - In the implementation block
@property (nonatomic,retain) ECNotificationObserver * loginObserver;                               //@synthesize loginObserver=_loginObserver - In the implementation block
@property (nonatomic,retain) ECNotificationObserver * conversationsRetrievedObserver;              //@synthesize conversationsRetrievedObserver=_conversationsRetrievedObserver - In the implementation block
@property (nonatomic,readonly) NSArray * debugServices; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)replyViaWebWithAd:(id)arg1 ;
-(void)sendSMSToPhoneWithNumber:(id)arg1 forAD:(id)arg2 messageDelegate:(id)arg3 ;
-(id)chatDialogViewControllerWithAd:(id)arg1 ;
-(void)displayReplyAdController:(id)arg1 ;
-(void)loginToChatWithAd:(id)arg1 ;
-(void)displayChatDialogAfterLoginFromReplyViaEmailWithAd:(id)arg1 ;
-(void)closeNudgeWithOption:(long long)arg1 ;
-(void)callPhoneWithNumber:(id)arg1 forAD:(id)arg2 ;
-(void)detourToLoginWithAd:(id)arg1 andPostLoginSelector:(SEL)arg2 ;
-(void)trackEmailBeginWithAd:(id)arg1 ;
-(void)displayReplyChatControllerWithAd:(id)arg1 ;
-(void)replyViaPhoneWithAd:(id)arg1 useEchelon:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)replyViaSMSWithAd:(id)arg1 useEchelon:(BOOL)arg2 messageDelegate:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)replyViaEmailWithAd:(id)arg1 ;
-(void)replyViaChatWithAd:(id)arg1 ;
-(void)replyViaContactWithCV:(id)arg1 ;
-(NSString *)trackingName;
-(void)trackPageView;
-(void)setTrackingName:(NSString *)arg1 ;
-(void)updateEnable;
-(void)dismissSelf;
-(void)setShouldTrackPageView:(BOOL)arg1 ;
-(BOOL)shouldTrackPageView;
-(void)updateOnTabChange:(BOOL)arg1 ;
-(void)setAdDeleter:(ECAdDeleter *)arg1 ;
-(void)updateData;
-(void)updateValues;
-(long long)authenticationMode;
-(void)showLoginIfNotLoggedInForMode:(long long)arg1 ;
-(void)performActionUponAppBecomingActive;
-(void)performActionUponAppResigningActive;
-(ECAdDeleter *)adDeleter;
-(void)setConversationsRetrievedObserver:(ECNotificationObserver *)arg1 ;
-(ECNotificationObserver *)conversationsRetrievedObserver;
-(void)showSignInController:(id)arg1 ;
-(void)setApptentiveHandler:(id)arg1 ;
-(void)willLoseFocus;
-(void)willGainFocus;
-(NSArray *)debugServices;
-(ECNotificationObserver *)loginObserver;
-(void)setLoginObserver:(ECNotificationObserver *)arg1 ;
-(id)apptentiveHandler;
-(void)showRegistrationPage;
-(void)removeForcedLoginBackgroundView;
-(void)showLoginIfRequired;
-(NSString *)parentTrackingName;
-(void)setParentTrackingName:(NSString *)arg1 ;
-(void)showLogout:(/*^block*/id)arg1 ;
-(void)updateNavigationBar;
-(UINavigationItem *)relevantNavigationitem;
-(void)finishUpdatingNavigationBar;
-(void)setSkipThemedBackground:(BOOL)arg1 ;
-(BOOL)shouldShowForcedLoginView;
-(ECThemedBackgroundView *)forcedLoginBackgroundView;
-(BOOL)shouldDisplayRegistrationAlertWithRegistrationInfo:(id)arg1 ;
-(id)mailOfRegistrationInfo:(id)arg1 ;
-(void)showRegistrationAlertWithMail:(id)arg1 ;
-(BOOL)presentingModalLogin;
-(void)updateAccessibilityIdentifier;
-(BOOL)skipThemedBackground;
-(BOOL)needsOptOutFromExtendedLayoutChanges;
-(void)handleAccountValidationFailed:(id)arg1 ;
-(void)setPresentingModalLogin:(BOOL)arg1 ;
-(id)signInControllerForLoginMode:(long long)arg1 ;
-(void)handleShakeGesture;
-(BOOL)shouldDisplayIForgotAlertForURL:(id)arg1 ;
-(void)showIForgotAlertWithMail:(id)arg1 ;
-(BOOL)shouldSelectViewControllerAsRoot;
-(BOOL)shouldRemoveCellWhenRemovingWatchlist;
-(void)setForcedLoginBackgroundView:(ECThemedBackgroundView *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)dealloc;
-(NSString *)identifier;
-(unsigned long long)supportedInterfaceOrientations;
-(BOOL)shouldAutorotate;
-(void)motionEnded:(long long)arg1 withEvent:(id)arg2 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(BOOL)disablesAutomaticKeyboardDismissal;
-(id)appConfig;
-(void)dismissViewController;
-(BOOL)requiresAuthentication;
@end

