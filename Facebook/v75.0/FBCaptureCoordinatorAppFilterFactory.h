/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:21 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBCaptureCoordinatorFilterFactoryProtocol.h>
#import <Facebook/FBCaptureCoordinatorFilterConfiguringPlugin.h>

@protocol FBFilterAssetManaging;
@class FBDictionaryRegistry, NSString;

@interface FBCaptureCoordinatorAppFilterFactory : NSObject <FBCaptureCoordinatorFilterFactoryProtocol, FBCaptureCoordinatorFilterConfiguringPlugin> {

	id<FBFilterAssetManaging> _assetManager;
	FBDictionaryRegistry* _registry;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)captureCoordinatorFilterProviders;
-(id)filterForName:(id)arg1 config:(id)arg2 ;
-(id)initWithRegistry:(id)arg1 assetManager:(id)arg2 ;
@end
