/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 12:03:42 AM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FE008365-307B-4CDF-8948-1B974F28A799/SolitaireFree.app/SolitaireFree
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

