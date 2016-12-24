/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:46:33 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/D20B482D-7A4B-420E-BEFA-D4B2B5C94752/Telegram.app/Telegram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Telegram/Telegram-Structs.h>
#import <UIKit/UIView.h>

@class NSString, NSArray, NSDictionary, UIView, CALayer, TGLetteredAvatarView, UILabel, TGNotificationMessageLabel, UIButton, NSMutableAttributedString;

@interface TGMessageNotificationView : UIView {

	BOOL _isLocationNotification;
	int _authorUid;
	NSString* _messageText;
	NSArray* _messageAttachments;
	NSDictionary* _users;
	NSString* _titleText;
	NSString* _firstName;
	NSString* _lastName;
	NSString* _avatarUrl;
	long long _conversationId;
	UIView* _backgroundView;
	CALayer* _shadowLayer;
	TGLetteredAvatarView* _avatarView;
	UILabel* _titleLabel;
	TGNotificationMessageLabel* _messageLabel;
	UIButton* _dismissButton;
	NSMutableAttributedString* _attributedText;

}

@property (nonatomic,retain) UIView * backgroundView;                                 //@synthesize backgroundView=_backgroundView - In the implementation block
@property (nonatomic,retain) CALayer * shadowLayer;                                   //@synthesize shadowLayer=_shadowLayer - In the implementation block
@property (nonatomic,retain) TGLetteredAvatarView * avatarView;                       //@synthesize avatarView=_avatarView - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                                    //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) TGNotificationMessageLabel * messageLabel;               //@synthesize messageLabel=_messageLabel - In the implementation block
@property (nonatomic,retain) UIButton * dismissButton;                                //@synthesize dismissButton=_dismissButton - In the implementation block
@property (nonatomic,retain) NSMutableAttributedString * attributedText;              //@synthesize attributedText=_attributedText - In the implementation block
@property (nonatomic,retain) NSString * messageText;                                  //@synthesize messageText=_messageText - In the implementation block
@property (nonatomic,retain) NSArray * messageAttachments;                            //@synthesize messageAttachments=_messageAttachments - In the implementation block
@property (nonatomic,retain) NSDictionary * users;                                    //@synthesize users=_users - In the implementation block
@property (nonatomic,retain) NSString * titleText;                                    //@synthesize titleText=_titleText - In the implementation block
@property (nonatomic,retain) NSString * firstName;                                    //@synthesize firstName=_firstName - In the implementation block
@property (nonatomic,retain) NSString * lastName;                                     //@synthesize lastName=_lastName - In the implementation block
@property (nonatomic,retain) NSString * avatarUrl;                                    //@synthesize avatarUrl=_avatarUrl - In the implementation block
@property (assign,nonatomic) int authorUid;                                           //@synthesize authorUid=_authorUid - In the implementation block
@property (assign,nonatomic) long long conversationId;                                //@synthesize conversationId=_conversationId - In the implementation block
@property (assign,nonatomic) BOOL isLocationNotification;                             //@synthesize isLocationNotification=_isLocationNotification - In the implementation block
-(NSString *)avatarUrl;
-(void)setAvatarUrl:(NSString *)arg1 ;
-(void)dismissButtonPressed;
-(void)setMessageAttachments:(NSArray *)arg1 ;
-(void)searchParentAndDismiss:(id)arg1 ;
-(void)searchParentAndTap:(id)arg1 ;
-(NSArray *)messageAttachments;
-(int)authorUid;
-(void)setAuthorUid:(int)arg1 ;
-(BOOL)isLocationNotification;
-(void)setIsLocationNotification:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setAttributedText:(NSMutableAttributedString *)arg1 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(UILabel *)titleLabel;
-(NSMutableAttributedString *)attributedText;
-(void)setBackgroundView:(UIView *)arg1 ;
-(UIView *)backgroundView;
-(void)setTitleText:(NSString *)arg1 ;
-(void)resetView;
-(void)setMessageText:(NSString *)arg1 ;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(NSString *)messageText;
-(void)setDismissButton:(UIButton *)arg1 ;
-(UIButton *)dismissButton;
-(NSString *)titleText;
-(long long)conversationId;
-(void)setConversationId:(long long)arg1 ;
-(TGNotificationMessageLabel *)messageLabel;
-(void)setFirstName:(NSString *)arg1 ;
-(void)setLastName:(NSString *)arg1 ;
-(NSString *)firstName;
-(NSString *)lastName;
-(TGLetteredAvatarView *)avatarView;
-(void)tapGestureRecognized:(id)arg1 ;
-(void)setAvatarView:(TGLetteredAvatarView *)arg1 ;
-(void)setShadowLayer:(CALayer *)arg1 ;
-(CALayer *)shadowLayer;
-(NSDictionary *)users;
-(void)setUsers:(NSDictionary *)arg1 ;
-(void)setMessageLabel:(TGNotificationMessageLabel *)arg1 ;
@end
