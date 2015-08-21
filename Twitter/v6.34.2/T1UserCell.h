/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:31 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Twitter/Twitter-Structs.h>
#import <Twitter/TFNTableViewCell.h>
#import <Twitter/TFNSizeThatFitsHelperDelegate.h>
#import <Twitter/TFNTwitterFollowControlDelegate.h>
#import <Twitter/TFNTwitterAuthenticated.h>

@protocol TFNTwitterStatusSocialContext, T1UserCellDelegate;
@class TFNSizeThatFitsHelper, UILabel, UIView, UIImageView, TFNHighlightControl, UILongPressGestureRecognizer, TFNTwitterAccount, TFNTwitterUser, TFNTwitterStatus, TFNTwitterFollowControl, NSString, NSObject, TFNTwitterScribeContext, TFNTwitterAvatarImageView;

@interface T1UserCell : TFNTableViewCell <TFNSizeThatFitsHelperDelegate, TFNTwitterFollowControlDelegate, TFNTwitterAuthenticated> {

	TFNSizeThatFitsHelper* _layoutHelper;
	UILabel* _userNameLabel;
	UILabel* _fullNameLabel;
	UILabel* _followsYouLabel;
	UIView* _followsYouBackgroundView;
	UILabel* _bioLabel;
	UIImageView* _socialBadgeImageView;
	UILabel* _socialTextLabel;
	UIImageView* _verifiedBadgeImageView;
	UIImageView* _bottomBadgeImageView;
	UIImageView* _muteBadgeImageView;
	UILabel* _bottomTextLabel;
	TFNHighlightControl* _userInfoButton;
	UILongPressGestureRecognizer* _longPressRecognizer;
	BOOL _userFollowControlCheckUserFlags;
	BOOL _showBio;
	BOOL _showFollowsYou;
	BOOL _showMuteBadge;
	BOOL _showSocialBadge;
	BOOL _avatarSelectable;
	BOOL _userInfoSelectable;
	BOOL _expanded;
	TFNTwitterAccount* _account;
	TFNTwitterUser* _user;
	TFNTwitterStatus* _status;
	long long _userCellStyle;
	long long _userCellColorScheme;
	long long _userFollowControlType;
	long long _userFollowControlVariant;
	TFNTwitterFollowControl* _followControl;
	NSString* _socialText;
	NSObject*<TFNTwitterStatusSocialContext> _socialContext;
	TFNTwitterScribeContext* _scribeContext;
	/*^block*/id _avatarTapBlock;
	/*^block*/id _avatarLongPressBlock;
	/*^block*/id _userTapBlock;
	/*^block*/id _userLongPressBlock;
	/*^block*/id _followRequestResponseBlock;
	/*^block*/id _listMembershipRemoveResponseBlock;
	id<T1UserCellDelegate> _delegate;
	TFNTwitterAvatarImageView* _avatarView;
	CGSize _avatarSize;

}

