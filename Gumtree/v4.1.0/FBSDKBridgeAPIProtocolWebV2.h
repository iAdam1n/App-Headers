/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 5:05:11 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/BE5DA1E5-E5C1-4952-A4BE-28BA22319130/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Gumtree/FBSDKBridgeAPIProtocol.h>

@class FBSDKBridgeAPIProtocolNativeV1, NSString;

@interface FBSDKBridgeAPIProtocolWebV2 : NSObject <FBSDKBridgeAPIProtocol> {

	FBSDKBridgeAPIProtocolNativeV1* _nativeProtocol;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)requestURLWithActionID:(id)arg1 scheme:(id)arg2 methodName:(id)arg3 methodVersion:(id)arg4 parameters:(id)arg5 error:(id*)arg6 ;
-(id)responseParametersForActionID:(id)arg1 queryParameters:(id)arg2 cancelled:(BOOL*)arg3 error:(id*)arg4 ;
-(id)_redirectURLWithActionID:(id)arg1 methodName:(id)arg2 error:(id*)arg3 ;
-(id)_requestURLForDialogConfiguration:(id)arg1 error:(id*)arg2 ;
-(id)init;
@end
