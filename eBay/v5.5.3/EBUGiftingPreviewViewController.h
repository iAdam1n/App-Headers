/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 23, 2016 at 8:53:13 PM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/B79A6C91-6A31-4B98-98DF-DAB1E6185487/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ComponentUI/EUIViewController.h>

@protocol EBUGiftPreviewDelegate;
@class EUIScrollView, EUIView, EUILabel, EBUGiftingAddressContainerView, EUIImageView, UITextView, EUIButton, EBNListing, NSString;

@interface EBUGiftingPreviewViewController : EUIViewController {

	id<EBUGiftPreviewDelegate> _previewDelegate;
	EUIScrollView* _scrollView;
	EUIView* _containerView;
	EUIView* _topContainerView;
	EUILabel* _titleLabel;
	EBUGiftingAddressContainerView* _addressContainerView;
	EUIView* _messageContainerView;
	EUIView* _imageAndPriceContainerView;
	EUIImageView* _itemImageView;
	EUIView* _priceContainerView;
	EUILabel* _priceLabel;
	EUIView* _priceLeftPadView;
	EUIView* _priceRightPadView;
	UITextView* _messageTextView;
	EUIView* _buttonContainerView;
	EUIButton* _editButton;
	EUIButton* _doneButton;
	EBNListing* _listing;
	NSString* _senderName;
	NSString* _toEmailString;
	NSString* _messageString;
	NSString* _userNameString;

}

