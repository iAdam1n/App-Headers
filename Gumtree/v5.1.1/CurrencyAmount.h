/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:49:35 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/A861CD42-DC74-45D3-9030-D3B6F185E279/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCoding.h>

@class NSDecimalNumber, NSString;

@interface CurrencyAmount : NSObject <NSCoding> {

	NSDecimalNumber* _amount;
	NSString* _currencyID;

}

@property (nonatomic,retain) NSDecimalNumber * amount;              //@synthesize amount=_amount - In the implementation block
@property (nonatomic,retain) NSString * currencyID;                 //@synthesize currencyID=_currencyID - In the implementation block
-(void)setCurrencyID:(NSString *)arg1 ;
-(NSString *)currencyID;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setAmount:(NSDecimalNumber *)arg1 ;
-(NSDecimalNumber *)amount;
@end
