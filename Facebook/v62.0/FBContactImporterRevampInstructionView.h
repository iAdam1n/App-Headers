/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:33 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIScrollView.h>

@class UILabel, UIImageView, FBContactImporterRevampFacePileView, UIActivityIndicatorView, UIView, UIButton, FBRichTextView, FBNetworkImageView, NSString, NSAttributedString, NSArray;

@interface FBContactImporterRevampInstructionView : UIScrollView {

	UILabel* _headerLabel;
	UIImageView* _iconView;
	FBContactImporterRevampFacePileView* _facepileView;
	UIActivityIndicatorView* _spinnerView;
	UIView* _contentView;
	BOOL _showButton;
	BOOL _showFooter;
	BOOL _contentVerticallyCentered;
	BOOL _useDailyDialogue;
	UIButton* _actionButton;
	FBRichTextView* _descriptionTextView;
	FBRichTextView* _footerTextView;
	FBNetworkImageView* _imageView;
	NSString* _title;
	NSAttributedString* _descriptionText;
	FBNetworkImageView* _faviconImageView;
	NSAttributedString* _footerText;
	NSString* _buttonText;
	NSArray* _facepileURLs;
	NSString* _socialContext;
	long long _alignment;
	unsigned long long _showImage;

}

@property (assign,nonatomic) BOOL useDailyDialogue;                              //@synthesize useDailyDialogue=_useDailyDialogue - In the implementation block
@property (nonatomic,retain) UIButton * actionButton;                            //@synthesize actionButton=_actionButton - In the implementation block
@property (nonatomic,retain) FBRichTextView * descriptionTextView;               //@synthesize descriptionTextView=_descriptionTextView - In the implementation block
@property (nonatomic,retain) FBRichTextView * footerTextView;                    //@synthesize footerTextView=_footerTextView - In the implementation block
@property (nonatomic,retain) FBNetworkImageView * imageView;                     //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,copy) NSString * title;                                     //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSAttributedString * descriptionText;                 //@synthesize descriptionText=_descriptionText - In the implementation block
@property (nonatomic,retain) FBNetworkImageView * faviconImageView;              //@synthesize faviconImageView=_faviconImageView - In the implementation block
@property (nonatomic,copy) NSAttributedString * footerText;                      //@synthesize footerText=_footerText - In the implementation block
@property (nonatomic,copy) NSString * buttonText;                                //@synthesize buttonText=_buttonText - In the implementation block
@property (nonatomic,copy) NSArray * facepileURLs;                               //@synthesize facepileURLs=_facepileURLs - In the implementation block
@property (nonatomic,copy) NSString * socialContext;                             //@synthesize socialContext=_socialContext - In the implementation block
@property (assign,nonatomic) long long alignment;                                //@synthesize alignment=_alignment - In the implementation block
@property (assign,nonatomic) unsigned long long showImage;                       //@synthesize showImage=_showImage - In the implementation block
@property (assign,nonatomic) BOOL showButton;                                    //@synthesize showButton=_showButton - In the implementation block
@property (assign,nonatomic) BOOL showFooter;                                    //@synthesize showFooter=_showFooter - In the implementation block
@property (assign,nonatomic) BOOL contentVerticallyCentered;                     //@synthesize contentVerticallyCentered=_contentVerticallyCentered - In the implementation block
-(void)setFacepileURLs:(NSArray *)arg1 ;
-(NSArray *)facepileURLs;
-(void)setShowFooter:(BOOL)arg1 ;
-(BOOL)showFooter;
-(NSString *)socialContext;
-(void)setSocialContext:(NSString *)arg1 ;
-(id)initWithFrameDailyDialogueStyle:(CGRect)arg1 imageDownloader:(id)arg2 ;
-(id)initWithFrameNormalStyle:(CGRect)arg1 ;
-(BOOL)useDailyDialogue;
-(void)layoutSubviewsDailyDialogueStyle;
-(void)layoutSubviewsNormalStyle;
-(id)initWithFrame:(CGRect)arg1 imageDownloader:(id)arg2 useDailyDialogue:(BOOL)arg3 ;
-(void)setShowImage:(unsigned long long)arg1 ;
-(FBRichTextView *)footerTextView;
-(void)setFooterTextView:(FBRichTextView *)arg1 ;
-(FBNetworkImageView *)faviconImageView;
-(void)setFaviconImageView:(FBNetworkImageView *)arg1 ;
-(unsigned long long)showImage;
-(BOOL)contentVerticallyCentered;
-(void)setContentVerticallyCentered:(BOOL)arg1 ;
-(void)setUseDailyDialogue:(BOOL)arg1 ;
-(void)setAlignment:(long long)arg1 ;
-(void)layoutSubviews;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(FBNetworkImageView *)imageView;
-(long long)alignment;
-(void)setImageView:(FBNetworkImageView *)arg1 ;
-(NSAttributedString *)descriptionText;
-(void)setDescriptionText:(NSAttributedString *)arg1 ;
-(BOOL)showButton;
-(void)setShowButton:(BOOL)arg1 ;
-(NSAttributedString *)footerText;
-(UIButton *)actionButton;
-(NSString *)buttonText;
-(void)setButtonText:(NSString *)arg1 ;
-(void)setActionButton:(UIButton *)arg1 ;
-(void)setFooterText:(NSAttributedString *)arg1 ;
-(FBRichTextView *)descriptionTextView;
-(void)setDescriptionTextView:(FBRichTextView *)arg1 ;
@end