@property (nonatomic,retain) TFNTwitterUser * user;                                               //@synthesize user=_user - In the implementation block
@property (nonatomic,retain) TFNTwitterStatus * status;                                           //@synthesize status=_status - In the implementation block
@property (assign,nonatomic) long long userCellStyle;                                             //@synthesize userCellStyle=_userCellStyle - In the implementation block
@property (assign,nonatomic) long long userCellColorScheme;                                       //@synthesize userCellColorScheme=_userCellColorScheme - In the implementation block
@property (assign,nonatomic) long long userFollowControlType;                                     //@synthesize userFollowControlType=_userFollowControlType - In the implementation block
@property (assign,nonatomic) long long userFollowControlVariant;                                  //@synthesize userFollowControlVariant=_userFollowControlVariant - In the implementation block
@property (nonatomic,retain) TFNTwitterFollowControl * followControl;                             //@synthesize followControl=_followControl - In the implementation block
@property (assign,nonatomic) BOOL userFollowControlCheckUserFlags;                                //@synthesize userFollowControlCheckUserFlags=_userFollowControlCheckUserFlags - In the implementation block
@property (assign,nonatomic) BOOL showBio;                                                        //@synthesize showBio=_showBio - In the implementation block
@property (assign,nonatomic) BOOL showFollowsYou;                                                 //@synthesize showFollowsYou=_showFollowsYou - In the implementation block
@property (assign,nonatomic) BOOL showMuteBadge;                                                  //@synthesize showMuteBadge=_showMuteBadge - In the implementation block
@property (assign,nonatomic) BOOL showSocialBadge;                                                //@synthesize showSocialBadge=_showSocialBadge - In the implementation block
@property (nonatomic,copy) NSString * socialText;                                                 //@synthesize socialText=_socialText - In the implementation block
@property (nonatomic,retain) NSObject*<TFNTwitterStatusSocialContext> socialContext;              //@synthesize socialContext=_socialContext - In the implementation block
@property (nonatomic,retain) TFNTwitterScribeContext * scribeContext;                             //@synthesize scribeContext=_scribeContext - In the implementation block
@property (nonatomic,copy) id avatarTapBlock;                                                     //@synthesize avatarTapBlock=_avatarTapBlock - In the implementation block
@property (nonatomic,copy) id avatarLongPressBlock;                                               //@synthesize avatarLongPressBlock=_avatarLongPressBlock - In the implementation block
@property (nonatomic,copy) id userTapBlock;                                                       //@synthesize userTapBlock=_userTapBlock - In the implementation block
@property (nonatomic,copy) id userLongPressBlock;                                                 //@synthesize userLongPressBlock=_userLongPressBlock - In the implementation block
@property (nonatomic,copy) id followRequestResponseBlock;                                         //@synthesize followRequestResponseBlock=_followRequestResponseBlock - In the implementation block
@property (nonatomic,copy) id listMembershipRemoveResponseBlock;                                  //@synthesize listMembershipRemoveResponseBlock=_listMembershipRemoveResponseBlock - In the implementation block
@property (assign,getter=isAvatarSelectable,nonatomic) BOOL avatarSelectable;                     //@synthesize avatarSelectable=_avatarSelectable - In the implementation block
@property (assign,getter=isUserInfoSelectable,nonatomic) BOOL userInfoSelectable;                 //@synthesize userInfoSelectable=_userInfoSelectable - In the implementation block
@property (assign,nonatomic) BOOL expanded;                                                       //@synthesize expanded=_expanded - In the implementation block
@property (assign,nonatomic) CGSize avatarSize;                                                   //@synthesize avatarSize=_avatarSize - In the implementation block
@property (assign,nonatomic,__weak) id<T1UserCellDelegate> delegate;                              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) TFNTwitterAvatarImageView * avatarView;                            //@synthesize avatarView=_avatarView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) TFNTwitterAccount * account;                                         //@synthesize account=_account - In the implementation block
+(CGSize)legacyDefaultAvatarSizeForStyle:(long long)arg1 showBio:(BOOL)arg2 ;
+(double)legacyHeightForUser:(id)arg1 forStatus:(id)arg2 account:(id)arg3 cellStyle:(long long)arg4 followControlType:(long long)arg5 followControlVariant:(long long)arg6 avatarSize:(CGSize)arg7 showBio:(BOOL)arg8 tableWidth:(double)arg9 contentPadding:(UIEdgeInsets)arg10 expanded:(BOOL)arg11 socialText:(id)arg12 ;
+(CGSize)defaultAvatarSizeForStyle:(long long)arg1 showBio:(BOOL)arg2 layoutMetrics:(id)arg3 ;
+(double)heightForUser:(id)arg1 forStatus:(id)arg2 account:(id)arg3 cellStyle:(long long)arg4 followControlType:(long long)arg5 followControlVariant:(long long)arg6 avatarSize:(CGSize)arg7 showBio:(BOOL)arg8 expanded:(BOOL)arg9 socialText:(id)arg10 layoutMetrics:(id)arg11 ;
+(id)_socialTextFontForCellStyle:(long long)arg1 expanded:(BOOL)arg2 ;
+(void)_getFullNameRect:(CGRect*)arg1 usernameRect:(CGRect*)arg2 forUser:(id)arg3 forStatus:(id)arg4 cellStyle:(long long)arg5 followControlType:(long long)arg6 followControlVariant:(long long)arg7 avatarSize:(CGSize)arg8 showBio:(BOOL)arg9 expanded:(BOOL)arg10 contentPadding:(UIEdgeInsets)arg11 contentWidth:(double)arg12 account:(id)arg13 layoutMetrics:(id)arg14 ;
+(id)_fullNameFontForCellStyle:(long long)arg1 expanded:(BOOL)arg2 ;
+(id)_usernameFontForCellStyle:(long long)arg1 expanded:(BOOL)arg2 ;
+(double)estimatedHeightForUser:(id)arg1 cellStyle:(long long)arg2 avatarSize:(CGSize)arg3 showBio:(BOOL)arg4 expanded:(BOOL)arg5 socialText:(id)arg6 layoutMetrics:(id)arg7 ;
-(id)avatarLongPressBlock;
-(id)avatarTapBlock;
-(TFNTwitterScribeContext *)scribeContext;
-(void)setAvatarTapBlock:(id)arg1 ;
-(void)setAvatarLongPressBlock:(id)arg1 ;
-(id)calculatedLayoutMetrics;
-(void)setSocialText:(NSString *)arg1 ;
-(CGSize)avatarSize;
-(void)setAvatarSize:(CGSize)arg1 ;
-(void)setShowBio:(BOOL)arg1 ;
-(void)setUserCellStyle:(long long)arg1 ;
-(void)setUserFollowControlType:(long long)arg1 ;
-(void)setUserFollowControlVariant:(long long)arg1 ;
-(void)setAvatarSelectable:(BOOL)arg1 ;
-(void)setScribeContext:(TFNTwitterScribeContext *)arg1 ;
-(void)setShowMuteBadge:(BOOL)arg1 ;
-(TFNTwitterAvatarImageView *)avatarView;
-(TFNTwitterFollowControl *)followControl;
-(void)_removeObservers;
-(void)_legacyLayoutSubviews;
-(void)_userDidUpdate:(id)arg1 ;
-(NSObject*<TFNTwitterStatusSocialContext>)socialContext;
-(void)setSocialContext:(NSObject*<TFNTwitterStatusSocialContext>)arg1 ;
-(NSString *)socialText;
-(long long)userFollowControlType;
-(long long)userFollowControlVariant;
-(BOOL)showMuteBadge;
-(long long)userCellStyle;
-(BOOL)showBio;
-(void)setUserInfoSelectable:(BOOL)arg1 ;
-(void)setUserTapBlock:(id)arg1 ;
-(void)setUserLongPressBlock:(id)arg1 ;
-(void)setFollowRequestResponseBlock:(id)arg1 ;
-(long long)userCellColorScheme;
-(void)setUserCellColorScheme:(long long)arg1 ;
-(BOOL)showFollowsYou;
-(void)setShowFollowsYou:(BOOL)arg1 ;
-(void)twitterFollowControlDidPerformAction:(long long)arg1 success:(BOOL)arg2 error:(id)arg3 ;
-(void)followControlNeedsLayout:(id)arg1 ;
-(BOOL)followControl:(id)arg1 isUserChecked:(id)arg2 ;
-(void)setFollowControl:(TFNTwitterFollowControl *)arg1 ;
-(void)_avatarTapAction;
-(void)avatarLongPressAction;
-(void)_initAccordingToCellStyle;
-(void)_userMuteDidUpdate:(id)arg1 ;
-(void)_followRequestResponseAction:(BOOL)arg1 error:(id)arg2 ;
-(void)_listMembershipRemoveResponseAction:(BOOL)arg1 error:(id)arg2 ;
-(void)_updateMuteBadge;
-(double)_layoutTopLine:(CGRect)arg1 textY:(double)arg2 layoutMetrics:(id)arg3 ;
-(void)_layoutFollowControlWithContentRect:(CGRect)arg1 ;
-(void)_layoutMuteBadgeWithContentRect:(CGRect)arg1 ;
-(void)_layoutBottomLine:(CGRect)arg1 xOrigin:(double)arg2 textY:(double)arg3 ;
-(void)_updateSubviewAccessibility;
-(void)_updateSocialBadge;
-(void)sizeThatFitsHelper:(id)arg1 layoutSubviewsForView:(id)arg2 atWidth:(double)arg3 ;
-(void)setUserFollowControlCheckUserFlags:(BOOL)arg1 ;
-(BOOL)userFollowControlCheckUserFlags;
-(BOOL)showSocialBadge;
-(void)setShowSocialBadge:(BOOL)arg1 ;
-(id)userTapBlock;
-(id)userLongPressBlock;
-(id)followRequestResponseBlock;
-(id)listMembershipRemoveResponseBlock;
-(void)setListMembershipRemoveResponseBlock:(id)arg1 ;
-(BOOL)isAvatarSelectable;
-(BOOL)isUserInfoSelectable;
-(void)dealloc;
-(void)setDelegate:(id<T1UserCellDelegate>)arg1 ;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<T1UserCellDelegate>)delegate;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(id)accessibilityLabel;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_update;
-(void)setExpanded:(BOOL)arg1 ;
-(BOOL)expanded;
-(CGPoint)accessibilityActivationPoint;
-(void)cleanup;
-(TFNTwitterStatus *)status;
-(void)setStatus:(TFNTwitterStatus *)arg1 ;
-(TFNTwitterAccount *)account;
-(void)setAccount:(TFNTwitterAccount *)arg1 ;
-(TFNTwitterUser *)user;
-(void)setUser:(TFNTwitterUser *)arg1 ;
-(void)_layoutSubviews;
-(void)_longPressAction:(id)arg1 ;
@end

