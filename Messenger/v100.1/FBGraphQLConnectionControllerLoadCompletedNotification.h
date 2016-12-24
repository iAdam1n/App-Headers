/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:28 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol FBNetworkerRequestStatus;
@class FBGraphQLConnectionLoadResult, NSString, FBGraphQLConnectionLoadLocation, NSArray, NSDictionary;

@interface FBGraphQLConnectionControllerLoadCompletedNotification : FBValueObject <NSCopying> {

	FBGraphQLConnectionLoadResult* _result;
	NSString* _networkLoadUUID;
	FBGraphQLConnectionLoadLocation* _location;
	unsigned long long _order;
	NSArray* _limits;
	unsigned long long _totalEdgeCount;
	id<FBNetworkerRequestStatus> _networkerStatus;
	NSDictionary* _userInfo;

}

@property (nonatomic,copy,readonly) FBGraphQLConnectionLoadResult * result;                  //@synthesize result=_result - In the implementation block
@property (nonatomic,copy,readonly) NSString * networkLoadUUID;                              //@synthesize networkLoadUUID=_networkLoadUUID - In the implementation block
@property (nonatomic,copy,readonly) FBGraphQLConnectionLoadLocation * location;              //@synthesize location=_location - In the implementation block
@property (nonatomic,readonly) unsigned long long order;                                     //@synthesize order=_order - In the implementation block
@property (nonatomic,copy,readonly) NSArray * limits;                                        //@synthesize limits=_limits - In the implementation block
@property (nonatomic,readonly) unsigned long long totalEdgeCount;                            //@synthesize totalEdgeCount=_totalEdgeCount - In the implementation block
@property (nonatomic,readonly) id<FBNetworkerRequestStatus> networkerStatus;                 //@synthesize networkerStatus=_networkerStatus - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * userInfo;                                 //@synthesize userInfo=_userInfo - In the implementation block
-(NSString *)networkLoadUUID;
-(id)initWithResult:(id)arg1 networkLoadUUID:(id)arg2 location:(id)arg3 order:(unsigned long long)arg4 limits:(id)arg5 totalEdgeCount:(unsigned long long)arg6 networkerStatus:(id)arg7 userInfo:(id)arg8 ;
-(unsigned long long)totalEdgeCount;
-(id<FBNetworkerRequestStatus>)networkerStatus;
-(NSArray *)limits;
-(NSDictionary *)userInfo;
-(FBGraphQLConnectionLoadLocation *)location;
-(unsigned long long)order;
-(FBGraphQLConnectionLoadResult *)result;
@end
