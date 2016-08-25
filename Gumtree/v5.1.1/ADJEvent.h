/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:49:34 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/A861CD42-DC74-45D3-9030-D3B6F185E279/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Gumtree/Gumtree-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol ADJLogger;
@class NSString, NSNumber, NSData, NSMutableDictionary, NSDictionary;

@interface ADJEvent : NSObject <NSCopying> {

	BOOL _emptyReceipt;
	NSString* _eventToken;
	NSNumber* _revenue;
	NSString* _transactionId;
	NSString* _currency;
	NSData* _receipt;
	id<ADJLogger> _logger;
	NSMutableDictionary* _callbackMutableParameters;
	NSMutableDictionary* _partnerMutableParameters;

}

@property (nonatomic,retain) id<ADJLogger> logger;                                         //@synthesize logger=_logger - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * callbackMutableParameters;              //@synthesize callbackMutableParameters=_callbackMutableParameters - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * partnerMutableParameters;               //@synthesize partnerMutableParameters=_partnerMutableParameters - In the implementation block
@property (nonatomic,copy,readonly) NSString * eventToken;                                 //@synthesize eventToken=_eventToken - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * revenue;                                    //@synthesize revenue=_revenue - In the implementation block
@property (nonatomic,readonly) NSDictionary * callbackParameters; 
@property (nonatomic,readonly) NSDictionary * partnerParameters; 
@property (nonatomic,copy,readonly) NSString * transactionId;                              //@synthesize transactionId=_transactionId - In the implementation block
@property (nonatomic,copy,readonly) NSString * currency;                                   //@synthesize currency=_currency - In the implementation block
@property (nonatomic,copy,readonly) NSData * receipt;                                      //@synthesize receipt=_receipt - In the implementation block
@property (nonatomic,readonly) BOOL emptyReceipt;                                          //@synthesize emptyReceipt=_emptyReceipt - In the implementation block
+(id)eventWithEventToken:(id)arg1 ;
-(id)initWithEventToken:(id)arg1 ;
-(BOOL)checkEventToken:(id)arg1 ;
-(BOOL)isValidParameter:(id)arg1 attributeType:(id)arg2 parameterName:(id)arg3 ;
-(NSMutableDictionary *)callbackMutableParameters;
-(void)setCallbackMutableParameters:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)partnerMutableParameters;
-(void)setPartnerMutableParameters:(NSMutableDictionary *)arg1 ;
-(BOOL)checkRevenue:(id)arg1 currency:(id)arg2 ;
-(BOOL)checkReceipt:(id)arg1 transactionId:(id)arg2 ;
-(NSNumber *)revenue;
-(void)setRevenue:(double)arg1 currency:(id)arg2 ;
-(BOOL)emptyReceipt;
-(NSData *)receipt;
-(void)setReceipt:(id)arg1 transactionId:(id)arg2 ;
-(void)addCallbackParameter:(id)arg1 value:(id)arg2 ;
-(void)addPartnerParameter:(id)arg1 value:(id)arg2 ;
-(NSDictionary *)callbackParameters;
-(NSDictionary *)partnerParameters;
-(NSString *)eventToken;
-(BOOL)isValid;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)currency;
-(id<ADJLogger>)logger;
-(void)setLogger:(id<ADJLogger>)arg1 ;
-(void)setTransactionId:(NSString *)arg1 ;
-(NSString *)transactionId;
@end

