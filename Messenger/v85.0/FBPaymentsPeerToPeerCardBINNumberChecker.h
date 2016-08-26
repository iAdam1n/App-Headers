/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:24 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBNetworkDispatch;
@class NSMutableDictionary, FBSimpleNetworkerRequest, NSString;

@interface FBPaymentsPeerToPeerCardBINNumberChecker : NSObject {

	id<FBNetworkDispatch> _networkDispatcher;
	NSMutableDictionary* _lastCheckedBinNumberResults;
	FBSimpleNetworkerRequest* _ongoingNetworkRequest;
	NSString* _binNumberOfOngoingRequest;

}
-(id)initWithNetworkDispatcher:(id)arg1 ;
-(void)_handleBinCheckResultForBinNumber:(id)arg1 completionBlock:(/*^block*/id)arg2 success:(BOOL)arg3 error:(id)arg4 ;
-(void)_cleanupBinCheckStatus;
-(void)checkCardBinNumber:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)cancelBinCheck;
@end
