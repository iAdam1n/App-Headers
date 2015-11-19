/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 5:05:22 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/BE5DA1E5-E5C1-4952-A4BE-28BA22319130/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class NSNumber, NSArray, ECBid, ECAd;

@interface ECBiddingInfo : NSObject {

	NSNumber* _allowBidding;
	NSNumber* _minimumBidAmount;
	NSNumber* _numberOfBids;
	NSArray* _bids;
	NSArray* _highestBids;
	ECBid* _currentUserBid;
	ECAd* _ad;

}

@property (nonatomic,retain) NSNumber * allowBidding;                  //@synthesize allowBidding=_allowBidding - In the implementation block
@property (nonatomic,retain) NSNumber * minimumBidAmount;              //@synthesize minimumBidAmount=_minimumBidAmount - In the implementation block
@property (nonatomic,retain) NSNumber * numberOfBids;                  //@synthesize numberOfBids=_numberOfBids - In the implementation block
@property (nonatomic,retain) NSArray * bids;                           //@synthesize bids=_bids - In the implementation block
@property (nonatomic,retain) NSArray * highestBids;                    //@synthesize highestBids=_highestBids - In the implementation block
@property (nonatomic,retain) ECBid * currentUserBid;                   //@synthesize currentUserBid=_currentUserBid - In the implementation block
@property (assign,nonatomic,__weak) ECAd * ad;                         //@synthesize ad=_ad - In the implementation block
-(void)setAd:(ECAd *)arg1 ;
-(NSArray *)highestBids;
-(NSNumber *)allowBidding;
-(NSNumber *)minimumBidAmount;
-(BOOL)hasBidDetails;
-(NSNumber *)numberOfBids;
-(void)setAllowBidding:(NSNumber *)arg1 ;
-(ECBid *)currentUserBid;
-(id)userBidInHighestBids;
-(BOOL)currentUserHasTopBid;
-(NSArray *)bids;
-(id)userBidInBids;
-(id)userBidInBids:(id)arg1 ;
-(void)setNumberOfBids:(NSNumber *)arg1 ;
-(void)setCurrentUserBid:(ECBid *)arg1 ;
-(void)setHighestBids:(NSArray *)arg1 ;
-(void)setBids:(NSArray *)arg1 ;
-(void)setMinimumBidAmount:(NSNumber *)arg1 ;
-(id)description;
-(id)debugDescription;
-(ECAd *)ad;
@end

