/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:49:34 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/A861CD42-DC74-45D3-9030-D3B6F185E279/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Gumtree/BNCServerRequest.h>

@class NSString;

@interface BranchCreditHistoryRequest : BNCServerRequest {

	/*^block*/id _callback;
	NSString* _bucket;
	NSString* _creditTransactionId;
	long long _length;
	unsigned long long _order;

}

@property (nonatomic,copy) id callback;                                   //@synthesize callback=_callback - In the implementation block
@property (nonatomic,retain) NSString * bucket;                           //@synthesize bucket=_bucket - In the implementation block
@property (nonatomic,retain) NSString * creditTransactionId;              //@synthesize creditTransactionId=_creditTransactionId - In the implementation block
@property (assign,nonatomic) long long length;                            //@synthesize length=_length - In the implementation block
@property (assign,nonatomic) unsigned long long order;                    //@synthesize order=_order - In the implementation block
-(id)initWithBucket:(id)arg1 creditTransactionId:(id)arg2 length:(long long)arg3 order:(unsigned long long)arg4 callback:(/*^block*/id)arg5 ;
-(NSString *)creditTransactionId;
-(void)setCreditTransactionId:(NSString *)arg1 ;
-(void)makeRequest:(id)arg1 key:(id)arg2 callback:(/*^block*/id)arg3 ;
-(void)processResponse:(id)arg1 error:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(long long)length;
-(void)setLength:(long long)arg1 ;
-(void)setOrder:(unsigned long long)arg1 ;
-(unsigned long long)order;
-(id)callback;
-(void)setCallback:(id)arg1 ;
-(void)setBucket:(NSString *)arg1 ;
-(NSString *)bucket;
@end

