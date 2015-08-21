/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:35:26 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/BAB6B524-089F-49C7-9E02-F76A6A5EBF73/CARROT.app/CARROT
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class UILabel, UIImageView, UIColor, NSArray, UIButton, UITapGestureRecognizer, UIImage, CARBigOcularSensorView, NSString;

@interface CARWelcomeViewController : UIViewController <UIGestureRecognizerDelegate> {

	UILabel* _topLabel;
	UILabel* _bottomLabel;
	UILabel* _bottomLabel2;
	UILabel* _nextlabel;
	UIImageView* _dormantView;
	char _isWelcomeView;
	char _isAngry;
	UIColor* _blackWhenHappy;
	UIColor* _whiteWhenHappy;
	char _stateChangeNeeded;
	NSArray* _levelUpDialogueArray;
	char _alreadyActive;
	char _didLayout;
	int _currentMood;
	char _moodImproved;
	UIButton* _eyeButton;
	int _timesEyeTapped;
	UITapGestureRecognizer* _recognizer;
	int _margins;
	char _prankDisplayed;
	char _portraitDisplayed;
	char _groupShotDisplayed;
	char _eyeButtonTapped;
	UIImage* _portrait;
	char _isLevelUp;
	CARBigOcularSensorView* _carrotEye;

}

@property (nonatomic,retain) CARBigOcularSensorView * carrotEye;              //@synthesize carrotEye=_carrotEye - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWelcome;
-(id)initUpgradeFound;
-(id)initStartup:(char)arg1 ;
-(CARBigOcularSensorView *)carrotEye;
-(void)setCarrotEyeOpacity;
-(void)displaySecondPortraitAlert;
-(id)initLevelUp;
-(void)showSharePortraitSheet:(id)arg1 ;
-(void)setCarrotEye:(CARBigOcularSensorView *)arg1 ;
-(void)appStartupAnimations;
-(void)appUpgradeAnimations;
-(void)startPageOneAnimations;
-(void)pinkEyeAnimations;
-(void)levelUp;
-(void)wordsSpoken:(id)arg1 ;
-(void)displaySecondPrankAlert;
-(void)displaySecondGroupShotAlert;
-(void)eyeButton;
-(void)startPageTwoAnimations;
-(void)startPageThreeAnimations;
-(void)startMainInterface;
-(void)animateStateChange;
-(void)displayRewardAlert;
-(void)showBieberAlert1:(id)arg1 ;
-(void)showBieberAlert2:(id)arg1 ;
-(void)showBieberAlert3;
-(void)showTrainingAlert1;
-(void)showTrainingAlert2;
-(void)showTrainingAlert3;
-(void)showShareKittenSheet:(id)arg1 ;
-(void)showShareFortuneSheet:(id)arg1 type:(id)arg2 ;
-(void)showShareGroupShotSheet:(id)arg1 ;
-(id)initPinkEyePreview;
-(id)getCurrentMoodString;
-(void)dealloc;
-(id)init;
-(void)viewDidLayoutSubviews;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(char)arg1 ;
@end

