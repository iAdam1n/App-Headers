/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 5:05:16 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/BE5DA1E5-E5C1-4952-A4BE-28BA22319130/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Gumtree/Gumtree-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDate;

@interface ECPaymentMethod : NSObject <NSCopying> {

	BOOL _ccSaveForFuture;
	NSString* _identifier;
	long long _type;
	NSString* _name;
	NSString* _ccName;
	NSString* _ccNumber;
	NSDate* _ccExpire;
	NSString* _ccVerificationNumber;
	long long _status;
	NSString* _provider;
	NSString* _transactionCode;
	NSString* _apiType;

}

@property (nonatomic,retain) NSString * identifier;                        //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) long long type;                               //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) NSString * name;                              //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSString * ccFlagName; 
@property (nonatomic,retain) NSString * ccName;                            //@synthesize ccName=_ccName - In the implementation block
@property (nonatomic,retain) NSString * ccNumber;                          //@synthesize ccNumber=_ccNumber - In the implementation block
@property (nonatomic,retain) NSDate * ccExpire;                            //@synthesize ccExpire=_ccExpire - In the implementation block
@property (nonatomic,retain) NSString * ccVerificationNumber;              //@synthesize ccVerificationNumber=_ccVerificationNumber - In the implementation block
@property (assign,nonatomic) BOOL ccSaveForFuture;                         //@synthesize ccSaveForFuture=_ccSaveForFuture - In the implementation block
@property (assign,nonatomic) long long status;                             //@synthesize status=_status - In the implementation block
@property (nonatomic,retain) NSString * provider;                          //@synthesize provider=_provider - In the implementation block
@property (nonatomic,retain) NSString * transactionCode;                   //@synthesize transactionCode=_transactionCode - In the implementation block
@property (retain) NSString * apiType;                                     //@synthesize apiType=_apiType - In the implementation block
+(id)fakePayPalPaymentMethodIdentifier;
+(id)fakePayPalPaymentMethod;
+(long long)typeWithAPIType:(id)arg1 ;
+(id)ccExpireDateFormatter;
+(long long)statusWithAPIStatus:(id)arg1 ;
-(id)description;
-(NSString *)ccName;
-(void)setCcName:(NSString *)arg1 ;
-(NSString *)ccNumber;
-(void)setCcNumber:(NSString *)arg1 ;
-(NSDate *)ccExpire;
-(void)setCcExpire:(NSDate *)arg1 ;
-(NSString *)ccVerificationNumber;
-(void)setCcVerificationNumber:(NSString *)arg1 ;
-(BOOL)ccSaveForFuture;
-(void)setCcSaveForFuture:(BOOL)arg1 ;
-(NSString *)transactionCode;
-(void)setTransactionCode:(NSString *)arg1 ;
-(id)apiPaymentMethod;
-(void)setApiType:(NSString *)arg1 ;
-(NSString *)apiType;
-(id)ccExpireString;
-(id)initWithAPIPaymentMethod:(id)arg1 ;
-(id)paymentMethodTypeString;
-(BOOL)isEqualToPaymentMethod:(id)arg1 ;
-(NSString *)ccFlagName;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(NSString *)identifier;
-(void)setType:(long long)arg1 ;
-(long long)type;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(long long)status;
-(void)setStatus:(long long)arg1 ;
-(NSString *)provider;
-(void)setProvider:(NSString *)arg1 ;
@end

