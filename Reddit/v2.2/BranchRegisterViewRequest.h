/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:34:06 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/3DFA7E95-0979-4D86-B373-C986386EF259/Reddit.app/Reddit
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
-(void)makeRequest:(id)arg1 key:(id)arg2 callback:(/*^block*/id)arg3 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)callback;
-(void)setCallback:(id)arg1 ;
-(void)processResponse:(id)arg1 error:(id)arg2 ;
-(NSDictionary *)params;
-(void)setParams:(NSDictionary *)arg1 ;
@end
