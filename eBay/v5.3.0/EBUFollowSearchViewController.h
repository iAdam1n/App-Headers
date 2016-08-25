/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:54:31 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/EDDCC4DC-B551-47FD-8F2D-ADD28D2EEB77/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <eBay/EBUKeyboardAccessoryViewController.h>

@class EBNSearchOptions, NSDictionary, NSMutableArray, UIView, EUILabel, UIButton, UILabel, UITextField, EUIImageView, UISwitch, EBUActionButton, EBULoadingToastView, LengthLimitingTextFieldDelegate;

@interface EBUFollowSearchViewController : EBUKeyboardAccessoryViewController {

	EBNSearchOptions* _searchOptions;
	NSDictionary* _metrics;
	NSMutableArray* _outerConstraints;
	UIView* _rootViewForSubviews;
	EUILabel* _titleLabel;
	UIView* _separator1;
	UIButton* _closeButton;
	UILabel* _nameLabel;
	UITextField* _nameTextField;
	UIView* _separator2;
	EUIImageView* _emailNotificationImageView;
	UILabel* _emailNotificationLabel;
	UISwitch* _emailNotificationSwitch;
	UIView* _separator3;
	EUIImageView* _notificationImageView;
	UILabel* _notificationsLabel;
	UISwitch* _notificationSwitch;
	UIView* _separator4;
	EBUActionButton* _saveButton;
	UILabel* _hintLabel;
	EBULoadingToastView* _progressIndicator;
	LengthLimitingTextFieldDelegate* _lengthLimitingDelegate;
	/*^block*/id _completionHandler;

}

