/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:58:13 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/0CF72264-5488-4FD5-B700-EF786D177983/BubbleMania.app/BubbleMania
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BubbleMania/XibDialogView.h>
#import <BubbleMania/FBLoginNotifyDelegate.h>
#import <BubbleMania/DialogDelegate.h>

@class UILabel, UIView, S8FBProfilePictureView, UIButton, S8SwitchView, S8HeaderLabel, NSString;

@interface SettingDialogView : XibDialogView <FBLoginNotifyDelegate, DialogDelegate> {

	UILabel* versionLabel;
	UILabel* uidLabel;
	UILabel* mobIdLabel;
	UILabel* nameLabel;
	UILabel* gemRewardLabel;
	UIView* extrasView;
	UIView* loginView;
	UIView* logoutView;
	S8FBProfilePictureView* profileImageView;
	UIButton* inputOption1;
	UIButton* inputOption2;
	UIView* fbRewardView;
	UILabel* fbUserName;
	S8SwitchView* s8MusicSwitch;
	S8SwitchView* s8EffectsSwitch;
	S8SwitchView* s8NotifySwitch;
	S8SwitchView* s8BlindSwitch;
	S8HeaderLabel* headerLabel;
	UIView* s8AccountView;
	int _forceCrashToggleCount;
	UIButton* _enableAllReplayLevelsButton;

}

@property (nonatomic,retain) UIView * extrasView; 
@property (assign,nonatomic) int forceCrashToggleCount;                           //@synthesize forceCrashToggleCount=_forceCrashToggleCount - In the implementation block
@property (nonatomic,retain) UIButton * enableAllReplayLevelsButton;              //@synthesize enableAllReplayLevelsButton=_enableAllReplayLevelsButton - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)showView;
-(void)facebookLoginStateChanged:(id)arg1 ;
-(void)dismissed:(id)arg1 ;
-(void)playTapSound;
-(void)dialogDidClose:(id)arg1 ;
-(void)dialogWasAccepted:(id)arg1 ;
-(void)facebookLogin:(id)arg1 ;
-(void)facebookLogout:(id)arg1 ;
-(void)setUpS8Switch:(id)arg1 ;
-(UIButton *)enableAllReplayLevelsButton;
-(void)updateSettings;
-(void)deleteOfflineCache;
-(void)changeEffectsState:(id)arg1 ;
-(void)changeNotifyBonusState:(id)arg1 ;
-(void)changeColorBlindState:(id)arg1 ;
-(void)resetButton;
-(void)crashButton;
-(void)createCorruptedCache;
-(void)refreshArt;
-(void)changeInputMethod:(id)arg1 ;
-(void)showHelpDialog;
-(void)accountSettingPressed;
-(void)enableAllReplayLevelsPressed:(id)arg1 ;
-(UIView *)extrasView;
-(void)setExtrasView:(UIView *)arg1 ;
-(int)forceCrashToggleCount;
-(void)setForceCrashToggleCount:(int)arg1 ;
-(void)setEnableAllReplayLevelsButton:(UIButton *)arg1 ;
-(void)dealloc;
-(id)init;
-(void)refresh;
-(void)unload;
@end

