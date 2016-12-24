/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:38:00 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/B4EAB98E-4B8F-47BB-A92B-B0524BEFEA49/Slack.app/Slack
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Slack/Slack-Structs.h>
#import <UIKit/UITableViewCell.h>
#import <Slack/SLKChannelMembersProfileImageViewsDelegate.h>
#import <Slack/TTTAttributedLabelDelegate.h>

@protocol _TtP5Slack25SLKChannelGenericsDisplay_;
@class TTTAttributedLabel, UIView, UIButton, SLKChannelMembersProfileImageViews, NSManagedObject, SLKDependencies, NSString;

@interface SLKPaneFillingCell : UITableViewCell <SLKChannelMembersProfileImageViewsDelegate, TTTAttributedLabelDelegate> {

	TTTAttributedLabel* _attributedLabel;
	UIView* _separatorLine;
	UIButton* _learnMoreButton;
	UIButton* _invitePeopleButton;
	UIButton* _editProfileButton;
	UIButton* _addAppsButton;
	SLKChannelMembersProfileImageViews* _profileImagesView;
	NSManagedObject*<_TtP5Slack25SLKChannelGenericsDisplay_> _genericChannel;
	SLKDependencies* _dependencies;

}

@property (nonatomic,retain) TTTAttributedLabel * attributedLabel;                                                 //@synthesize attributedLabel=_attributedLabel - In the implementation block
@property (nonatomic,retain) UIView * separatorLine;                                                               //@synthesize separatorLine=_separatorLine - In the implementation block
@property (nonatomic,retain) UIButton * learnMoreButton;                                                           //@synthesize learnMoreButton=_learnMoreButton - In the implementation block
@property (nonatomic,retain) UIButton * invitePeopleButton;                                                        //@synthesize invitePeopleButton=_invitePeopleButton - In the implementation block
@property (nonatomic,retain) UIButton * editProfileButton;                                                         //@synthesize editProfileButton=_editProfileButton - In the implementation block
@property (nonatomic,retain) UIButton * addAppsButton;                                                             //@synthesize addAppsButton=_addAppsButton - In the implementation block
@property (nonatomic,retain) SLKChannelMembersProfileImageViews * profileImagesView;                               //@synthesize profileImagesView=_profileImagesView - In the implementation block
@property (nonatomic,retain) NSManagedObject*<_TtP5Slack25SLKChannelGenericsDisplay_> genericChannel;              //@synthesize genericChannel=_genericChannel - In the implementation block
@property (assign,nonatomic,__weak) SLKDependencies * dependencies;                                                //@synthesize dependencies=_dependencies - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(double)topMarginThatFits:(CGSize)arg1 withGenericChannel:(id)arg2 dependencies:(id)arg3 ;
+(id)paneFillingForGenericChannel:(id)arg1 dependencies:(id)arg2 ;
+(double)heightThatFits:(CGSize)arg1 withGenericChannel:(id)arg2 dependencies:(id)arg3 ;
+(CGSize)sizeThatFits:(CGSize)arg1 withGenericChannel:(id)arg2 dependencies:(id)arg3 ;
+(CGSize)parentSize:(CGSize)arg1 thatFitsGenericChannel:(id)arg2 ;
+(UIEdgeInsets)layoutMargins;
-(NSManagedObject*<_TtP5Slack25SLKChannelGenericsDisplay_>)genericChannel;
-(void)setupPresentationNavController:(id)arg1 ;
-(id)channelTitle;
-(void)attributedLabel:(id)arg1 didSelectLinkWithURL:(id)arg2 ;
-(id)initWithGenericChannel:(id)arg1 dependencies:(id)arg2 ;
-(id)channelShares;
-(void)setGenericChannel:(NSManagedObject*<_TtP5Slack25SLKChannelGenericsDisplay_>)arg1 ;
-(void)channelMembersProfileImageViews:(id)arg1 didTapUserProfileImage:(id)arg2 ;
-(void)learnMoreTapped:(id)arg1 ;
-(void)configureSubviews;
-(id)channelDescriptionBoldFont;
-(void)invitePeopleTapped:(id)arg1 ;
-(void)editProfileTapped:(id)arg1 ;
-(void)addAppsTapped:(id)arg1 ;
-(id)paneBodyFont;
-(id)paneSubjectFont;
-(id)mpdmDescription;
-(id)dmDescription;
-(id)orgDescription;
-(id)channelDescription;
-(SLKChannelMembersProfileImageViews *)profileImagesView;
-(TTTAttributedLabel *)attributedLabel;
-(UIButton *)editProfileButton;
-(UIButton *)invitePeopleButton;
-(UIButton *)addAppsButton;
-(id)localizedTextForPane;
-(void)addLinkForUser:(id)arg1 ;
-(void)addLinkForTeams;
-(BOOL)requieresComplianceExports;
-(id)escapeStringForRegexExpression:(id)arg1 ;
-(void)addLinkToText:(id)arg1 forSubstring:(id)arg2 withURL:(id)arg3 andColor:(id)arg4 ;
-(id)teamCountString;
-(id)slackbotDescription;
-(id)nameForNameTaggingUser:(id)arg1 ;
-(id)nameForUser:(id)arg1 ;
-(id)paneTitleFont;
-(id)paneSubtitleAttributes;
-(id)complianceDateString;
-(id)channelDescriptionColor;
-(id)channelDescriptionFont;
-(id)namesForNameTaggingMPDM:(id)arg1 ;
-(id)namesForMPDM:(id)arg1 ;
-(id)channelDescriptionAttributes;
-(id)purposeForGenericChannel;
-(id)channelWelcomeFont;
-(id)channelTitleFont;
-(id)paneSubtitleFont;
-(id)paneSubtitleColor;
-(double)bodyFontSize;
-(void)showSharedTeams;
-(void)addSemiBoldToUser:(id)arg1 attributedString:(id)arg2 ;
-(void)addLinkForUsers:(id)arg1 ;
-(void)setAttributedLabel:(TTTAttributedLabel *)arg1 ;
-(void)setInvitePeopleButton:(UIButton *)arg1 ;
-(void)setEditProfileButton:(UIButton *)arg1 ;
-(void)setAddAppsButton:(UIButton *)arg1 ;
-(void)setProfileImagesView:(SLKChannelMembersProfileImageViews *)arg1 ;
-(void)layoutSubviews;
-(void)layoutIfNeeded;
-(void)commonInit;
-(void)prepareForDisplay;
-(UIView *)separatorLine;
-(void)setSeparatorLine:(UIView *)arg1 ;
-(UIButton *)learnMoreButton;
-(SLKDependencies *)dependencies;
-(void)setDependencies:(SLKDependencies *)arg1 ;
-(void)setLearnMoreButton:(UIButton *)arg1 ;
@end
