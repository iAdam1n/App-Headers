/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:54:33 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/EDDCC4DC-B551-47FD-8F2D-ADD28D2EEB77/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <eBay/eBay-Structs.h>
#import <eBay/EBXDataObject.h>

@class NSString, NSDate, CurrencyAmount, NSDictionary;

@interface EBXListing : EBXDataObject {

	BOOL _pending;
	BOOL _isBINBuyableItem;
	BOOL _isAuctionType;
	BOOL _isBestOfferItem;
	BOOL _isMultiSKU;
	BOOL _isInShoppingCart;
	BOOL _userIsSeller;
	BOOL _isEnded;
	BOOL _reservePriceMet;
	BOOL _userIsBidding;
	BOOL _userIsWinning;
	NSString* _listingID;
	NSString* _statusType;
	NSString* _statusTitle;
	NSString* _statusSubTitle;
	NSString* _title;
	NSString* _location;
	NSString* _shippingCost;
	NSString* _bestOfferBuyerMessage;
	NSString* _bestOfferSellerMessage;
	NSString* _shippingCarrier;
	NSDate* _auctionEndDate;
	NSDate* _transactionPurchaseDate;
	NSDate* _transactionPaymentDate;
	long long _listingStatus;
	CurrencyAmount* _displayPrice;
	CurrencyAmount* _convertedDisplayPrice;
	CurrencyAmount* _buyItNowPrice;
	CurrencyAmount* _convertedBuyItNowPrice;
	CurrencyAmount* _currentBidPrice;
	CurrencyAmount* _convertedCurrentBidPrice;
	CurrencyAmount* _nextMinimumBidPrice;
	CurrencyAmount* _biddingIncrement;
	CurrencyAmount* _currentUserMaxBid;
	CurrencyAmount* _bestOfferPrice;
	CurrencyAmount* _transactionPrice;
	CurrencyAmount* _transactionPaymentAmount;
	long long _watchCount;
	long long _hitCount;
	long long _bidCount;
	long long _offerCount;
	long long _numberOfBidders;
	long long _bestOfferQuantity;
	NSDictionary* _imageURLs;
	CGSize _defaultImageSize;

}

