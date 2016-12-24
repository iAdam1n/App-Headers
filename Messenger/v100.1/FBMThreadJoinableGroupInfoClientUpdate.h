/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:34 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface FBMThreadJoinableGroupInfoClientUpdate : NSObject <NSCoding, NSCopying> {

	unsigned long long _subtype;
	unsigned long long _updateJoinableMode_joinableMode;
	unsigned long long _updateApprovalMode_approvalMode;
	NSString* _updatePendingApprovalRequestsQueue_userId;
	long long _updatePendingApprovalRequestsQueue_pendingApprovalAction;

}
+(id)updatePendingApprovalRequestsQueueWithUserId:(id)arg1 pendingApprovalAction:(long long)arg2 ;
+(id)updateApprovalModeWithApprovalMode:(unsigned long long)arg1 ;
+(id)updateJoinableModeWithJoinableMode:(unsigned long long)arg1 ;
-(void)matchUpdateJoinableMode:(/*^block*/id)arg1 updateApprovalMode:(/*^block*/id)arg2 updatePendingApprovalRequestsQueue:(/*^block*/id)arg3 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
