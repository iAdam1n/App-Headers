/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:47:03 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/342EE397-EC3B-4D13-968C-80EF1D13592D/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WhatsApp/WAViewController.h>
#import <WhatsApp/ABDisabledControllerDelegate.h>
#import <WhatsApp/WALinkLabelDelegate.h>

@class WASupportEmailComposer, UITableViewCell, WALinkLabel, WAConversationHeaderView, UITableView, UIView, UIImageView, UILabel, NSString;

@interface AboutViewController : WAViewController <ABDisabledControllerDelegate, WALinkLabelDelegate> {

	WASupportEmailComposer* _emailComposer;
	UITableViewCell* _cellHelpFAQ;
	UITableViewCell* _cellContactUs;
	UITableViewCell* _cellTOS;
	UITableViewCell* _cellLiscenses;
	WALinkLabel* _deprecationLabel;
	WAConversationHeaderView* _titleView;
	UITableView* _tableViewButtons;
	UIView* _viewDivider;
	UIView* _viewLogoContainer;
	UIImageView* _imageLogo;
	UIImageView* _imageWP;
	UILabel* _labelTitlePortrait;
	UILabel* _labelVersionPortrait;
	UIView* _viewTableHeader;
	UILabel* _labelTitleLandscape;
	UILabel* _labelVersionLandscape;
	UIView* _footerView;
	UILabel* _labelCopyright;

}

@property (nonatomic,retain) UITableView * tableViewButtons;               //@synthesize tableViewButtons=_tableViewButtons - In the implementation block
@property (nonatomic,retain) UIView * viewDivider;                         //@synthesize viewDivider=_viewDivider - In the implementation block
@property (nonatomic,retain) UIView * viewLogoContainer;                   //@synthesize viewLogoContainer=_viewLogoContainer - In the implementation block
@property (nonatomic,retain) UIImageView * imageLogo;                      //@synthesize imageLogo=_imageLogo - In the implementation block
@property (nonatomic,retain) UIImageView * imageWP;                        //@synthesize imageWP=_imageWP - In the implementation block
@property (nonatomic,retain) UILabel * labelTitlePortrait;                 //@synthesize labelTitlePortrait=_labelTitlePortrait - In the implementation block
@property (nonatomic,retain) UILabel * labelVersionPortrait;               //@synthesize labelVersionPortrait=_labelVersionPortrait - In the implementation block
@property (nonatomic,retain) UIView * viewTableHeader;                     //@synthesize viewTableHeader=_viewTableHeader - In the implementation block
@property (nonatomic,retain) UILabel * labelTitleLandscape;                //@synthesize labelTitleLandscape=_labelTitleLandscape - In the implementation block
@property (nonatomic,retain) UILabel * labelVersionLandscape;              //@synthesize labelVersionLandscape=_labelVersionLandscape - In the implementation block
@property (nonatomic,retain) UIView * footerView;                          //@synthesize footerView=_footerView - In the implementation block
@property (nonatomic,retain) UILabel * labelCopyright;                     //@synthesize labelCopyright=_labelCopyright - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UITableView *)tableViewButtons;
-(void)wa_tintColorDidChange;
-(void)wa_fontSizeDidChange;
-(void)setTableViewButtons:(UITableView *)arg1 ;
-(UILabel *)labelCopyright;
-(UILabel *)labelTitleLandscape;
-(UILabel *)labelVersionLandscape;
-(UILabel *)labelTitlePortrait;
-(UILabel *)labelVersionPortrait;
-(UIView *)viewTableHeader;
-(UIView *)viewLogoContainer;
-(UIView *)viewDivider;
-(UIImageView *)imageWP;
-(void)presentJailbrokenDeviceNotSupportedAlert;
-(void)setContactUsCellEnabled:(BOOL)arg1 ;
-(UIImageView *)imageLogo;
-(void)updateLayoutToOrientation:(long long)arg1 ;
-(void)openFAQAction;
-(void)contactUsAction;
-(void)viewTermsOfService;
-(void)viewLicenses;
-(void)abDisabledViewControllerDidCancel:(id)arg1 ;
-(id)helperTitleForABDisabledViewController:(id)arg1 ;
-(id)helperTextForABDisabledViewController:(id)arg1 ;
-(void)handleOpenURL:(id)arg1 fromLinkLabel:(id)arg2 ;
-(void)setViewDivider:(UIView *)arg1 ;
-(void)setViewLogoContainer:(UIView *)arg1 ;
-(void)setImageLogo:(UIImageView *)arg1 ;
-(void)setImageWP:(UIImageView *)arg1 ;
-(void)setLabelTitlePortrait:(UILabel *)arg1 ;
-(void)setLabelVersionPortrait:(UILabel *)arg1 ;
-(void)setViewTableHeader:(UIView *)arg1 ;
-(void)setLabelTitleLandscape:(UILabel *)arg1 ;
-(void)setLabelVersionLandscape:(UILabel *)arg1 ;
-(void)setLabelCopyright:(UILabel *)arg1 ;
-(void)dealloc;
-(id)init;
-(id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(UIView *)footerView;
-(void)setFooterView:(UIView *)arg1 ;
@end

