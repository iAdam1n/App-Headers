/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:54:33 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/EDDCC4DC-B551-47FD-8F2D-ADD28D2EEB77/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <eBay/BiddingControllerIPad.h>
#import <eBay/CurrencyTextFieldForwardDelegate.h>

@class CurrencyAmount, NSString, NSDecimalNumber, BestOffer, UIView, UILabel, UITextField, UITextView, UIImageView, UIButton, BidBuyOfferTrackingManager, CurrencyTextFieldDelegate;

@interface BestOfferBiddingControllerIPad : BiddingControllerIPad <CurrencyTextFieldForwardDelegate> {

	unsigned long long _boBidState;
	int remainingBestOffersForBuyer;
	CurrencyAmount* maxBidValue;
	NSString* bestOfferTerms;
	NSDecimalNumber* minBestOfferForCurrency;
	BestOffer* bestOffer;
	UIView* offerView_EnterOffer;
	UILabel* enterOffer_BuyItNowInfoLabel;
	UIView* enterOffer_TermsEntryContainerView;
	UITextField* enterOffer_TermsField;
	UILabel* enterOffer_TermsLabel;
	UILabel* enterOffer_TermsInfoLabel;
	UIView* offerView_Review;
	UILabel* review_YourBestOfferLabel;
	UILabel* review_OffersRemainingInfoLabel;
	UILabel* review_TotalBestOfferLabel;
	UILabel* review_TermsLabel;
	UITextView* review_TermsField;
	UILabel* review_TermsDisclaimerLabel;
	UIImageView* review_StateBadge;
	UILabel* review_StateBadgeLabel;
	UIView* review_MessageContainerView;
	UILabel* review_MessageLabel;
	UITextField* review_MessageField;
	UITextView* review_MessageStaticView;
	UIButton* button0;
	UIButton* button1;
	UIButton* button2;
	UIButton* button3;
	BidBuyOfferTrackingManager* _trackingManager;
	CurrencyTextFieldDelegate* _currencyDelegate;

}

