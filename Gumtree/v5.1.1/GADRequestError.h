/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:49:35 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/A861CD42-DC74-45D3-9030-D3B6F185E279/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSError.h>

@interface GADRequestError : NSError
+(id)errorWithCode:(long long)arg1 customMessage:(id)arg2 ;
+(id)errorWithCode:(long long)arg1 request:(id)arg2 HTTPStatusCode:(long long)arg3 customMessage:(id)arg4 underlyingError:(id)arg5 ;
+(id)errorWithCode:(long long)arg1 request:(id)arg2 HTTPStatusCode:(long long)arg3 customMessage:(id)arg4 ;
+(id)errorWithCode:(long long)arg1 request:(id)arg2 ;
+(id)errorWithCode:(long long)arg1 request:(id)arg2 HTTPStatusCode:(long long)arg3 ;
+(id)errorWithCode:(long long)arg1 ;
+(id)errorWithCode:(long long)arg1 underlyingError:(id)arg2 ;
-(id)initWithCode:(long long)arg1 request:(id)arg2 HTTPStatusCode:(long long)arg3 customMessage:(id)arg4 underlyingError:(id)arg5 ;
-(id)initWithDomain:(id)arg1 code:(long long)arg2 userInfo:(id)arg3 ;
-(id)error;
@end

