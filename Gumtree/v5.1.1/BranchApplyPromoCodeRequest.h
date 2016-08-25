/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:49:34 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/A861CD42-DC74-45D3-9030-D3B6F185E279/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Gumtree/BNCServerRequest.h>

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
-(BOOL)useOld;
-(void)setUseOld:(BOOL)arg1 ;
-(void)makeRequest:(id)arg1 key:(id)arg2 callback:(/*^block*/id)arg3 ;
-(void)processResponse:(id)arg1 error:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)code;
-(id)callback;
-(void)setCallback:(id)arg1 ;
-(void)setCode:(NSString *)arg1 ;
@end

