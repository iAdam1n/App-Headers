/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:49:35 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/A861CD42-DC74-45D3-9030-D3B6F185E279/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Gumtree/Gumtree-Structs.h>
#import <Gumtree/OptimizelyAFURLConnectionOperation.h>

@protocol AFURLResponseSerialization;
@class OptimizelyAFHTTPResponseSerializer, NSError, NSHTTPURLResponse, NSRecursiveLock;

@interface OptimizelyAFHTTPRequestOperation : OptimizelyAFURLConnectionOperation {

	OptimizelyAFHTTPResponseSerializer*<AFURLResponseSerialization> _responseSerializer;
	id _responseObject;
	NSError* _responseSerializationError;

}

@property (nonatomic,retain) NSHTTPURLResponse * response; 
@property (nonatomic,retain) OptimizelyAFHTTPResponseSerializer*<AFURLResponseSerialization> responseSerializer;              //@synthesize responseSerializer=_responseSerializer - In the implementation block
@property (nonatomic,retain) id responseObject;                                                                               //@synthesize responseObject=_responseObject - In the implementation block
@property (nonatomic,retain) NSError * responseSerializationError;                                                            //@synthesize responseSerializationError=_responseSerializationError - In the implementation block
@property (nonatomic,retain) NSRecursiveLock * lock; 
+(BOOL)supportsSecureCoding;
-(void)setResponseSerializer:(OptimizelyAFHTTPResponseSerializer*<AFURLResponseSerialization>)arg1 ;
-(void)setResponseObject:(id)arg1 ;
-(void)setResponseSerializationError:(NSError *)arg1 ;
-(OptimizelyAFHTTPResponseSerializer*<AFURLResponseSerialization>)responseSerializer;
-(id)responseObject;
-(void)setCompletionBlockWithSuccess:(/*^block*/id)arg1 failure:(/*^block*/id)arg2 ;
-(NSError *)responseSerializationError;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithRequest:(id)arg1 ;
-(void)pause;
-(id)error;
@end

