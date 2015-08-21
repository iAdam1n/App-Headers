/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:46 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


#import <Twitter/Twitter-Structs.h>
@class NSString, NSDate;

@interface TFNTwitterCommerceOffer : NSObject {

	NSString* _nonce;
	NSString* _cardUrl;
	NSString* _offerId;
	NSString* _imageUrl;
	NSString* _title;
	NSString* _offerMerchant;
	NSString* _offerDescription;
	NSString* _offerLegalTerms;
	NSDate* _firstViewedAt;
	long long _tweetId;
	unsigned long long _offerValid;
	unsigned long long _offerStatus;
	long long _expirationDateMillis;
	unsigned long long _supportedCardTypes;

}

@property (nonatomic,readonly) NSString * cardUrl;                                 //@synthesize cardUrl=_cardUrl - In the implementation block
@property (nonatomic,readonly) NSString * offerId;                                 //@synthesize offerId=_offerId - In the implementation block
@property (nonatomic,readonly) NSString * imageUrl;                                //@synthesize imageUrl=_imageUrl - In the implementation block
@property (nonatomic,readonly) NSString * title;                                   //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) NSString * offerMerchant;                           //@synthesize offerMerchant=_offerMerchant - In the implementation block
@property (nonatomic,readonly) NSString * offerDescription;                        //@synthesize offerDescription=_offerDescription - In the implementation block
@property (nonatomic,readonly) NSString * offerLegalTerms;                         //@synthesize offerLegalTerms=_offerLegalTerms - In the implementation block
@property (nonatomic,readonly) NSDate * firstViewedAt;                             //@synthesize firstViewedAt=_firstViewedAt - In the implementation block
@property (nonatomic,readonly) NSString * nonce; 
@property (nonatomic,readonly) long long tweetId;                                  //@synthesize tweetId=_tweetId - In the implementation block
@property (nonatomic,readonly) unsigned long long offerValid;                      //@synthesize offerValid=_offerValid - In the implementation block
@property (nonatomic,readonly) unsigned long long offerStatus;                     //@synthesize offerStatus=_offerStatus - In the implementation block
@property (nonatomic,readonly) long long expirationDateMillis;                     //@synthesize expirationDateMillis=_expirationDateMillis - In the implementation block
@property (nonatomic,readonly) unsigned long long supportedCardTypes;              //@synthesize supportedCardTypes=_supportedCardTypes - In the implementation block
-(id)initWithCardData:(id)arg1 tweetId:(long long)arg2 ;
-(NSString *)imageUrl;
-(unsigned long long)supportedCardTypes;
-(unsigned long long)offerStatus;
-(long long)tweetId;
-(NSString *)cardUrl;
-(NSString *)offerMerchant;
-(NSString *)offerDescription;
-(NSString *)offerLegalTerms;
-(long long)expirationDateMillis;
-(unsigned long long)offerValid;
-(NSDate *)firstViewedAt;
-(NSString *)offerId;
-(id)initCardUrl:(id)arg1 offerId:(id)arg2 imageUrl:(id)arg3 title:(id)arg4 offerMerchant:(id)arg5 offerDescription:(id)arg6 offerLegalTerms:(id)arg7 tweetId:(long long)arg8 ;
-(id)initWithOffer:(id)arg1 ;
-(void)updateWithGetOfferDetailsDictionary:(id)arg1 ;
-(NSString *)title;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)nonce;
@end

