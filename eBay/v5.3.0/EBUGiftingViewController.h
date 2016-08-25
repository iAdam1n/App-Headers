/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:54:31 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/EDDCC4DC-B551-47FD-8F2D-ADD28D2EEB77/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <eBay/eBay-Structs.h>
#import <eBay/EBUKeyboardAccessoryViewController.h>
#import <nautilus/EBNDataManagerObserver.h>
#import <eBay/EBUGiftPreviewDelegate.h>
#import <eBay/SimpleListPickerDelegate.h>
#import <libobjc.A.dylib/ABPeoplePickerNavigationControllerDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@protocol EBUGiftingDelegate;
@class EBNListing, ViewItemDataManager, EUIScrollView, EUIView, EBUGiftingAddressContainerView, EUIImageView, EUILabel, EUITableView, EUITextField, EUISwitch, UITextView, EUIButton, NSMutableArray, EBUVariationOptionPickerViewController, VariationSpecific, EBNGiftingDataManager, EBUBiddingKeyboard, NSString;

@interface EBUGiftingViewController : EBUKeyboardAccessoryViewController <EBNDataManagerObserver, EBUGiftPreviewDelegate, SimpleListPickerDelegate, ABPeoplePickerNavigationControllerDelegate, UITableViewDataSource, UITableViewDelegate> {

	id<EBUGiftingDelegate> _giftingDelegate;
	long long _actionID;
	EBNListing* _listing;
	ViewItemDataManager* _viewItemDataManager;
	EUIScrollView* _scrollView;
	EUIView* _containerView;
	EUIView* _topContainerView;
	EBUGiftingAddressContainerView* _addressContainerView;
	EUIImageView* _itemImageView;
	EUILabel* _itemTitleLabel;
	EUILabel* _itemSubTitleLabel;
	EUIView* _priceAndShippingContainerView;
	EUILabel* _priceLabel;
	EUILabel* _shippingMethodLabel;
	EUILabel* _compareLabel;
	EUILabel* _previewMessageLabel;
	EUIView* _midContainerView;
	EUITableView* _variationTableView;
	EUILabel* _variationErrorLabel;
	EUIView* _quantityContainerView;
	EUILabel* _quantityLabel;
	EUITextField* _quantityTextField;
	EUILabel* _quantityErrorLabel;
	EUIImageView* _chevronImageView;
	EUIView* _isThisGiftContainerView;
	EUILabel* _isThisGiftLabel;
	EUISwitch* _isGiftSwitchControl;
	EUITextField* _recipientEmailTextField;
	EUILabel* _recipientEmailHelpTextLabel;
	EUILabel* _recipientEmailErrorLabel;
	EUITextField* _senderNameTextField;
	EUILabel* _senderNameErrorLabel;
	EUIView* _messageContainerView;
	UITextView* _messageTextView;
	EUILabel* _messageCharCountLabel;
	EUILabel* _disclaimerLabel;
	EUIView* _buttonContainerView;
	EUIButton* _previewButton;
	EUIButton* _doneButton;
	NSMutableArray* _giftSectionConstraints;
	NSMutableArray* _selfPurchaseSectionConstraints;
	NSMutableArray* _topLayoutConstraintsWithPreview;
	NSMutableArray* _topLayoutConstraintsWithoutPreview;
	EBUVariationOptionPickerViewController* _optionPickerViewController;
	VariationSpecific* _variationSpecific;
	EBNGiftingDataManager* _giftingDataManager;
	EBUBiddingKeyboard* _numericKeyboard;
	NSString* _giftingPlaceHolderText;

}

