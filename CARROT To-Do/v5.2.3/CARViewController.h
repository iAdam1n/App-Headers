/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 23, 2016 at 8:47:19 PM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/B61875E7-F2F8-487D-814D-DF59A28B6A4C/CARROT.app/CARROT
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <CARROT/FMMoveTableViewDataSource.h>
#import <CARROT/FMMoveTableViewDelegate.h>
#import <CARROT/CARTableViewCellDelegate.h>
#import <CARROT/EGORefreshTableHeaderDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <CARROT/MFMailComposeViewControllerDelegate.h>
#import <libobjc.A.dylib/SKStoreProductViewControllerDelegate.h>

@class EGORefreshTableHeaderView, NSMutableArray, UIView, UIColor, CARToDoItem, NSDate, NSArray, EKEventStore, NSString, UIImage, UISwipeGestureRecognizer, UITapGestureRecognizer, FMMoveTableView, CARToolbar;

@interface CARViewController : UIViewController <FMMoveTableViewDataSource, FMMoveTableViewDelegate, CARTableViewCellDelegate, EGORefreshTableHeaderDelegate, UIGestureRecognizerDelegate, MFMailComposeViewControllerDelegate, SKStoreProductViewControllerDelegate> {

	EGORefreshTableHeaderView* _refreshHeaderView;
	BOOL _reloading;
	NSMutableArray* _toDoItems;
	NSMutableArray* _completeItems;
	float _totalPoints;
	BOOL _animating;
	BOOL _levelingUp;
	BOOL _moodSwinging;
	BOOL _soundPlayedOnce;
	BOOL _didLayout;
	UIView* _emptyList;
	UIView* _footerView;
	UIColor* _blackWhenHappy;
	UIColor* _whiteWhenHappy;
	BOOL _isAngry;
	int _stateChangeCounter;
	int _currentMood;
	int _newMood;
	int _scoreMultiplier;
	int _timesEyeTapped;
	BOOL _eyeSequenceAlreadyIncremented;
	CARToDoItem* _lastItemCompleted;
	BOOL _moodSwingInitiated;
	BOOL _moodSwingNeeded;
	int _bonusRoundCounter;
	int _shamingCounter;
	BOOL _shakeToUndoNotAllowed;
	BOOL _keyboardShown;
	BOOL _isEditing;
	NSDate* _dateHolder;
	NSArray* _todoListZeroTextArray;
	EKEventStore* _store;
	NSMutableArray* _syncedArray;
	NSArray* _remindersAppListArray;
	BOOL _triedToAccessReminders;
	NSMutableArray* _remindersStringArray;
	BOOL _isSyncing;
	BOOL _syncAgain;
	NSString* _recurrenceHolder;
	NSDate* _completionDateHolder;
	NSArray* _accountsArray;
	BOOL _appIsActive;
	BOOL _portraitDisplayed;
	UIImage* _portrait;
	UISwipeGestureRecognizer* _quickAddSwipeGesture;
	UISwipeGestureRecognizer* _quickDeleteSwipeGesture;
	UISwipeGestureRecognizer* _quickUndoDeleteSwipeGesture;
	UITapGestureRecognizer* _quickDismissTapGesture;
	NSString* _quickDeleteTextHolder;
	NSString* _moodSwingDialogue;
	FMMoveTableView* _tableView;
	CARToolbar* _toolBar;
	UIView* _blackEditingView;
	NSDate* _lastCompletionTime;

}

