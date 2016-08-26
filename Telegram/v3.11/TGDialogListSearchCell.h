/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:53:36 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D5AA3D7F-F68B-43D8-8CC1-85DAFE886350/Telegram.app/Telegram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Telegram/Telegram-Structs.h>
#import <UIKit/UITableViewCell.h>

@protocol TGDialogListCellAssetsSource;
@class CALayer, NSString, NSAttributedString, TGLetteredAvatarView, UILabel, UIImageView, TGLabel;

@interface TGDialogListSearchCell : UITableViewCell {

	CALayer* _separatorLayer;
	int _boldMode;
	BOOL _isChat;
	BOOL _isEncrypted;
	BOOL _isVerified;
	int _encryptedUserId;
	int _unreadCount;
	id<TGDialogListCellAssetsSource> _assetsSource;
	long long _conversationId;
	NSString* _titleTextFirst;
	NSString* _titleTextSecond;
	NSAttributedString* _attributedSubtitleText;
	NSString* _avatarUrl;
	TGLetteredAvatarView* _avatarView;
	UILabel* _titleLabelFirst;
	UILabel* _titleLabelSecond;
	UILabel* _subtitleLabel;
	UIImageView* _unreadCountBackgrond;
	TGLabel* _unreadCountLabel;
	UIImageView* _verifiedIcon;

}

@property (nonatomic,retain) TGLetteredAvatarView * avatarView;                          //@synthesize avatarView=_avatarView - In the implementation block
@property (nonatomic,retain) UILabel * titleLabelFirst;                                  //@synthesize titleLabelFirst=_titleLabelFirst - In the implementation block
@property (nonatomic,retain) UILabel * titleLabelSecond;                                 //@synthesize titleLabelSecond=_titleLabelSecond - In the implementation block
@property (nonatomic,retain) UILabel * subtitleLabel;                                    //@synthesize subtitleLabel=_subtitleLabel - In the implementation block
@property (nonatomic,retain) UIImageView * unreadCountBackgrond;                         //@synthesize unreadCountBackgrond=_unreadCountBackgrond - In the implementation block
@property (nonatomic,retain) TGLabel * unreadCountLabel;                                 //@synthesize unreadCountLabel=_unreadCountLabel - In the implementation block
@property (nonatomic,retain) UIImageView * verifiedIcon;                                 //@synthesize verifiedIcon=_verifiedIcon - In the implementation block
@property (nonatomic,retain) id<TGDialogListCellAssetsSource> assetsSource;              //@synthesize assetsSource=_assetsSource - In the implementation block
@property (assign,nonatomic) long long conversationId;                                   //@synthesize conversationId=_conversationId - In the implementation block
@property (nonatomic,retain) NSString * titleTextFirst;                                  //@synthesize titleTextFirst=_titleTextFirst - In the implementation block
@property (nonatomic,retain) NSString * titleTextSecond;                                 //@synthesize titleTextSecond=_titleTextSecond - In the implementation block
@property (nonatomic,retain) NSAttributedString * attributedSubtitleText;                //@synthesize attributedSubtitleText=_attributedSubtitleText - In the implementation block
@property (nonatomic,retain) NSString * avatarUrl;                                       //@synthesize avatarUrl=_avatarUrl - In the implementation block
@property (assign,nonatomic) BOOL isChat;                                                //@synthesize isChat=_isChat - In the implementation block
@property (assign,nonatomic) BOOL isEncrypted;                                           //@synthesize isEncrypted=_isEncrypted - In the implementation block
@property (assign,nonatomic) BOOL isVerified;                                            //@synthesize isVerified=_isVerified - In the implementation block
@property (assign,nonatomic) int encryptedUserId;                                        //@synthesize encryptedUserId=_encryptedUserId - In the implementation block
@property (assign,nonatomic) int unreadCount;                                            //@synthesize unreadCount=_unreadCount - In the implementation block
-(BOOL)isChat;
-(void)adjustOrdering;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 assetsSource:(id)arg3 ;
-(void)setBoldMode:(int)arg1 ;
-(void)resetView:(BOOL)arg1 ;
-(id)avatarSnapshotView;
-(CGRect)avatarFrame;
-(CGRect)textContentFrame;
-(id<TGDialogListCellAssetsSource>)assetsSource;
-(void)setAssetsSource:(id<TGDialogListCellAssetsSource>)arg1 ;
-(NSString *)titleTextFirst;
-(void)setTitleTextFirst:(NSString *)arg1 ;
-(NSString *)titleTextSecond;
-(void)setTitleTextSecond:(NSString *)arg1 ;
-(NSString *)avatarUrl;
-(void)setAvatarUrl:(NSString *)arg1 ;
-(void)setIsChat:(BOOL)arg1 ;
-(void)setIsEncrypted:(BOOL)arg1 ;
-(void)setIsVerified:(BOOL)arg1 ;
-(int)encryptedUserId;
-(void)setEncryptedUserId:(int)arg1 ;
-(UILabel *)titleLabelFirst;
-(void)setTitleLabelFirst:(UILabel *)arg1 ;
-(UILabel *)titleLabelSecond;
-(void)setTitleLabelSecond:(UILabel *)arg1 ;
-(UIImageView *)unreadCountBackgrond;
-(void)setUnreadCountBackgrond:(UIImageView *)arg1 ;
-(TGLabel *)unreadCountLabel;
-(void)setUnreadCountLabel:(TGLabel *)arg1 ;
-(UIImageView *)verifiedIcon;
-(void)setVerifiedIcon:(UIImageView *)arg1 ;
-(void)layoutSubviews;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2 ;
-(UILabel *)subtitleLabel;
-(void)setSubtitleLabel:(UILabel *)arg1 ;
-(void)setUnreadCount:(int)arg1 ;
-(long long)conversationId;
-(void)setConversationId:(long long)arg1 ;
-(int)unreadCount;
-(TGLetteredAvatarView *)avatarView;
-(void)setAvatarView:(TGLetteredAvatarView *)arg1 ;
-(void)setAttributedSubtitleText:(NSAttributedString *)arg1 ;
-(NSAttributedString *)attributedSubtitleText;
-(BOOL)isVerified;
-(BOOL)isEncrypted;
@end
