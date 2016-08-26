/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:37 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FBProfServicesBookingDataModel;

@interface FBMThreadActiveBookingRequests : FBValueObject <NSCoding, NSCopying> {

	unsigned long long _pendingRequestsCount;
	unsigned long long _confirmedRequestsCount;
	unsigned long long _requestedRequestsCount;
	FBProfServicesBookingDataModel* _pendingRequest;
	FBProfServicesBookingDataModel* _confirmedRequest;
	FBProfServicesBookingDataModel* _requestedRequest;

}

@property (nonatomic,readonly) unsigned long long pendingRequestsCount;                             //@synthesize pendingRequestsCount=_pendingRequestsCount - In the implementation block
@property (nonatomic,readonly) unsigned long long confirmedRequestsCount;                           //@synthesize confirmedRequestsCount=_confirmedRequestsCount - In the implementation block
@property (nonatomic,readonly) unsigned long long requestedRequestsCount;                           //@synthesize requestedRequestsCount=_requestedRequestsCount - In the implementation block
@property (nonatomic,copy,readonly) FBProfServicesBookingDataModel * pendingRequest;                //@synthesize pendingRequest=_pendingRequest - In the implementation block
@property (nonatomic,copy,readonly) FBProfServicesBookingDataModel * confirmedRequest;              //@synthesize confirmedRequest=_confirmedRequest - In the implementation block
@property (nonatomic,copy,readonly) FBProfServicesBookingDataModel * requestedRequest;              //@synthesize requestedRequest=_requestedRequest - In the implementation block
-(id)initWithPendingRequestsCount:(unsigned long long)arg1 confirmedRequestsCount:(unsigned long long)arg2 requestedRequestsCount:(unsigned long long)arg3 pendingRequest:(id)arg4 confirmedRequest:(id)arg5 requestedRequest:(id)arg6 ;
-(unsigned long long)pendingRequestsCount;
-(unsigned long long)confirmedRequestsCount;
-(unsigned long long)requestedRequestsCount;
-(FBProfServicesBookingDataModel *)pendingRequest;
-(FBProfServicesBookingDataModel *)confirmedRequest;
-(FBProfServicesBookingDataModel *)requestedRequest;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end
