/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:49:35 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/A861CD42-DC74-45D3-9030-D3B6F185E279/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Gumtree/ECAPIRequestBase.h>

@class NSString;

@interface ECAPIUserResetPasswordGetRequest : ECAPIRequestBase {

	NSString* _userID;
	NSString* _signature;
	NSString* _token;

}

@property (nonatomic,readonly) NSString * userID;                 //@synthesize userID=_userID - In the implementation block
@property (nonatomic,readonly) NSString * signature;              //@synthesize signature=_signature - In the implementation block
@property (nonatomic,readonly) NSString * token;                  //@synthesize token=_token - In the implementation block
-(id)initWithUserID:(id)arg1 signature:(id)arg2 token:(id)arg3 ;
-(NSString *)token;
-(id)command;
-(NSString *)signature;
-(NSString *)userID;
@end
