/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:16 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBStreamLoadResult.h>

@class FBMemFriendingPossibilitiesConnection;

@interface FBMemFriendingPossibilitiesStreamLoadResult : FBStreamLoadResult {

	FBMemFriendingPossibilitiesConnection* _connectionPage;

}

@property (nonatomic,readonly) FBMemFriendingPossibilitiesConnection * connectionPage;              //@synthesize connectionPage=_connectionPage - In the implementation block
-(FBMemFriendingPossibilitiesConnection *)connectionPage;
-(id)initWithStartCursor:(id)arg1 endCursor:(id)arg2 hasNextPage:(BOOL)arg3 connectionPage:(id)arg4 ;
@end
