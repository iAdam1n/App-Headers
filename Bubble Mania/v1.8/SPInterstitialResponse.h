/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:58:14 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/0CF72264-5488-4FD5-B700-EF786D177983/BubbleMania.app/BubbleMania
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSURLResponse, NSError;

@interface SPInterstitialResponse : NSObject {

	NSArray* _orderedOffers;
	NSURLResponse* _URLResponse;
	id _responseJSON;
	NSError* _connectionError;
	NSError* _invalidJSONResponseError;

}

@property (nonatomic,readonly) BOOL isSuccessResponse; 
@property (nonatomic,readonly) NSError * error; 
@property (nonatomic,readonly) NSArray * orderedOffers; 
@property (nonatomic,retain) NSURLResponse * URLResponse;                     //@synthesize URLResponse=_URLResponse - In the implementation block
@property (nonatomic,retain) id responseJSON;                                 //@synthesize responseJSON=_responseJSON - In the implementation block
@property (nonatomic,retain) NSError * connectionError;                       //@synthesize connectionError=_connectionError - In the implementation block
@property (nonatomic,retain) NSError * invalidJSONResponseError;              //@synthesize invalidJSONResponseError=_invalidJSONResponseError - In the implementation block
+(id)responseWithURLResponse:(id)arg1 data:(id)arg2 connectionError:(id)arg3 ;
-(BOOL)isSuccessResponse;
-(NSArray *)orderedOffers;
-(id)initWithURLResponse:(id)arg1 data:(id)arg2 connectionError:(id)arg3 ;
-(void)_parseResponseWithData:(id)arg1 ;
-(void)setResponseJSON:(id)arg1 ;
-(void)setInvalidJSONResponseError:(NSError *)arg1 ;
-(NSError *)invalidJSONResponseError;
-(BOOL)responseHasExpectedStructure;
-(id)responseJSON;
-(void)setURLResponse:(NSURLResponse *)arg1 ;
-(id)errorWithCode:(long long)arg1 description:(id)arg2 underlyingError:(id)arg3 ;
-(void)setConnectionError:(NSError *)arg1 ;
-(NSError *)connectionError;
-(id)responseItems;
-(NSURLResponse *)URLResponse;
-(NSError *)error;
-(id)errorWithCode:(long long)arg1 description:(id)arg2 ;
@end