@property (nonatomic,retain) EBNSearchOptions * searchOptions;                                      //@synthesize searchOptions=_searchOptions - In the implementation block
@property (nonatomic,retain) NSDictionary * metrics;                                                //@synthesize metrics=_metrics - In the implementation block
@property (nonatomic,retain) NSMutableArray * outerConstraints;                                     //@synthesize outerConstraints=_outerConstraints - In the implementation block
@property (nonatomic,retain) UIView * rootViewForSubviews;                                          //@synthesize rootViewForSubviews=_rootViewForSubviews - In the implementation block
@property (nonatomic,retain) EUILabel * titleLabel;                                                 //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UIView * separator1;                                                   //@synthesize separator1=_separator1 - In the implementation block
@property (nonatomic,retain) UIButton * closeButton;                                                //@synthesize closeButton=_closeButton - In the implementation block
@property (nonatomic,retain) UILabel * nameLabel;                                                   //@synthesize nameLabel=_nameLabel - In the implementation block
@property (nonatomic,retain) UITextField * nameTextField;                                           //@synthesize nameTextField=_nameTextField - In the implementation block
@property (nonatomic,retain) UIView * separator2;                                                   //@synthesize separator2=_separator2 - In the implementation block
@property (nonatomic,retain) EUIImageView * emailNotificationImageView;                             //@synthesize emailNotificationImageView=_emailNotificationImageView - In the implementation block
@property (nonatomic,retain) UILabel * emailNotificationLabel;                                      //@synthesize emailNotificationLabel=_emailNotificationLabel - In the implementation block
@property (nonatomic,retain) UISwitch * emailNotificationSwitch;                                    //@synthesize emailNotificationSwitch=_emailNotificationSwitch - In the implementation block
@property (nonatomic,retain) UIView * separator3;                                                   //@synthesize separator3=_separator3 - In the implementation block
@property (nonatomic,retain) EUIImageView * notificationImageView;                                  //@synthesize notificationImageView=_notificationImageView - In the implementation block
@property (nonatomic,retain) UILabel * notificationsLabel;                                          //@synthesize notificationsLabel=_notificationsLabel - In the implementation block
@property (nonatomic,retain) UISwitch * notificationSwitch;                                         //@synthesize notificationSwitch=_notificationSwitch - In the implementation block
@property (nonatomic,retain) UIView * separator4;                                                   //@synthesize separator4=_separator4 - In the implementation block
@property (nonatomic,retain) EBUActionButton * saveButton;                                          //@synthesize saveButton=_saveButton - In the implementation block
@property (nonatomic,retain) UILabel * hintLabel;                                                   //@synthesize hintLabel=_hintLabel - In the implementation block
@property (nonatomic,retain) EBULoadingToastView * progressIndicator;                               //@synthesize progressIndicator=_progressIndicator - In the implementation block
@property (nonatomic,retain) LengthLimitingTextFieldDelegate * lengthLimitingDelegate;              //@synthesize lengthLimitingDelegate=_lengthLimitingDelegate - In the implementation block
@property (nonatomic,copy) id completionHandler;                                                    //@synthesize completionHandler=_completionHandler - In the implementation block
+(void)showFollowSearchDialogAnimated:(BOOL)arg1 withSearchOptions:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
+(BOOL)isiPad;
-(void)adjustKeyboardWillHide:(id)arg1 ;
-(void)adjustKeyboardWillShow:(id)arg1 ;
-(UITextField *)nameTextField;
-(void)setNameTextField:(UITextField *)arg1 ;
-(void)initMetrics;
-(void)buildView;
-(void)updateRootViewConstraints;
-(UISwitch *)emailNotificationSwitch;
-(UISwitch *)notificationSwitch;
-(void)updateHint;
-(UIView *)rootViewForSubviews;
-(void)setRootViewForSubviews:(UIView *)arg1 ;
-(void)addToView:(id)arg1 ;
-(void)setSeparator1:(UIView *)arg1 ;
-(UIView *)separator1;
-(void)setLengthLimitingDelegate:(LengthLimitingTextFieldDelegate *)arg1 ;
-(LengthLimitingTextFieldDelegate *)lengthLimitingDelegate;
-(void)setSeparator2:(UIView *)arg1 ;
-(UIView *)separator2;
-(void)setEmailNotificationImageView:(EUIImageView *)arg1 ;
-(EUIImageView *)emailNotificationImageView;
-(void)setEmailNotificationLabel:(UILabel *)arg1 ;
-(UILabel *)emailNotificationLabel;
-(void)setEmailNotificationSwitch:(UISwitch *)arg1 ;
-(void)setSeparator3:(UIView *)arg1 ;
-(UIView *)separator3;
-(void)setNotificationImageView:(EUIImageView *)arg1 ;
-(EUIImageView *)notificationImageView;
-(void)setNotificationsLabel:(UILabel *)arg1 ;
-(UILabel *)notificationsLabel;
-(void)setNotificationSwitch:(UISwitch *)arg1 ;
-(void)setSeparator4:(UIView *)arg1 ;
-(UIView *)separator4;
-(void)saveButtonPressed:(id)arg1 ;
-(void)setupCloseButton;
-(NSMutableArray *)outerConstraints;
-(void)setOuterConstraints:(NSMutableArray *)arg1 ;
-(void)dismissWithSavedSearch:(id)arg1 ;
-(void)completeSave;
-(void)dataManagerFinishSave:(id)arg1 ;
-(void)hideProgressIndicator;
-(void)setProgressIndicator:(EBULoadingToastView *)arg1 ;
-(id)initWithSearchOptions:(id)arg1 ;
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
-(void)viewDidLayoutSubviews;
-(EUILabel *)titleLabel;
-(void)viewDidLoad;
-(NSDictionary *)metrics;
-(void)setTitleLabel:(EUILabel *)arg1 ;
-(BOOL)accessibilityPerformEscape;
-(void)setMetrics:(NSDictionary *)arg1 ;
-(UILabel *)nameLabel;
-(void)setNameLabel:(UILabel *)arg1 ;
-(EBULoadingToastView *)progressIndicator;
-(UIButton *)closeButton;
-(void)setCloseButton:(UIButton *)arg1 ;
-(EBUActionButton *)saveButton;
-(void)setSaveButton:(EBUActionButton *)arg1 ;
-(void)setHintLabel:(UILabel *)arg1 ;
-(UILabel *)hintLabel;
-(void)showProgressIndicator;
-(void)setSearchOptions:(EBNSearchOptions *)arg1 ;
-(EBNSearchOptions *)searchOptions;
-(void)closeButtonPressed:(id)arg1 ;
-(void)dismissAlert;
@end

