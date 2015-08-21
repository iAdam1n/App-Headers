/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:26 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Twitter/Twitter-Structs.h>
#import <Twitter/T1DirectMessageAbstractConversationEntryCell.h>
#import <Twitter/TFNAttributedTextViewDelegate.h>

@class T1DirectMessageAvatarImageView, UIView, UIButton, TFNAttributedTextView, UIImageView, UIActivityIndicatorView, TFNTappableImageView, UILabel, T1QuotedStatusView, TFNButton, UILongPressGestureRecognizer, NSArray, UIImage, T1DirectMessageEntryDisplayModel, NSString;

@interface T1DirectMessageEntryCell : T1DirectMessageAbstractConversationEntryCell <TFNAttributedTextViewDelegate> {

	BOOL _needsInitialization;
	BOOL _isInitialLayout;
	T1DirectMessageAvatarImageView* _avatarImageView;
	UIView* _bubbleView;
	UIButton* _errorButton;
	TFNAttributedTextView* _messageTextView;
	UIImageView* _maskView;
	UIActivityIndicatorView* _mediaActivityView;
	UIView* _mediaBorderView;
	TFNTappableImageView* _mediaPreviewView;
	UILabel* _messageStatusLabel;
	UILabel* _timestampLabel;
	T1QuotedStatusView* _statusView;
	TFNButton* _markAsSpamButton;
	TFNButton* _unmarkAsSpamButton;
	UILongPressGestureRecognizer* _longPressGestureRecognizer;
	NSArray* _accessibilityElements;
	TFNAttributedTextView* _sensitiveMediaInterstitialTextView;
	TFNButton* _alwaysShowSensitiveMediaButton;

}

