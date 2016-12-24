/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:17 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBNetworkDispatch;
@class NSString;

@interface MNPaymentsGroupCommerceGraphRequest : NSObject {

	NSString* _currentUserId;
	id<FBNetworkDispatch> _networkDispatch;

}
-(id)initWithCurrentUserId:(id)arg1 networkDispatch:(id)arg2 ;
-(void)dismissPlatformContextBannerWithPlatformContextId:(id)arg1 succcessBlock:(/*^block*/id)arg2 failureBlock:(/*^block*/id)arg3 ;
-(void)markPlatformContextAsSoldWithPlatformContextId:(id)arg1 successBlock:(/*^block*/id)arg2 failureBlock:(/*^block*/id)arg3 ;
@end