@property (nonatomic,retain) EBNListing * listing;                                                             //@synthesize listing=_listing - In the implementation block
@property (nonatomic,retain) ViewItemDataManager * viewItemDataManager;                                        //@synthesize viewItemDataManager=_viewItemDataManager - In the implementation block
@property (nonatomic,retain) EUIScrollView * scrollView;                                                       //@synthesize scrollView=_scrollView - In the implementation block
@property (nonatomic,retain) EUIView * containerView;                                                          //@synthesize containerView=_containerView - In the implementation block
@property (nonatomic,retain) EUIView * topContainerView;                                                       //@synthesize topContainerView=_topContainerView - In the implementation block
@property (nonatomic,retain) EBUGiftingAddressContainerView * addressContainerView;                            //@synthesize addressContainerView=_addressContainerView - In the implementation block
@property (nonatomic,retain) EUIImageView * itemImageView;                                                     //@synthesize itemImageView=_itemImageView - In the implementation block
@property (nonatomic,retain) EUILabel * itemTitleLabel;                                                        //@synthesize itemTitleLabel=_itemTitleLabel - In the implementation block
@property (nonatomic,retain) EUILabel * itemSubTitleLabel;                                                     //@synthesize itemSubTitleLabel=_itemSubTitleLabel - In the implementation block
@property (nonatomic,retain) EUIView * priceAndShippingContainerView;                                          //@synthesize priceAndShippingContainerView=_priceAndShippingContainerView - In the implementation block
@property (nonatomic,retain) EUILabel * priceLabel;                                                            //@synthesize priceLabel=_priceLabel - In the implementation block
@property (nonatomic,retain) EUILabel * shippingMethodLabel;                                                   //@synthesize shippingMethodLabel=_shippingMethodLabel - In the implementation block
@property (nonatomic,retain) EUILabel * compareLabel;                                                          //@synthesize compareLabel=_compareLabel - In the implementation block
@property (nonatomic,retain) EUILabel * previewMessageLabel;                                                   //@synthesize previewMessageLabel=_previewMessageLabel - In the implementation block
@property (nonatomic,retain) EUIView * midContainerView;                                                       //@synthesize midContainerView=_midContainerView - In the implementation block
@property (nonatomic,retain) EUITableView * variationTableView;                                                //@synthesize variationTableView=_variationTableView - In the implementation block
@property (nonatomic,retain) EUILabel * variationErrorLabel;                                                   //@synthesize variationErrorLabel=_variationErrorLabel - In the implementation block
@property (nonatomic,retain) EUIView * quantityContainerView;                                                  //@synthesize quantityContainerView=_quantityContainerView - In the implementation block
@property (nonatomic,retain) EUILabel * quantityLabel;                                                         //@synthesize quantityLabel=_quantityLabel - In the implementation block
@property (nonatomic,retain) EUITextField * quantityTextField;                                                 //@synthesize quantityTextField=_quantityTextField - In the implementation block
@property (nonatomic,retain) EUILabel * quantityErrorLabel;                                                    //@synthesize quantityErrorLabel=_quantityErrorLabel - In the implementation block
@property (nonatomic,retain) EUIImageView * chevronImageView;                                                  //@synthesize chevronImageView=_chevronImageView - In the implementation block
@property (nonatomic,retain) EUIView * isThisGiftContainerView;                                                //@synthesize isThisGiftContainerView=_isThisGiftContainerView - In the implementation block
@property (nonatomic,retain) EUILabel * isThisGiftLabel;                                                       //@synthesize isThisGiftLabel=_isThisGiftLabel - In the implementation block
@property (nonatomic,retain) EUISwitch * isGiftSwitchControl;                                                  //@synthesize isGiftSwitchControl=_isGiftSwitchControl - In the implementation block
@property (nonatomic,retain) EUITextField * recipientEmailTextField;                                           //@synthesize recipientEmailTextField=_recipientEmailTextField - In the implementation block
@property (nonatomic,retain) EUILabel * recipientEmailHelpTextLabel;                                           //@synthesize recipientEmailHelpTextLabel=_recipientEmailHelpTextLabel - In the implementation block
@property (nonatomic,retain) EUILabel * recipientEmailErrorLabel;                                              //@synthesize recipientEmailErrorLabel=_recipientEmailErrorLabel - In the implementation block
@property (nonatomic,retain) EUITextField * senderNameTextField;                                               //@synthesize senderNameTextField=_senderNameTextField - In the implementation block
@property (nonatomic,retain) EUILabel * senderNameErrorLabel;                                                  //@synthesize senderNameErrorLabel=_senderNameErrorLabel - In the implementation block
@property (nonatomic,retain) EUIView * messageContainerView;                                                   //@synthesize messageContainerView=_messageContainerView - In the implementation block
@property (nonatomic,retain) UITextView * messageTextView;                                                     //@synthesize messageTextView=_messageTextView - In the implementation block
@property (nonatomic,retain) EUILabel * messageCharCountLabel;                                                 //@synthesize messageCharCountLabel=_messageCharCountLabel - In the implementation block
@property (nonatomic,retain) EUILabel * disclaimerLabel;                                                       //@synthesize disclaimerLabel=_disclaimerLabel - In the implementation block
@property (nonatomic,retain) EUIView * buttonContainerView;                                                    //@synthesize buttonContainerView=_buttonContainerView - In the implementation block
@property (nonatomic,retain) EUIButton * previewButton;                                                        //@synthesize previewButton=_previewButton - In the implementation block
@property (nonatomic,retain) EUIButton * doneButton;                                                           //@synthesize doneButton=_doneButton - In the implementation block
@property (nonatomic,retain) NSMutableArray * giftSectionConstraints;                                          //@synthesize giftSectionConstraints=_giftSectionConstraints - In the implementation block
@property (nonatomic,retain) NSMutableArray * selfPurchaseSectionConstraints;                                  //@synthesize selfPurchaseSectionConstraints=_selfPurchaseSectionConstraints - In the implementation block
@property (nonatomic,retain) NSMutableArray * topLayoutConstraintsWithPreview;                                 //@synthesize topLayoutConstraintsWithPreview=_topLayoutConstraintsWithPreview - In the implementation block
@property (nonatomic,retain) NSMutableArray * topLayoutConstraintsWithoutPreview;                              //@synthesize topLayoutConstraintsWithoutPreview=_topLayoutConstraintsWithoutPreview - In the implementation block
@property (nonatomic,retain) EBUVariationOptionPickerViewController * optionPickerViewController;              //@synthesize optionPickerViewController=_optionPickerViewController - In the implementation block
@property (nonatomic,retain) VariationSpecific * variationSpecific;                                            //@synthesize variationSpecific=_variationSpecific - In the implementation block
@property (nonatomic,retain) EBNGiftingDataManager * giftingDataManager;                                       //@synthesize giftingDataManager=_giftingDataManager - In the implementation block
@property (nonatomic,retain) EBUBiddingKeyboard * numericKeyboard;                                             //@synthesize numericKeyboard=_numericKeyboard - In the implementation block
@property (nonatomic,retain) NSString * giftingPlaceHolderText;                                                //@synthesize giftingPlaceHolderText=_giftingPlaceHolderText - In the implementation block
@property (assign,nonatomic,__weak) id<EBUGiftingDelegate> giftingDelegate;                                    //@synthesize giftingDelegate=_giftingDelegate - In the implementation block
@property (assign,nonatomic) long long actionID;                                                               //@synthesize actionID=_actionID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setupScrollView;
-(void)setupButtons;
-(void)activateConstraints;
-(EUIView *)topContainerView;
-(EUIView *)messageContainerView;
-(void)setTopContainerView:(EUIView *)arg1 ;
-(void)setAddressContainerView:(EBUGiftingAddressContainerView *)arg1 ;
-(EBUGiftingAddressContainerView *)addressContainerView;
-(void)setMessageContainerView:(EUIView *)arg1 ;
-(void)setupImageView;
-(id)listingPrice;
-(id)labelWithText:(id)arg1 typeSize:(id)arg2 typeColor:(id)arg3 typeWeight:(id)arg4 ;
-(void)setMessageTextView:(UITextView *)arg1 ;
-(UITextView *)messageTextView;
-(void)setButtonContainerView:(EUIView *)arg1 ;
-(EUIView *)buttonContainerView;
-(id)buttonWithTitle:(id)arg1 style:(id)arg2 ;
-(void)previewComplete;
-(id)labelWithText:(id)arg1 typeSize:(id)arg2 typeColor:(id)arg3 ;
-(EBUBiddingKeyboard *)numericKeyboard;
-(void)simpleListPickerSelectionChanged:(id)arg1 ;
-(void)setChevronImageView:(EUIImageView *)arg1 ;
-(void)setupDataManager;
-(void)setGiftSectionConstraints:(NSMutableArray *)arg1 ;
-(void)setSelfPurchaseSectionConstraints:(NSMutableArray *)arg1 ;
-(void)setGiftingPlaceHolderText:(NSString *)arg1 ;
-(void)setupCloseRightBarButtonItem;
-(void)setupContainerViews;
-(void)setupListingDetailsInTopContainerView;
-(void)setupGiftingDetailsInMidContainerView;
-(void)setupDisclaimerLabelInContainerView;
-(void)closeBarItemTapped:(id)arg1 ;
-(EBNGiftingDataManager *)giftingDataManager;
-(void)setGiftingDataManager:(EBNGiftingDataManager *)arg1 ;
-(void)setMidContainerView:(EUIView *)arg1 ;
-(EUIView *)midContainerView;
-(void)reloadImageView;
-(void)setItemSubTitleLabel:(EUILabel *)arg1 ;
-(EUILabel *)itemSubTitleLabel;
-(void)setPriceAndShippingContainerView:(EUIView *)arg1 ;
-(EUIView *)priceAndShippingContainerView;
-(void)setShippingMethodLabel:(EUILabel *)arg1 ;
-(EUILabel *)shippingMethodLabel;
-(void)setCompareLabel:(EUILabel *)arg1 ;
-(EUILabel *)compareLabel;
-(void)setPreviewMessageLabel:(EUILabel *)arg1 ;
-(EUILabel *)previewMessageLabel;
-(id)compareLabelText;
-(void)setupTableView;
-(void)setupQuantityContainer;
-(void)setupGiftingSwitchControl;
-(void)setupRecipientsEmailTextField;
-(id)textFieldWithPlaceHolderText:(id)arg1 keyboardType:(long long)arg2 autocapitalizationType:(long long)arg3 ;
-(void)setSenderNameTextField:(EUITextField *)arg1 ;
-(EUITextField *)senderNameTextField;
-(EUITextField *)recipientEmailTextField;
-(void)setupMessageContainer;
-(void)setupErrorAndHelpTextLabels;
-(void)setVariationTableView:(EUITableView *)arg1 ;
-(EUITableView *)variationTableView;
-(void)setupQuantityLabelWithField;
-(void)setQuantityErrorLabel:(EUILabel *)arg1 ;
-(EUILabel *)quantityErrorLabel;
-(void)setQuantityContainerView:(EUIView *)arg1 ;
-(EUIView *)quantityContainerView;
-(void)setQuantityLabel:(EUILabel *)arg1 ;
-(EUILabel *)quantityLabel;
-(void)setupQuantityTextField;
-(void)setQuantityTextField:(EUITextField *)arg1 ;
-(EUITextField *)quantityTextField;
-(void)setupNumericKeyboard;
-(void)setNumericKeyboard:(EBUBiddingKeyboard *)arg1 ;
-(void)setIsThisGiftContainerView:(EUIView *)arg1 ;
-(void)setIsThisGiftLabel:(EUILabel *)arg1 ;
-(EUILabel *)isThisGiftLabel;
-(EUIView *)isThisGiftContainerView;
-(void)setIsGiftSwitchControl:(EUISwitch *)arg1 ;
-(EUISwitch *)isGiftSwitchControl;
-(void)switchControlChanged:(id)arg1 ;
-(void)setRecipientEmailTextField:(EUITextField *)arg1 ;
-(void)showAddressBookPicker:(id)arg1 ;
-(void)setupTextView;
-(void)setupMessageCharCountLabel;
-(NSString *)giftingPlaceHolderText;
-(void)setMessageCharCountLabel:(EUILabel *)arg1 ;
-(EUILabel *)messageCharCountLabel;
-(void)setRecipientEmailHelpTextLabel:(EUILabel *)arg1 ;
-(EUILabel *)recipientEmailHelpTextLabel;
-(EUILabel *)recipientEmailErrorLabel;
-(void)setRecipientEmailErrorLabel:(EUILabel *)arg1 ;
-(EUILabel *)senderNameErrorLabel;
-(void)setSenderNameErrorLabel:(EUILabel *)arg1 ;
-(void)setVariationErrorLabel:(EUILabel *)arg1 ;
-(EUILabel *)variationErrorLabel;
-(void)setPreviewButton:(EUIButton *)arg1 ;
-(EUIButton *)previewButton;
-(void)previewButtonTapped:(id)arg1 ;
-(void)setTopLayoutConstraintsWithPreview:(NSMutableArray *)arg1 ;
-(NSMutableArray *)topLayoutConstraintsWithPreview;
-(void)setTopLayoutConstraintsWithoutPreview:(NSMutableArray *)arg1 ;
-(NSMutableArray *)topLayoutConstraintsWithoutPreview;
-(NSMutableArray *)giftSectionConstraints;
-(NSMutableArray *)selfPurchaseSectionConstraints;
-(ViewItemDataManager *)viewItemDataManager;
-(void)resetErrorLabels;
-(BOOL)hasInputDataValidationError;
-(void)showErrorLabels;
-(BOOL)isVariationInError;
-(BOOL)isQuantityInError;
-(void)showVariationErrorIfNeeded;
-(void)showQuantityErrorIfNeeded;
-(void)showEmailErrorIfNeeded;
-(void)showSenderNameErrorIfNeeded;
-(void)showQuantityErrorWithMessage:(id)arg1 ;
-(void)showEmailError:(BOOL)arg1 senderNameError:(BOOL)arg2 ;
-(void)resetQuantityError;
-(id<EBUGiftingDelegate>)giftingDelegate;
-(EBUVariationOptionPickerViewController *)optionPickerViewController;
-(void)setVariationSpecific:(VariationSpecific *)arg1 ;
-(void)pushVariationViewController;
-(void)setOptionPickerViewController:(EBUVariationOptionPickerViewController *)arg1 ;
-(VariationSpecific *)variationSpecific;
-(void)scrollResponderToVisible:(id)arg1 ;
-(void)setGiftingDelegate:(id<EBUGiftingDelegate>)arg1 ;
-(void)setViewItemDataManager:(ViewItemDataManager *)arg1 ;
-(EUIImageView *)chevronImageView;
-(EBNListing *)listing;
-(void)setListing:(EBNListing *)arg1 ;
-(void)dataManager:(id)arg1 didError:(id)arg2 ;
-(void)dataManager:(id)arg1 didCompleteFetch:(id)arg2 ;
-(id)initWithDataManager:(id)arg1 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(EUIView *)containerView;
-(void)setScrollView:(EUIScrollView *)arg1 ;
-(EUIScrollView *)scrollView;
-(void)loadView;
-(void)setContainerView:(EUIView *)arg1 ;
-(void)textFieldDidBeginEditing:(id)arg1 ;
-(void)textFieldDidEndEditing:(id)arg1 ;
-(BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(NSRange)arg2 replacementString:(id)arg3 ;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)textViewDidBeginEditing:(id)arg1 ;
-(void)textViewDidEndEditing:(id)arg1 ;
-(BOOL)textView:(id)arg1 shouldChangeTextInRange:(NSRange)arg2 replacementText:(id)arg3 ;
-(void)textViewDidChange:(id)arg1 ;
-(void)setDoneButton:(EUIButton *)arg1 ;
-(EUIButton *)doneButton;
-(void)setActionID:(long long)arg1 ;
-(long long)actionID;
-(void)doneButtonTapped:(id)arg1 ;
-(EUIImageView *)itemImageView;
-(void)peoplePickerNavigationController:(id)arg1 didSelectPerson:(void*)arg2 property:(int)arg3 identifier:(int)arg4 ;
-(void)peoplePickerNavigationControllerDidCancel:(id)arg1 ;
-(EUILabel *)disclaimerLabel;
-(void)setDisclaimerLabel:(EUILabel *)arg1 ;
-(EUILabel *)itemTitleLabel;
-(void)setItemImageView:(EUIImageView *)arg1 ;
-(void)setItemTitleLabel:(EUILabel *)arg1 ;
-(EUILabel *)priceLabel;
-(void)setPriceLabel:(EUILabel *)arg1 ;
-(void)setup;
@end

