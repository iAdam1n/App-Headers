/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 10:10:00 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/4C83B32D-E9D7-434B-B0B8-8A6C2C13527D/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SportyTrader/FBSDKBridgeAPIProtocol.h>

@class FBSDKBridgeAPIProtocolNativeV1, NSString;

@interface FBSDKBridgeAPIProtocolWebV2 : NSObject <FBSDKBridgeAPIProtocol> {

	FBSDKBridgeAPIProtocolNativeV1* _nativeProtocol;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)requestURLWithActionID:(id)arg1 scheme:(id)arg2 methodName:(id)arg3 methodVersion:(id)arg4 parameters:(id)arg5 error:(id*)arg6 ;
-(id)_redirectURLWithActionID:(id)arg1 methodName:(id)arg2 error:(id*)arg3 ;
-(id)_requestURLForDialogConfiguration:(id)arg1 error:(id*)arg2 ;
-(id)responseParametersForActionID:(id)arg1 queryParameters:(id)arg2 cancelled:(BOOL*)arg3 error:(id*)arg4 ;
-(id)init;
@end
