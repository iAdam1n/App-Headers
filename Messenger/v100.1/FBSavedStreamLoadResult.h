/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:25 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBStreamLoadResult.h>

@class FBMemUserSavedItemsConnection;

@interface FBSavedStreamLoadResult : FBStreamLoadResult {

	FBMemUserSavedItemsConnection* _connectionPage;

}

@property (nonatomic,readonly) FBMemUserSavedItemsConnection * connectionPage;              //@synthesize connectionPage=_connectionPage - In the implementation block
-(FBMemUserSavedItemsConnection *)connectionPage;
-(id)initWithStartCursor:(id)arg1 endCursor:(id)arg2 hasNextPage:(BOOL)arg3 connectionPage:(id)arg4 ;
@end