@property (assign,nonatomic,__weak) id<T1DirectMessageEntryCellDelegate> delegate; 
@property (nonatomic,readonly) UIImage * previewImage; 
@property (nonatomic,retain) T1DirectMessageEntryDisplayModel * entryDisplayModel; 
@property (nonatomic,retain) T1DirectMessageAvatarImageView * avatarImageView;                        //@synthesize avatarImageView=_avatarImageView - In the implementation block
@property (assign,nonatomic) BOOL needsInitialization;                                                //@synthesize needsInitialization=_needsInitialization - In the implementation block
@property (assign,nonatomic) BOOL isInitialLayout;                                                    //@synthesize isInitialLayout=_isInitialLayout - In the implementation block
@property (nonatomic,retain) UIView * bubbleView;                                                     //@synthesize bubbleView=_bubbleView - In the implementation block
@property (nonatomic,retain) UIButton * errorButton;                                                  //@synthesize errorButton=_errorButton - In the implementation block
@property (nonatomic,retain) TFNAttributedTextView * messageTextView;                                 //@synthesize messageTextView=_messageTextView - In the implementation block
@property (nonatomic,retain) UIImageView * maskView;                                                  //@synthesize maskView=_maskView - In the implementation block
@property (nonatomic,retain) UIActivityIndicatorView * mediaActivityView;                             //@synthesize mediaActivityView=_mediaActivityView - In the implementation block
@property (nonatomic,retain) UIView * mediaBorderView;                                                //@synthesize mediaBorderView=_mediaBorderView - In the implementation block
@property (nonatomic,retain) TFNTappableImageView * mediaPreviewView;                                 //@synthesize mediaPreviewView=_mediaPreviewView - In the implementation block
@property (nonatomic,retain) UILabel * messageStatusLabel;                                            //@synthesize messageStatusLabel=_messageStatusLabel - In the implementation block
@property (nonatomic,retain) UILabel * timestampLabel;                                                //@synthesize timestampLabel=_timestampLabel - In the implementation block
@property (nonatomic,retain) T1QuotedStatusView * statusView;                                         //@synthesize statusView=_statusView - In the implementation block
@property (nonatomic,retain) TFNButton * markAsSpamButton;                                            //@synthesize markAsSpamButton=_markAsSpamButton - In the implementation block
@property (nonatomic,retain) TFNButton * unmarkAsSpamButton;                                          //@synthesize unmarkAsSpamButton=_unmarkAsSpamButton - In the implementation block
@property (nonatomic,retain) UILongPressGestureRecognizer * longPressGestureRecognizer;               //@synthesize longPressGestureRecognizer=_longPressGestureRecognizer - In the implementation block
@property (nonatomic,copy) NSArray * accessibilityElements;                                           //@synthesize accessibilityElements=_accessibilityElements - In the implementation block
@property (nonatomic,retain) TFNAttributedTextView * sensitiveMediaInterstitialTextView;              //@synthesize sensitiveMediaInterstitialTextView=_sensitiveMediaInterstitialTextView - In the implementation block
@property (nonatomic,retain) TFNButton * alwaysShowSensitiveMediaButton;                              //@synthesize alwaysShowSensitiveMediaButton=_alwaysShowSensitiveMediaButton - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_timestampFont;
+(id)_messageStatusFont;
-(void)attributedTextView:(id)arg1 didTapRange:(id)arg2 rect:(CGRect)arg3 ;
-(void)attributedTextView:(id)arg1 didLongPressRange:(id)arg2 rect:(CGRect)arg3 ;
-(void)setTimestampLabel:(UILabel *)arg1 ;
-(UILabel *)timestampLabel;
-(T1DirectMessageAvatarImageView *)avatarImageView;
-(void)setAvatarImageView:(T1DirectMessageAvatarImageView *)arg1 ;
-(void)setNeedsInitialization:(BOOL)arg1 ;
-(void)setIsInitialLayout:(BOOL)arg1 ;
-(void)_mediaPreviewImageDidLoad:(id)arg1 ;
-(void)_mediaPreviewImageDidFailLoading:(id)arg1 ;
-(TFNButton *)unmarkAsSpamButton;
-(void)_didTapUnmarkAsSpam:(id)arg1 ;
-(TFNButton *)markAsSpamButton;
-(void)_didTapMarkAsSpam:(id)arg1 ;
-(void)_layoutCell;
-(void)_layoutChatBubble;
-(BOOL)isInitialLayout;
-(UILabel *)messageStatusLabel;
-(void)_avatarImageViewTapped:(id)arg1 ;
-(void)_addUserToAddressBook:(id)arg1 ;
-(void)_retrySend:(id)arg1 ;
-(void)_mediaPreviewViewTapped:(id)arg1 ;
-(void)_mediaPreviewViewLongPressed:(id)arg1 ;
-(TFNTappableImageView *)mediaPreviewView;
-(void)_longPressAction:(long long)arg1 selection:(id)arg2 ;
-(void)_initializeSubviews;
-(void)setEntryDisplayModel:(T1DirectMessageEntryDisplayModel *)arg1 ;
-(UIButton *)errorButton;
-(TFNAttributedTextView *)messageTextView;
-(UIView *)mediaBorderView;
-(UIActivityIndicatorView *)mediaActivityView;
-(void)_didLongPressCell:(id)arg1 ;
-(TFNButton *)alwaysShowSensitiveMediaButton;
-(void)_layoutSpamFilteringButtons;
-(void)_layoutSensitiveMediaButton;
-(void)_showMediaPreviewErrorPlaceholder;
-(TFNAttributedTextView *)sensitiveMediaInterstitialTextView;
-(void)setSensitiveMediaInterstitialTextView:(TFNAttributedTextView *)arg1 ;
-(void)setAlwaysShowSensitiveMediaButton:(TFNButton *)arg1 ;
-(id)_createAccessoryButtonWithTitle:(id)arg1 ;
-(void)_didTapAlwaysShowSensitiveMedia:(id)arg1 ;
-(void)setMarkAsSpamButton:(TFNButton *)arg1 ;
-(void)setUnmarkAsSpamButton:(TFNButton *)arg1 ;
-(void)setErrorButton:(UIButton *)arg1 ;
-(void)setMessageTextView:(TFNAttributedTextView *)arg1 ;
-(void)setMediaActivityView:(UIActivityIndicatorView *)arg1 ;
-(void)setMediaBorderView:(UIView *)arg1 ;
-(void)setMediaPreviewView:(TFNTappableImageView *)arg1 ;
-(void)setMessageStatusLabel:(UILabel *)arg1 ;
-(UILongPressGestureRecognizer *)longPressGestureRecognizer;
-(void)setLongPressGestureRecognizer:(UILongPressGestureRecognizer *)arg1 ;
-(UIImage *)previewImage;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)setMaskView:(UIImageView *)arg1 ;
-(UIImageView *)maskView;
-(void)prepareForReuse;
-(BOOL)isAccessibilityElement;
-(BOOL)accessibilityActivate;
-(long long)accessibilityElementCount;
-(id)accessibilityElementAtIndex:(long long)arg1 ;
-(long long)indexOfAccessibilityElement:(id)arg1 ;
-(NSArray *)accessibilityElements;
-(void)setAccessibilityElements:(NSArray *)arg1 ;
-(UIView *)bubbleView;
-(void)setBubbleView:(UIView *)arg1 ;
-(void)setStatusView:(T1QuotedStatusView *)arg1 ;
-(T1QuotedStatusView *)statusView;
-(void)_updateContent;
-(BOOL)needsInitialization;
@end

