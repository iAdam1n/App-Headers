/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:57 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class NSString;

@interface FBAppBridgeScheme : NSObject {

	NSString* _version;

}

@property (nonatomic,copy) NSString * version;              //@synthesize version=_version - In the implementation block
+(id)_validAppBridgeSchemeForMethod:(id)arg1 minVersion:(id)arg2 ;
+(id)_URLForMethod:(id)arg1 queryParams:(id)arg2 schemeVersion:(id)arg3 version:(id)arg4 ;
+(id)_validAppBridgeSchemeWithConfig:(id)arg1 forMethod:(id)arg2 ;
+(id)_installedAppBridgeSchemeForMethod:(id)arg1 minVersion:(id)arg2 ;
+(id)bridgeSchemeForFBAppForShareDialogParams:(id)arg1 ;
+(id)bridgeSchemeForFBAppForShareDialogPhotos;
+(id)bridgeSchemeForFBAppForOpenGraphActionShareDialogParams:(id)arg1 ;
+(id)bridgeSchemeForFBMessengerForShareDialogParams:(id)arg1 ;
+(id)bridgeSchemeForFBMessengerForOpenGraphActionShareDialogParams:(id)arg1 ;
+(id)bridgeSchemeForFBMessengerForShareDialogPhotos;
+(id)bridgeSchemeForFBAppForLike;
+(BOOL)isSupportedScheme:(id)arg1 ;
+(id)schemePrefix;
+(id)bridgeVersions;
+(void)updateDialogConfigs;
+(void)initialize;
-(id)URLForMethod:(id)arg1 queryParams:(id)arg2 ;
-(void)dealloc;
-(void)setVersion:(NSString *)arg1 ;
-(NSString *)version;
-(id)initWithVersion:(id)arg1 ;
@end

