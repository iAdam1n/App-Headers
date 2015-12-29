//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SKPActivityToken, SKPWelcomeExperienceDisplayHistory, SKPWelcomeExperienceViewController;

@interface SKPWelcomeExperienceScheduler : NSObject
{
    _Bool _observeApplicationState;
    _Bool _activityShouldBeRegistered;
    _Bool _welcomeFlowRunning;
    _Bool _welcomeFlowDidShowOncePerSession;
    id <SKPWelcomeExperiencePresenting> _delegate;
    SKPWelcomeExperienceDisplayHistory *_displayHistory;
    SKPWelcomeExperienceViewController *_welcomeExperienceViewController;
    SKPActivityToken *_arbitratorActivity;
}

@property(nonatomic) _Bool welcomeFlowDidShowOncePerSession; // @synthesize welcomeFlowDidShowOncePerSession=_welcomeFlowDidShowOncePerSession;
@property(nonatomic) _Bool welcomeFlowRunning; // @synthesize welcomeFlowRunning=_welcomeFlowRunning;
@property(nonatomic) _Bool activityShouldBeRegistered; // @synthesize activityShouldBeRegistered=_activityShouldBeRegistered;
@property(retain, nonatomic) SKPActivityToken *arbitratorActivity; // @synthesize arbitratorActivity=_arbitratorActivity;
@property(nonatomic) _Bool observeApplicationState; // @synthesize observeApplicationState=_observeApplicationState;
@property(retain, nonatomic) SKPWelcomeExperienceViewController *welcomeExperienceViewController; // @synthesize welcomeExperienceViewController=_welcomeExperienceViewController;
@property(retain, nonatomic) SKPWelcomeExperienceDisplayHistory *displayHistory; // @synthesize displayHistory=_displayHistory;
@property(nonatomic) __weak id <SKPWelcomeExperiencePresenting> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)apnReminderViewControllerWithStyle:(unsigned long long)arg1 numberOfTimesShown:(unsigned long long)arg2;
- (id)pnvWelcomeViewController;
- (id)shareExtensionOnboardingViewController;
- (void)configureAddFriendsController:(id)arg1;
- (id)addFriendsViewControllerWithVerifiedPN;
- (id)addFriendsViewController;
- (id)enterPhoneNumberViewController;
- (id)timelineOnboardingViewController;
- (id)permissionsViewController;
- (_Bool)canStartCheckingForReturningUserWelcomeExperience;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)displaySCWelcomeExperienceForExistingUsersWithoutPhoneNumber;
- (void)displaySCWelcomeExperienceForExistingUsersWithPhoneNumber;
- (void)prepareAndDisplayShareExtensionOnboarding;
- (void)prepareAndDisplayShowHolidayVideoPromotion;
- (void)prepareAndDisplayMojiPromotion;
- (void)prepareAndDisplayAPNReminder;
- (void)prepareAndDisplayDefaultWelcomeExperience;
- (void)prepareAndDisplayShortCircuitWelcomeExperienceForExistingUsers;
- (void)prepareAndDisplayShortCircuitToastForExistingUsers;
- (void)prepareAndDisplaySetupWelcomeExperienceAfterCreateMicrosoftAccount;
- (void)prepareAndDisplayShortCircuitWelcomeExperienceAfterCreateAccount;
- (_Bool)shouldShowTimelineOnboarding;
- (_Bool)shouldShowPermissionScreen;
- (_Bool)shouldShowHolidayVideoMessagePromotion;
- (_Bool)shouldShowShareExtensionOnboarding;
- (_Bool)shouldShowMojiPromotion;
- (_Bool)shouldShowAPNReminder;
- (_Bool)shouldShowDefaultWelcomeExperience;
- (_Bool)shouldShowShortCircuitWelcomeExperienceForExistingUsersWithoutToast;
- (_Bool)shouldShowShortCircuitToastForExistingUsers;
- (_Bool)shouldShowSetupWelcomeExperienceAfterMicrosoftCreateAccount;
- (_Bool)shouldShowShortCircuitWelcomeExperienceAfterCreateAccount;
- (void)cleanup;
- (_Bool)trySettingUpArbitratorActivity;
- (void)showWelcomeExperienceIfNeeded;
- (void)dealloc;
- (id)init;
- (id)initWithDelegate:(id)arg1;

@end
