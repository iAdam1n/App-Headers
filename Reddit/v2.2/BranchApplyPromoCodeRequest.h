/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:34:07 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/3DFA7E95-0979-4D86-B373-C986386EF259/Reddit.app/Reddit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Reddit/BNCServerRequest.h>

@class NSString;

@interface BranchApplyPromoCodeRequest : BNCServerRequest {

	BOOL _useOld;
	NSString* _code;
	/*^block*/id _callback;

}

@property (nonatomic,retain) NSString * code;              //@synthesize code=_code - In the implementation block
@property (nonatomic,copy) id callback;                    //@synthesize callback=_callback - In the implementation block
@property (assign,nonatomic) BOOL useOld;                  //@synthesize useOld=_useOld - In the implementation block
-(id)initWithCode:(id)arg1 useOld:(BOOL)arg2 callback:(/*^block*/id)arg3 ;
-(void)makeRequest:(id)arg1 key:(id)arg2 callback:(/*^block*/id)arg3 ;
-(BOOL)useOld;
-(void)setUseOld:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)code;
-(id)callback;
-(void)setCallback:(id)arg1 ;
-(void)setCode:(NSString *)arg1 ;
-(void)processResponse:(id)arg1 error:(id)arg2 ;
@end
