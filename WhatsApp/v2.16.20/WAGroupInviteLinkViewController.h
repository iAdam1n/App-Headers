/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:50:47 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/F01A5503-B253-4A30-B0BC-B7B5406FD725/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WhatsApp/WAViewController.h>
#import <WhatsApp/WAForwardPickerViewControllerDelegate.h>

@class UIImage, NSString, WAWebPageMetadata, WAWebPageReader, UIImageView, UILabel, UIButton, NSArray;

@interface WAGroupInviteLinkViewController : WAViewController <WAForwardPickerViewControllerDelegate> {

	UIImage* _qrCodeImage;
	BOOL _refreshingCode;
	NSString* _jid;
	NSString* _inviteCode;
	NSString* _inviteURL;
	WAWebPageMetadata* _inviteLinkMetadata;
	WAWebPageReader* _webpageReader;
	UIImage* _qrCode;
	UIImageView* _imageViewGroupPicture;
	UILabel* _labelGroupSubject;
	UILabel* _labelInviteURL;
	UILabel* _labelHelperText;
	UIButton* _buttonShareLink;
	UIButton* _buttonCopyLink;
	UIButton* _buttonQRCode;
	UIButton* _buttonRevokeLink;
	UILabel* _labelShareLink;
	UILabel* _labelCopyLink;
	UILabel* _labelQRCode;
	UILabel* _labelRevokeLink;
	NSArray* _separatorHeight;
	NSArray* _buttonSpacing;
	NSArray* _sideMargins;

}

@property (nonatomic,copy) NSString * jid;                                        //@synthesize jid=_jid - In the implementation block
@property (assign,nonatomic) BOOL refreshingCode;                                 //@synthesize refreshingCode=_refreshingCode - In the implementation block
@property (nonatomic,copy) NSString * inviteCode;                                 //@synthesize inviteCode=_inviteCode - In the implementation block
@property (nonatomic,readonly) NSString * inviteURL;                              //@synthesize inviteURL=_inviteURL - In the implementation block
@property (nonatomic,retain) WAWebPageMetadata * inviteLinkMetadata;              //@synthesize inviteLinkMetadata=_inviteLinkMetadata - In the implementation block
@property (nonatomic,retain) WAWebPageReader * webpageReader;                     //@synthesize webpageReader=_webpageReader - In the implementation block
@property (nonatomic,readonly) UIImage * qrCode;                                  //@synthesize qrCode=_qrCode - In the implementation block
@property (nonatomic,retain) UIImageView * imageViewGroupPicture;                 //@synthesize imageViewGroupPicture=_imageViewGroupPicture - In the implementation block
@property (nonatomic,retain) UILabel * labelGroupSubject;                         //@synthesize labelGroupSubject=_labelGroupSubject - In the implementation block
@property (nonatomic,retain) UILabel * labelInviteURL;                            //@synthesize labelInviteURL=_labelInviteURL - In the implementation block
@property (nonatomic,retain) UILabel * labelHelperText;                           //@synthesize labelHelperText=_labelHelperText - In the implementation block
@property (nonatomic,retain) UIButton * buttonShareLink;                          //@synthesize buttonShareLink=_buttonShareLink - In the implementation block
@property (nonatomic,retain) UIButton * buttonCopyLink;                           //@synthesize buttonCopyLink=_buttonCopyLink - In the implementation block
@property (nonatomic,retain) UIButton * buttonQRCode;                             //@synthesize buttonQRCode=_buttonQRCode - In the implementation block
@property (nonatomic,retain) UIButton * buttonRevokeLink;                         //@synthesize buttonRevokeLink=_buttonRevokeLink - In the implementation block
@property (nonatomic,retain) UILabel * labelShareLink;                            //@synthesize labelShareLink=_labelShareLink - In the implementation block
@property (nonatomic,retain) UILabel * labelCopyLink;                             //@synthesize labelCopyLink=_labelCopyLink - In the implementation block
@property (nonatomic,retain) UILabel * labelQRCode;                               //@synthesize labelQRCode=_labelQRCode - In the implementation block
@property (nonatomic,retain) UILabel * labelRevokeLink;                           //@synthesize labelRevokeLink=_labelRevokeLink - In the implementation block
@property (nonatomic,retain) NSArray * separatorHeight;                           //@synthesize separatorHeight=_separatorHeight - In the implementation block
@property (nonatomic,retain) NSArray * buttonSpacing;                             //@synthesize buttonSpacing=_buttonSpacing - In the implementation block
@property (nonatomic,retain) NSArray * sideMargins;                               //@synthesize sideMargins=_sideMargins - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)controllerWithJID:(id)arg1 ;
+(void)initialize;
+(id)title;
-(void)wa_fontSizeDidChange;
-(NSString *)jid;
-(void)setJid:(NSString *)arg1 ;
-(void)reloadFonts;
-(id)confirmationButtonTitleForForwardPicker:(id)arg1 ;
-(id)forwardPicker:(id)arg1 confirmationTextForContactInfo:(id)arg2 ;
-(UIImageView *)imageViewGroupPicture;
-(void)setSeparatorHeight:(NSArray *)arg1 ;
-(UILabel *)labelHelperText;
-(void)setLabelHelperText:(UILabel *)arg1 ;
-(UILabel *)labelGroupSubject;
-(UILabel *)labelShareLink;
-(UILabel *)labelCopyLink;
-(UILabel *)labelQRCode;
-(UILabel *)labelRevokeLink;
-(UILabel *)labelInviteURL;
-(UIButton *)buttonShareLink;
-(UIButton *)buttonCopyLink;
-(UIButton *)buttonQRCode;
-(UIButton *)buttonRevokeLink;
-(BOOL)refreshingCode;
-(void)refreshGroupInviteLink;
-(void)setRefreshingCode:(BOOL)arg1 ;
-(void)handleGroupInviteLinkFetchError:(id)arg1 ;
-(NSString *)inviteURL;
-(void)reallyRevokeLink;
-(WAWebPageReader *)webpageReader;
-(void)setWebpageReader:(WAWebPageReader *)arg1 ;
-(void)setInviteLinkMetadata:(WAWebPageMetadata *)arg1 ;
-(BOOL)prepareQRCode;
-(WAWebPageMetadata *)inviteLinkMetadata;
-(void)copyLinkAction:(id)arg1 ;
-(void)revokeLinkAction:(id)arg1 ;
-(void)qrCodeAction:(id)arg1 ;
-(void)shareLinkAction:(id)arg1 ;
-(UIImage *)qrCode;
-(void)setImageViewGroupPicture:(UIImageView *)arg1 ;
-(void)setLabelGroupSubject:(UILabel *)arg1 ;
-(void)setLabelInviteURL:(UILabel *)arg1 ;
-(void)setButtonShareLink:(UIButton *)arg1 ;
-(void)setButtonCopyLink:(UIButton *)arg1 ;
-(void)setButtonQRCode:(UIButton *)arg1 ;
-(void)setButtonRevokeLink:(UIButton *)arg1 ;
-(void)setLabelShareLink:(UILabel *)arg1 ;
-(void)setLabelCopyLink:(UILabel *)arg1 ;
-(void)setLabelQRCode:(UILabel *)arg1 ;
-(void)setLabelRevokeLink:(UILabel *)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(NSArray *)separatorHeight;
-(NSString *)inviteCode;
-(void)setInviteCode:(NSString *)arg1 ;
-(void)setSideMargins:(NSArray *)arg1 ;
-(NSArray *)sideMargins;
-(NSArray *)buttonSpacing;
-(void)setButtonSpacing:(NSArray *)arg1 ;
@end
