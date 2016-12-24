/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:03 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBFeedSideFeedRemindersViewController.h>
#import <Facebook/FBFeedSideFeedBirthdayRemindersComposerDelegate.h>
#import <Facebook/FBFeedSideFeedBirthdayRemindersViewDelegate.h>

@class FBFeedSideFeedBirthdayRemindersView, NSString;

@interface FBFeedSideFeedBirthdayRemindersViewController : FBFeedSideFeedRemindersViewController <FBFeedSideFeedBirthdayRemindersComposerDelegate, FBFeedSideFeedBirthdayRemindersViewDelegate> {

	FBFeedSideFeedBirthdayRemindersView* _currentBirthdayView;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)validateBirthdaySubUnit:(id)arg1 ;
-(id)viewsForReminders;
-(void)birthdayMessageComposer:(id)arg1 didEnd:(BOOL)arg2 ;
-(void)_cleanupStalePersistedState;
-(id)viewForBirthdayReminder:(id)arg1 ;
-(void)setAssociatedPersonURL:(id)arg1 forNameLabel:(id)arg2 ;
-(BOOL)_isMessagePostedToRecipient:(id)arg1 ;
-(void)showBirthdayPostComposerForReminder:(id)arg1 ;
-(void)showBirthdayMessagePromptForReminder:(id)arg1 ;
-(void)openMessengerThreadForPerson:(id)arg1 ;
-(id)associatedPersonURLForNameLabel:(id)arg1 ;
-(void)_setMessagePostedToRecipient:(id)arg1 ;
-(void)_cleanupPreferencesDictionaryForKey:(id)arg1 ;
-(void)interactiveBirthdayView:(id)arg1 userDidTapComposeButton:(id)arg2 ;
-(void)interactiveBirthdayView:(id)arg1 userDidTapNameLabel:(id)arg2 ;
-(void)viewDidLoad;
-(id)titleText;
@end