@property (nonatomic,retain) NSDictionary * imageURLs;                               //@synthesize imageURLs=_imageURLs - In the implementation block
@property (assign,nonatomic) CGSize defaultImageSize;                                //@synthesize defaultImageSize=_defaultImageSize - In the implementation block
@property (nonatomic,copy) NSString * listingID;                                     //@synthesize listingID=_listingID - In the implementation block
@property (nonatomic,copy) NSString * statusType;                                    //@synthesize statusType=_statusType - In the implementation block
@property (nonatomic,copy) NSString * statusTitle;                                   //@synthesize statusTitle=_statusTitle - In the implementation block
@property (nonatomic,copy) NSString * statusSubTitle;                                //@synthesize statusSubTitle=_statusSubTitle - In the implementation block
@property (nonatomic,copy) NSString * title;                                         //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * location;                                      //@synthesize location=_location - In the implementation block
@property (nonatomic,copy) NSString * shippingCost;                                  //@synthesize shippingCost=_shippingCost - In the implementation block
@property (nonatomic,copy) NSString * bestOfferBuyerMessage;                         //@synthesize bestOfferBuyerMessage=_bestOfferBuyerMessage - In the implementation block
@property (nonatomic,copy) NSString * bestOfferSellerMessage;                        //@synthesize bestOfferSellerMessage=_bestOfferSellerMessage - In the implementation block
@property (nonatomic,copy) NSString * shippingCarrier;                               //@synthesize shippingCarrier=_shippingCarrier - In the implementation block
@property (nonatomic,retain) NSDate * auctionEndDate;                                //@synthesize auctionEndDate=_auctionEndDate - In the implementation block
@property (nonatomic,retain) NSDate * transactionPurchaseDate;                       //@synthesize transactionPurchaseDate=_transactionPurchaseDate - In the implementation block
@property (nonatomic,retain) NSDate * transactionPaymentDate;                        //@synthesize transactionPaymentDate=_transactionPaymentDate - In the implementation block
@property (assign,nonatomic) BOOL pending;                                           //@synthesize pending=_pending - In the implementation block
@property (assign,nonatomic) BOOL isBINBuyableItem;                                  //@synthesize isBINBuyableItem=_isBINBuyableItem - In the implementation block
@property (assign,nonatomic) BOOL isAuctionType;                                     //@synthesize isAuctionType=_isAuctionType - In the implementation block
@property (assign,nonatomic) BOOL isBestOfferItem;                                   //@synthesize isBestOfferItem=_isBestOfferItem - In the implementation block
@property (assign,nonatomic) BOOL isMultiSKU;                                        //@synthesize isMultiSKU=_isMultiSKU - In the implementation block
@property (assign,nonatomic) BOOL isInShoppingCart;                                  //@synthesize isInShoppingCart=_isInShoppingCart - In the implementation block
@property (assign,nonatomic) BOOL userIsSeller;                                      //@synthesize userIsSeller=_userIsSeller - In the implementation block
@property (assign,nonatomic) BOOL isEnded;                                           //@synthesize isEnded=_isEnded - In the implementation block
@property (assign,nonatomic) BOOL reservePriceMet;                                   //@synthesize reservePriceMet=_reservePriceMet - In the implementation block
@property (assign,nonatomic) BOOL userIsBidding;                                     //@synthesize userIsBidding=_userIsBidding - In the implementation block
@property (assign,nonatomic) BOOL userIsWinning;                                     //@synthesize userIsWinning=_userIsWinning - In the implementation block
@property (assign,nonatomic) long long listingStatus;                                //@synthesize listingStatus=_listingStatus - In the implementation block
@property (nonatomic,retain) CurrencyAmount * displayPrice;                          //@synthesize displayPrice=_displayPrice - In the implementation block
@property (nonatomic,retain) CurrencyAmount * convertedDisplayPrice;                 //@synthesize convertedDisplayPrice=_convertedDisplayPrice - In the implementation block
@property (nonatomic,retain) CurrencyAmount * buyItNowPrice;                         //@synthesize buyItNowPrice=_buyItNowPrice - In the implementation block
@property (nonatomic,retain) CurrencyAmount * convertedBuyItNowPrice;                //@synthesize convertedBuyItNowPrice=_convertedBuyItNowPrice - In the implementation block
@property (nonatomic,retain) CurrencyAmount * currentBidPrice;                       //@synthesize currentBidPrice=_currentBidPrice - In the implementation block
@property (nonatomic,retain) CurrencyAmount * convertedCurrentBidPrice;              //@synthesize convertedCurrentBidPrice=_convertedCurrentBidPrice - In the implementation block
@property (nonatomic,retain) CurrencyAmount * nextMinimumBidPrice;                   //@synthesize nextMinimumBidPrice=_nextMinimumBidPrice - In the implementation block
@property (nonatomic,retain) CurrencyAmount * biddingIncrement;                      //@synthesize biddingIncrement=_biddingIncrement - In the implementation block
@property (nonatomic,retain) CurrencyAmount * currentUserMaxBid;                     //@synthesize currentUserMaxBid=_currentUserMaxBid - In the implementation block
@property (nonatomic,retain) CurrencyAmount * bestOfferPrice;                        //@synthesize bestOfferPrice=_bestOfferPrice - In the implementation block
@property (nonatomic,retain) CurrencyAmount * transactionPrice;                      //@synthesize transactionPrice=_transactionPrice - In the implementation block
@property (nonatomic,retain) CurrencyAmount * transactionPaymentAmount;              //@synthesize transactionPaymentAmount=_transactionPaymentAmount - In the implementation block
@property (assign) long long watchCount;                                             //@synthesize watchCount=_watchCount - In the implementation block
@property (assign) long long hitCount;                                               //@synthesize hitCount=_hitCount - In the implementation block
@property (assign) long long bidCount;                                               //@synthesize bidCount=_bidCount - In the implementation block
@property (assign) long long offerCount;                                             //@synthesize offerCount=_offerCount - In the implementation block
@property (assign) long long numberOfBidders;                                        //@synthesize numberOfBidders=_numberOfBidders - In the implementation block
@property (assign) long long bestOfferQuantity;                                      //@synthesize bestOfferQuantity=_bestOfferQuantity - In the implementation block
+(id)propertiesExcludedFromCompare;
-(CurrencyAmount *)bestOfferPrice;
-(long long)hitCount;
-(NSString *)bestOfferBuyerMessage;
-(NSString *)bestOfferSellerMessage;
-(void)setBestOfferBuyerMessage:(NSString *)arg1 ;
-(void)setBestOfferSellerMessage:(NSString *)arg1 ;
-(void)setStatusType:(NSString *)arg1 ;
-(void)setStatusSubTitle:(NSString *)arg1 ;
-(void)addImageURL:(id)arg1 forSize:(CGSize)arg2 ;
-(void)setAuctionEndDate:(NSDate *)arg1 ;
-(void)setCurrentBidPrice:(CurrencyAmount *)arg1 ;
-(CurrencyAmount *)currentBidPrice;
-(void)setNextMinimumBidPrice:(CurrencyAmount *)arg1 ;
-(void)setBiddingIncrement:(CurrencyAmount *)arg1 ;
-(void)setIsAuctionType:(BOOL)arg1 ;
-(void)setConvertedBuyItNowPrice:(CurrencyAmount *)arg1 ;
-(void)setIsBINBuyableItem:(BOOL)arg1 ;
-(void)setBestOfferQuantity:(long long)arg1 ;
-(void)setIsBestOfferItem:(BOOL)arg1 ;
-(void)setTransactionPurchaseDate:(NSDate *)arg1 ;
-(void)setTransactionPaymentAmount:(CurrencyAmount *)arg1 ;
-(void)setTransactionPaymentDate:(NSDate *)arg1 ;
-(NSString *)statusSubTitle;
-(id)imageURLKey:(CGSize)arg1 ;
-(NSDictionary *)imageURLs;
-(CGSize)defaultImageSize;
-(void)setDefaultImageSize:(CGSize)arg1 ;
-(id)imageURLForSize:(CGSize)arg1 ;
-(CurrencyAmount *)biddingIncrement;
-(CurrencyAmount *)nextMinimumBidPrice;
-(NSDate *)auctionEndDate;
-(NSDate *)transactionPurchaseDate;
-(NSDate *)transactionPaymentDate;
-(BOOL)isBestOfferItem;
-(BOOL)isMultiSKU;
-(void)setIsMultiSKU:(BOOL)arg1 ;
-(BOOL)isInShoppingCart;
-(void)setIsInShoppingCart:(BOOL)arg1 ;
-(void)setUserIsSeller:(BOOL)arg1 ;
-(CurrencyAmount *)convertedDisplayPrice;
-(void)setConvertedDisplayPrice:(CurrencyAmount *)arg1 ;
-(CurrencyAmount *)convertedBuyItNowPrice;
-(CurrencyAmount *)convertedCurrentBidPrice;
-(void)setConvertedCurrentBidPrice:(CurrencyAmount *)arg1 ;
-(CurrencyAmount *)transactionPaymentAmount;
-(long long)offerCount;
-(void)setOfferCount:(long long)arg1 ;
-(long long)numberOfBidders;
-(void)setNumberOfBidders:(long long)arg1 ;
-(long long)bestOfferQuantity;
-(NSString *)listingID;
-(BOOL)isBINBuyableItem;
-(void)setListingStatus:(long long)arg1 ;
-(long long)listingStatus;
-(void)setBidCount:(long long)arg1 ;
-(void)setListingID:(NSString *)arg1 ;
-(void)setBuyItNowPrice:(CurrencyAmount *)arg1 ;
-(CurrencyAmount *)buyItNowPrice;
-(BOOL)userIsSeller;
-(BOOL)isEnded;
-(long long)bidCount;
-(BOOL)reservePriceMet;
-(CurrencyAmount *)transactionPrice;
-(BOOL)userIsBidding;
-(BOOL)userIsWinning;
-(BOOL)isAuctionType;
-(long long)watchCount;
-(void)setWatchCount:(long long)arg1 ;
-(void)setHitCount:(long long)arg1 ;
-(CurrencyAmount *)currentUserMaxBid;
-(void)setCurrentUserMaxBid:(CurrencyAmount *)arg1 ;
-(void)setReservePriceMet:(BOOL)arg1 ;
-(void)setUserIsBidding:(BOOL)arg1 ;
-(void)setUserIsWinning:(BOOL)arg1 ;
-(void)setBestOfferPrice:(CurrencyAmount *)arg1 ;
-(id)trackingParams;
-(NSString *)shippingCost;
-(NSString *)shippingCarrier;
-(void)setImageURLs:(NSDictionary *)arg1 ;
-(void)setTransactionPrice:(CurrencyAmount *)arg1 ;
-(void)setShippingCost:(NSString *)arg1 ;
-(void)setShippingCarrier:(NSString *)arg1 ;
-(void)setDisplayPrice:(CurrencyAmount *)arg1 ;
-(void)setIsEnded:(BOOL)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)title;
-(NSString *)location;
-(void)setLocation:(NSString *)arg1 ;
-(CurrencyAmount *)displayPrice;
-(void)setPending:(BOOL)arg1 ;
-(NSString *)statusTitle;
-(void)setStatusTitle:(NSString *)arg1 ;
-(id)imageURL;
-(NSString *)statusType;
-(BOOL)pending;
@end

