/*
* This header is generated by classdump-dyld 1.0
* on Friday, September 2, 2016 at 11:33:35 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/B5820A38-022A-49BE-9A80-72DC946299E2/Reddit.app/Reddit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Reddit/BNCServerRequest.h>

@class NSDictionary;

@interface BranchRegisterViewRequest : BNCServerRequest {

	NSDictionary* _params;
	/*^block*/id _callback;

}

@property (nonatomic,retain) NSDictionary * params;              //@synthesize params=_params - In the implementation block
@property (nonatomic,copy) id callback;                          //@synthesize callback=_callback - In the implementation block
-(id)initWithParams:(id)arg1 andCallback:(/*^block*/id)arg2 ;
-(void)processResponse:(id)arg1 error:(id)arg2 ;
-(void)makeRequest:(id)arg1 key:(id)arg2 callback:(/*^block*/id)arg3 ;
-(void)setParams:(NSDictionary *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)callback;
-(void)setCallback:(id)arg1 ;
-(NSDictionary *)params;
@end