@property (assign,nonatomic,__weak) FMMoveTableView * tableView;              //@synthesize tableView=_tableView - In the implementation block
@property (assign,nonatomic,__weak) CARToolbar * toolBar;                     //@synthesize toolBar=_toolBar - In the implementation block
@property (nonatomic,retain) UIView * blackEditingView;                       //@synthesize blackEditingView=_blackEditingView - In the implementation block
@property (nonatomic,retain) NSDate * lastCompletionTime;                     //@synthesize lastCompletionTime=_lastCompletionTime - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setLastCompletionTime:(NSDate *)arg1 ;
-(NSDate *)lastCompletionTime;
-(id)todoArchivePath;
-(void)initiateStateChange:(BOOL)arg1 moodTrendingUp:(BOOL)arg2 becauseOfEyeButton:(BOOL)arg3 ;
-(id)completeArchivePath;
-(void)setThemeBackgroundColor;
-(void)loadSounds;
-(void)firstLaunchCloudSync;
-(CARToolbar *)toolBar;
-(void)setCarrotEyeOpacity;
-(void)handleToolbarTap;
-(int)pointsPerLevel;
-(void)setBlackEditingView:(UIView *)arg1 ;
-(void)changeTheme;
-(void)initiateStateChangeViaTweet;
-(void)changeTaskCompletionIcon;
-(void)startupAnimation;
-(void)startupAnimationWithMoodSwing;
-(void)showCompletedVC;
-(void)showUnlockablesVC;
-(void)showBriberyVC;
-(void)showCustomizeVC;
-(void)showSupportEmail;
-(void)showHangCatVC;
-(void)showFitPurchaseVC;
-(void)showHungerPurchaseVC;
-(void)showWeatherPurchaseVC;
-(void)showStickerPurchaseVC;
-(void)showAlarmClockPurchaseVC;
-(void)showAchievementsVC;
-(void)reloadComplete;
-(void)disableTableScroll;
-(void)reloadRemindersData;
-(void)importItem;
-(void)turnOnSiriSync;
-(void)remindersStoreChanged;
-(void)syncUserLevel;
-(void)syncPoints;
-(void)syncStoryIndex;
-(UIView *)blackEditingView;
-(void)showEmptyList:(BOOL)arg1 ;
-(void)displaySecondPortraitAlert;
-(void)requestRemindersAccess;
-(void)showShameSheet:(id)arg1 ;
-(void)rateApp;
-(void)twitterFollow;
-(void)showPledgeSheet:(id)arg1 ;
-(void)showHairLockSheet:(id)arg1 ;
-(void)showSacrificeSheet:(id)arg1 ;
-(void)requestNotificationPermissions;
-(void)storyIndexDefaults;
-(void)setReminder:(id)arg1 recurrence:(id)arg2 ;
-(BOOL)saveComplete;
-(void)cancelReminder:(id)arg1 ;
-(void)showTodoListZeroSheet:(id)arg1 ;
-(int)pointsToAward:(BOOL)arg1 task:(id)arg2 ;
-(void)checkForMoodUpdate:(BOOL)arg1 becauseOfEyeButton:(BOOL)arg2 ;
-(void)slideChatterboxLabelOut:(id)arg1 labelIn:(id)arg2 withDelay:(float)arg3 completion:(/*^block*/id)arg4 ;
-(void)updateUserLevel;
-(void)submitScore;
-(float)setScoreMultiplier;
-(float)setCreationDateMultiplier:(id)arg1 ;
-(void)carrotQueries:(id)arg1 ;
-(void)handleEditOverlayTap;
-(void)quickAddTask;
-(void)handleQuickDelete:(id)arg1 ;
-(void)doneLoadingTableViewData;
-(void)prepareAddItemBox;
-(void)undoLastComplete:(BOOL)arg1 ;
-(void)commandLineLevelJump:(int)arg1 ;
-(void)backUpData;
-(void)toolbar:(id)arg1 didTapAddButton:(id)arg2 newItem:(id)arg3 ;
-(void)toDoItemDeleted:(id)arg1 ;
-(void)toDoItemReminder:(id)arg1 ;
-(void)toDoItemEdit:(id)arg1 ;
-(void)setSpecificDayReminders:(id)arg1 recurrence:(id)arg2 ;
-(void)remindersSync;
-(void)chatterBoxStartup;
-(void)addNewItem;
-(void)showSharePortraitSheet:(id)arg1 ;
-(void)followAction:(id)arg1 ;
-(void)twitterAccountsAlert;
-(void)showAppStoreViewControllerForApp:(long long)arg1 ;
-(void)updatePoints:(int)arg1 ;
-(id)scrambleLetters:(id)arg1 ;
-(void)saveMoods;
-(void)angryShatterAnimation;
-(void)happyShatterAnimation;
-(id)getMoodSwingDialogue:(BOOL)arg1 ;
-(void)moveTableView:(id)arg1 moveRowFromIndexPath:(id)arg2 toIndexPath:(id)arg3 ;
-(BOOL)moveTableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2 ;
-(id)moveTableView:(id)arg1 targetIndexPathForMoveFromRowAtIndexPath:(id)arg2 toProposedIndexPath:(id)arg3 ;
-(void)toDoItemTapped:(id)arg1 ;
-(void)egoRefreshTableHeaderDidTriggerRefresh:(id)arg1 ;
-(BOOL)egoRefreshTableHeaderDataSourceIsLoading:(id)arg1 ;
-(void)addItemGestureCue;
-(void)showRecurPurchaseVC;
-(void)showCaptcha;
-(void)showWordScramble;
-(void)showQuiz;
-(void)showNumberGuess;
-(void)toolbar:(id)arg1 didTapEyeButton:(id)arg2 ;
-(void)setToolBar:(CARToolbar *)arg1 ;
-(void)dealloc;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(void)motionEnded:(long long)arg1 withEvent:(id)arg2 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(BOOL)canBecomeFirstResponder;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)setTableView:(FMMoveTableView *)arg1 ;
-(FMMoveTableView *)tableView;
-(void)viewDidLoad;
-(void)setIcon:(id)arg1 ;
-(void)addTask:(id)arg1 ;
-(void)mailComposeController:(id)arg1 didFinishWithResult:(long long)arg2 error:(id)arg3 ;
-(BOOL)saveChanges;
-(void)applicationDidEnterBackground;
-(void)storeChanged:(id)arg1 ;
-(void)productViewControllerDidFinish:(id)arg1 ;
-(void)updateToolbar;
@end
