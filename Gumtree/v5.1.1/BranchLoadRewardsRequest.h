/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:49:34 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/A861CD42-DC74-45D3-9030-D3B6F185E279/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Gumtree/BNCServerRequest.h>

@interface BranchLoadRewardsRequest : BNCServerRequest {

	/*^block*/id _callback;

}

@property (nonatomic,copy) id callback;              //@synthesize callback=_callback - In the implementation block
-(void)makeRequest:(id)arg1 key:(id)arg2 callback:(/*^block*/id)arg3 ;
-(void)processResponse:(id)arg1 error:(id)arg2 ;
-(id)initWithCallback:(/*^block*/id)arg1 ;
-(id)callback;
-(void)setCallback:(id)arg1 ;
@end