@property (nonatomic,retain) BidBuyOfferTrackingManager * trackingManager;              //@synthesize trackingManager=_trackingManager - In the implementation block
@property (nonatomic,retain) CurrencyTextFieldDelegate * currencyDelegate;              //@synthesize currencyDelegate=_currencyDelegate - In the implementation block
@property (assign,nonatomic) unsigned long long boBidState;                             //@synthesize boBidState=_boBidState - In the implementation block
@property (nonatomic,retain) NSString * bestOfferTerms; 
@property (nonatomic,retain) CurrencyAmount * maxBidValue; 
@property (nonatomic,retain) BestOffer * bestOffer; 
@property (nonatomic,retain) UIView * offerView_EnterOffer; 
@property (nonatomic,retain) UILabel * enterOffer_BuyItNowInfoLabel; 
@property (nonatomic,retain) UIView * enterOffer_TermsEntryContainerView; 
@property (nonatomic,retain) UITextField * enterOffer_TermsField; 
@property (nonatomic,retain) UILabel * enterOffer_TermsLabel; 
@property (nonatomic,retain) UILabel * enterOffer_TermsInfoLabel; 
@property (nonatomic,retain) UIView * offerView_Review; 
@property (nonatomic,retain) UILabel * review_YourBestOfferLabel; 
@property (nonatomic,retain) UILabel * review_OffersRemainingInfoLabel; 
@property (nonatomic,retain) UILabel * review_TotalBestOfferLabel; 
@property (nonatomic,retain) UILabel * review_TermsLabel; 
@property (nonatomic,retain) UITextView * review_TermsField; 
@property (nonatomic,retain) UILabel * review_TermsDisclaimerLabel; 
@property (nonatomic,retain) UIImageView * review_StateBadge; 
@property (nonatomic,retain) UILabel * review_StateBadgeLabel; 
@property (nonatomic,retain) UIView * review_MessageContainerView; 
@property (nonatomic,retain) UILabel * review_MessageLabel; 
@property (nonatomic,retain) UITextField * review_MessageField; 
@property (nonatomic,retain) UITextView * review_MessageStaticView; 
@property (nonatomic,retain) UIButton * button0; 
@property (nonatomic,retain) UIButton * button1; 
@property (nonatomic,retain) UIButton * button2; 
@property (nonatomic,retain) UIButton * button3; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setupTableCells;
-(void)setMaxBidValue:(CurrencyAmount *)arg1 ;
-(void)setBestOfferTerms:(NSString *)arg1 ;
-(void)resetStartingState;
-(void)resignFirstResponders;
-(void)adjustKeyboardWillHide:(id)arg1 ;
-(BOOL)bidQuantityIsValid;
-(void)showMaxOffersError:(id)arg1 ;
-(void)showPaymentOptions:(id)arg1 ;
-(void)setItemTransactionID:(id)arg1 ;
-(void)adjustKeyboardWillShow:(id)arg1 ;
-(NSString *)bestOfferTerms;
-(CurrencyAmount *)maxBidValue;
-(void)disableActionButtons;
-(void)setupFromItem;
-(CurrencyTextFieldDelegate *)currencyDelegate;
-(void)setCurrencyDelegate:(CurrencyTextFieldDelegate *)arg1 ;
-(void)goToViewItem;
-(double)maxReviewCommitViewHeight;
-(void)beginMakeOfferWithDataModel:(id)arg1 ;
-(void)beginRespondToSellerCounterOfferWithDataModel:(id)arg1 ;
-(void)beginRespondToBuyerBestOffer:(id)arg1 withDataModel:(id)arg2 ;
-(UIView *)offerView_EnterOffer;
-(UIView *)offerView_Review;
-(UIView *)review_MessageContainerView;
-(UITextView *)review_MessageStaticView;
-(UITextView *)review_TermsField;
-(UILabel *)enterOffer_BuyItNowInfoLabel;
-(UILabel *)enterOffer_TermsLabel;
-(UILabel *)enterOffer_TermsInfoLabel;
-(UILabel *)review_YourBestOfferLabel;
-(UILabel *)review_OffersRemainingInfoLabel;
-(UILabel *)review_TermsLabel;
-(UILabel *)review_MessageLabel;
-(UILabel *)review_TotalBestOfferLabel;
-(UITextField *)enterOffer_TermsField;
-(unsigned long long)boBidState;
-(void)setBoBidState:(unsigned long long)arg1 ;
-(UITextField *)review_MessageField;
-(void)showErrorWithAction:(SEL)arg1 ;
-(void)setupOfferView;
-(void)checkPriceAndReviewOffer:(id)arg1 ;
-(void)addButtonWithTitle:(id)arg1 action:(SEL)arg2 style:(id)arg3 automationIdentifier:(id)arg4 ;
-(void)addCancelButtonWithTitle:(id)arg1 action:(SEL)arg2 ;
-(void)setupReviewOfferView;
-(void)submitOffer:(id)arg1 ;
-(void)setupSubmittedOfferView;
-(void)makeAnotherOffer:(id)arg1 ;
-(void)acceptOfferFromSeller:(id)arg1 ;
-(void)counterOfferFromSeller:(id)arg1 ;
-(void)declineOfferFromSeller:(id)arg1 ;
-(void)checkPriceAndReviewCounterOfferToSeller:(id)arg1 ;
-(void)submitAcceptedOfferFromSeller:(id)arg1 ;
-(void)submitDeclinedOfferFromSeller:(id)arg1 ;
-(void)acceptOfferFromBuyer:(id)arg1 ;
-(void)counterOfferFromBuyer:(id)arg1 ;
-(void)declineOfferFromBuyer:(id)arg1 ;
-(void)checkPriceAndReviewCounterOfferToBuyer:(id)arg1 ;
-(void)submitCounterOfferToBuyer:(id)arg1 ;
-(void)submitAcceptedOfferFromBuyer:(id)arg1 ;
-(void)submitDeclinedOfferFromBuyer:(id)arg1 ;
-(UIView *)enterOffer_TermsEntryContainerView;
-(void)positionOfferViews;
-(UIImageView *)review_StateBadge;
-(UILabel *)review_StateBadgeLabel;
-(UILabel *)review_TermsDisclaimerLabel;
-(void)reviewOffer:(id)arg1 ;
-(void)checkPriceAndReviewContinueWithAction:(/*^block*/id)arg1 ;
-(void)reviewCounterOfferToSeller:(id)arg1 ;
-(void)reviewCounterOfferToBuyer:(id)arg1 ;
-(id)minimumToBidAmount;
-(void)setOfferView_EnterOffer:(UIView *)arg1 ;
-(void)setEnterOffer_BuyItNowInfoLabel:(UILabel *)arg1 ;
-(void)setEnterOffer_TermsEntryContainerView:(UIView *)arg1 ;
-(void)setEnterOffer_TermsField:(UITextField *)arg1 ;
-(void)setEnterOffer_TermsLabel:(UILabel *)arg1 ;
-(void)setEnterOffer_TermsInfoLabel:(UILabel *)arg1 ;
-(void)setOfferView_Review:(UIView *)arg1 ;
-(void)setReview_YourBestOfferLabel:(UILabel *)arg1 ;
-(void)setReview_OffersRemainingInfoLabel:(UILabel *)arg1 ;
-(void)setReview_TotalBestOfferLabel:(UILabel *)arg1 ;
-(void)setReview_TermsLabel:(UILabel *)arg1 ;
-(void)setReview_TermsField:(UITextView *)arg1 ;
-(void)setReview_TermsDisclaimerLabel:(UILabel *)arg1 ;
-(void)setReview_StateBadge:(UIImageView *)arg1 ;
-(void)setReview_StateBadgeLabel:(UILabel *)arg1 ;
-(void)setReview_MessageContainerView:(UIView *)arg1 ;
-(void)setReview_MessageLabel:(UILabel *)arg1 ;
-(void)setReview_MessageField:(UITextField *)arg1 ;
-(void)setReview_MessageStaticView:(UITextView *)arg1 ;
-(void)setButton0:(UIButton *)arg1 ;
-(void)setButton1:(UIButton *)arg1 ;
-(void)setButton2:(UIButton *)arg1 ;
-(void)setButton3:(UIButton *)arg1 ;
-(BestOffer *)bestOffer;
-(void)setBestOffer:(BestOffer *)arg1 ;
-(void)setTrackingManager:(BidBuyOfferTrackingManager *)arg1 ;
-(BidBuyOfferTrackingManager *)trackingManager;
-(void)dealloc;
-(id)init;
-(void)textFieldDidBeginEditing:(id)arg1 ;
-(void)textFieldDidEndEditing:(id)arg1 ;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(id)nibName;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)dismiss;
-(void)goBack:(id)arg1 ;
-(UIButton *)button2;
-(UIButton *)button0;
-(UIButton *)button1;
-(UIButton *)button3;
-(void)validate:(id)arg1 ;
@end

