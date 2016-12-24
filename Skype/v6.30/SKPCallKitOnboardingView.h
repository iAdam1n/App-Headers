/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:36:37 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/91AA76A0-F2FF-4AAA-BCD2-7E5978B32B63/Skype.app/Skype
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Skype/Skype-Structs.h>
#import <UIKit/UIView.h>

@class NSString, UIView, UILabel, UISwitch, MKDefaultButton;

@interface SKPCallKitOnboardingView : UIView {

	BOOL _integratedCallingOn;
	/*^block*/id _okActionBlock;
	NSString* _integratedCallingOnString;
	NSString* _integratedCallingOffString;
	UIView* _mainContentContainer;
	UILabel* _title;
	UILabel* _subtitle;
	UIView* _integratedCallingContainer;
	UILabel* _integratedCallingTitle;
	UISwitch* _integratedCallingSwitch;
	UILabel* _integratedCallingWarning;
	MKDefaultButton* _okButton;
	UIView* _settingsReminderContainer;
	UILabel* _settingsReminderLabel;

}

@property (nonatomic,retain) UIView * mainContentContainer;                    //@synthesize mainContentContainer=_mainContentContainer - In the implementation block
@property (nonatomic,retain) UILabel * title;                                  //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) UILabel * subtitle;                               //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,retain) UIView * integratedCallingContainer;              //@synthesize integratedCallingContainer=_integratedCallingContainer - In the implementation block
@property (nonatomic,retain) UILabel * integratedCallingTitle;                 //@synthesize integratedCallingTitle=_integratedCallingTitle - In the implementation block
@property (nonatomic,retain) UISwitch * integratedCallingSwitch;               //@synthesize integratedCallingSwitch=_integratedCallingSwitch - In the implementation block
@property (nonatomic,retain) UILabel * integratedCallingWarning;               //@synthesize integratedCallingWarning=_integratedCallingWarning - In the implementation block
@property (nonatomic,retain) MKDefaultButton * okButton;                       //@synthesize okButton=_okButton - In the implementation block
@property (nonatomic,retain) UIView * settingsReminderContainer;               //@synthesize settingsReminderContainer=_settingsReminderContainer - In the implementation block
@property (nonatomic,retain) UILabel * settingsReminderLabel;                  //@synthesize settingsReminderLabel=_settingsReminderLabel - In the implementation block
@property (nonatomic,copy) id okActionBlock;                                   //@synthesize okActionBlock=_okActionBlock - In the implementation block
@property (nonatomic,copy) NSString * integratedCallingOnString;               //@synthesize integratedCallingOnString=_integratedCallingOnString - In the implementation block
@property (nonatomic,copy) NSString * integratedCallingOffString;              //@synthesize integratedCallingOffString=_integratedCallingOffString - In the implementation block
@property (assign,nonatomic) BOOL integratedCallingOn;                         //@synthesize integratedCallingOn=_integratedCallingOn - In the implementation block
-(void)setMainContentContainer:(UIView *)arg1 ;
-(UIView *)mainContentContainer;
-(void)setIntegratedCallingContainer:(UIView *)arg1 ;
-(UIView *)integratedCallingContainer;
-(void)setIntegratedCallingTitle:(UILabel *)arg1 ;
-(UILabel *)integratedCallingTitle;
-(void)setIntegratedCallingSwitch:(UISwitch *)arg1 ;
-(void)setIntegratedCallingOn:(BOOL)arg1 ;
-(UISwitch *)integratedCallingSwitch;
-(void)integratedCallingValuecChanged:(id)arg1 ;
-(void)setIntegratedCallingWarning:(UILabel *)arg1 ;
-(UILabel *)integratedCallingWarning;
-(void)setSettingsReminderContainer:(UIView *)arg1 ;
-(UIView *)settingsReminderContainer;
-(void)setSettingsReminderLabel:(UILabel *)arg1 ;
-(UILabel *)settingsReminderLabel;
-(void)updateIntegratedCallingWarningText;
-(NSString *)integratedCallingOnString;
-(NSString *)integratedCallingOffString;
-(id)okActionBlock;
-(void)setIntegratedCallingOnString:(NSString *)arg1 ;
-(void)setIntegratedCallingOffString:(NSString *)arg1 ;
-(id)spaceView;
-(void)setOkActionBlock:(id)arg1 ;
-(BOOL)integratedCallingOn;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setTitle:(UILabel *)arg1 ;
-(UILabel *)title;
-(void)updateConstraints;
-(void)setSubtitle:(UILabel *)arg1 ;
-(UILabel *)subtitle;
-(void)commonInit;
-(MKDefaultButton *)okButton;
-(void)setOkButton:(MKDefaultButton *)arg1 ;
-(void)okButtonPressed:(id)arg1 ;
-(id)viewConstraints;
@end