@property (nonatomic,retain) EUIScrollView * scrollView;                                         //@synthesize scrollView=_scrollView - In the implementation block
@property (nonatomic,retain) EUIView * containerView;                                            //@synthesize containerView=_containerView - In the implementation block
@property (nonatomic,retain) EUIView * topContainerView;                                         //@synthesize topContainerView=_topContainerView - In the implementation block
@property (nonatomic,retain) EUILabel * titleLabel;                                              //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) EBUGiftingAddressContainerView * addressContainerView;              //@synthesize addressContainerView=_addressContainerView - In the implementation block
@property (nonatomic,retain) EUIView * messageContainerView;                                     //@synthesize messageContainerView=_messageContainerView - In the implementation block
@property (nonatomic,retain) EUIView * imageAndPriceContainerView;                               //@synthesize imageAndPriceContainerView=_imageAndPriceContainerView - In the implementation block
@property (nonatomic,retain) EUIImageView * itemImageView;                                       //@synthesize itemImageView=_itemImageView - In the implementation block
@property (nonatomic,retain) EUIView * priceContainerView;                                       //@synthesize priceContainerView=_priceContainerView - In the implementation block
@property (nonatomic,retain) EUILabel * priceLabel;                                              //@synthesize priceLabel=_priceLabel - In the implementation block
@property (nonatomic,retain) EUIView * priceLeftPadView;                                         //@synthesize priceLeftPadView=_priceLeftPadView - In the implementation block
@property (nonatomic,retain) EUIView * priceRightPadView;                                        //@synthesize priceRightPadView=_priceRightPadView - In the implementation block
@property (nonatomic,retain) UITextView * messageTextView;                                       //@synthesize messageTextView=_messageTextView - In the implementation block
@property (nonatomic,retain) EUIView * buttonContainerView;                                      //@synthesize buttonContainerView=_buttonContainerView - In the implementation block
@property (nonatomic,retain) EUIButton * editButton;                                             //@synthesize editButton=_editButton - In the implementation block
@property (nonatomic,retain) EUIButton * doneButton;                                             //@synthesize doneButton=_doneButton - In the implementation block
@property (nonatomic,retain) EBNListing * listing;                                               //@synthesize listing=_listing - In the implementation block
@property (nonatomic,copy) NSString * senderName;                                                //@synthesize senderName=_senderName - In the implementation block
@property (nonatomic,copy) NSString * toEmailString;                                             //@synthesize toEmailString=_toEmailString - In the implementation block
@property (nonatomic,copy) NSString * messageString;                                             //@synthesize messageString=_messageString - In the implementation block
@property (nonatomic,copy) NSString * userNameString;                                            //@synthesize userNameString=_userNameString - In the implementation block
@property (assign,nonatomic,__weak) id<EBUGiftPreviewDelegate> previewDelegate;                  //@synthesize previewDelegate=_previewDelegate - In the implementation block
-(void)setupScrollView;
-(void)setUpContainers;
-(void)setupButtons;
-(void)activateConstraints;
-(void)setUpTopContainer;
-(void)setUpMessageContainer;
-(EUIView *)topContainerView;
-(EUIView *)messageContainerView;
-(void)setTopContainerView:(EUIView *)arg1 ;
-(NSString *)toEmailString;
-(void)setAddressContainerView:(EBUGiftingAddressContainerView *)arg1 ;
-(EBUGiftingAddressContainerView *)addressContainerView;
-(void)setMessageContainerView:(EUIView *)arg1 ;
-(void)setImageAndPriceContainerView:(EUIView *)arg1 ;
-(EUIView *)imageAndPriceContainerView;
-(void)setupImageView;
-(void)setUpPriceContainerView;
-(void)setupMessageTextView;
-(void)setPriceContainerView:(EUIView *)arg1 ;
-(EUIView *)priceContainerView;
-(void)setPriceLeftPadView:(EUIView *)arg1 ;
-(EUIView *)priceLeftPadView;
-(void)setPriceRightPadView:(EUIView *)arg1 ;
-(EUIView *)priceRightPadView;
-(id)listingPrice;
-(id)labelWithText:(id)arg1 typeSize:(id)arg2 typeColor:(id)arg3 typeWeight:(id)arg4 ;
-(id)plainStringToAttributedSuperscriptStringOnFirstCharOfLabel:(id)arg1 ;
-(void)setMessageTextView:(UITextView *)arg1 ;
-(UITextView *)messageTextView;
-(void)setButtonContainerView:(EUIView *)arg1 ;
-(EUIView *)buttonContainerView;
-(id)buttonWithTitle:(id)arg1 style:(id)arg2 ;
-(void)trackGiftOptionsLoadFromPreviewOnEdit;
-(id)initWithListing:(id)arg1 toEmail:(id)arg2 senderName:(id)arg3 message:(id)arg4 ;
-(id)labelWithText:(id)arg1 typeSize:(id)arg2 typeColor:(id)arg3 ;
-(void)setToEmailString:(NSString *)arg1 ;
-(void)setUserNameString:(NSString *)arg1 ;
-(EBNListing *)listing;
-(void)setListing:(EBNListing *)arg1 ;
-(EUIView *)containerView;
-(void)loadView;
-(void)setContainerView:(EUIView *)arg1 ;
-(void)setScrollView:(EUIScrollView *)arg1 ;
-(EUILabel *)titleLabel;
-(void)viewDidLoad;
-(EUIScrollView *)scrollView;
-(void)setDoneButton:(EUIButton *)arg1 ;
-(EUIButton *)doneButton;
-(void)setTitleLabel:(EUILabel *)arg1 ;
-(NSString *)messageString;
-(void)setMessageString:(NSString *)arg1 ;
-(id<EBUGiftPreviewDelegate>)previewDelegate;
-(void)setPreviewDelegate:(id<EBUGiftPreviewDelegate>)arg1 ;
-(NSString *)senderName;
-(void)setSenderName:(NSString *)arg1 ;
-(EUIImageView *)itemImageView;
-(void)editButtonTapped:(id)arg1 ;
-(EUIButton *)editButton;
-(NSString *)userNameString;
-(void)setItemImageView:(EUIImageView *)arg1 ;
-(void)setPriceLabel:(EUILabel *)arg1 ;
-(EUILabel *)priceLabel;
-(void)setUp;
-(void)setEditButton:(EUIButton *)arg1 ;
-(void)doneButtonTapped:(id)arg1 ;
@end
