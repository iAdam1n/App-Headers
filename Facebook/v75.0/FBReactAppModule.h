/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:09 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBNativeAppModule_DO_NOT_USE_OR_YOU_WILL_BE_FIRED.h>
#import <Facebook/FBAppServiceConfiguringModule.h>
#import <Facebook/FBURLSegueConfiguringModule.h>

@class FBExceptionHandler, NSString;

@interface FBReactAppModule : FBNativeAppModule_DO_NOT_USE_OR_YOU_WILL_BE_FIRED <FBAppServiceConfiguringModule, FBURLSegueConfiguringModule> {

	FBExceptionHandler* _exceptionHandler;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)appServicesWithSession:(id)arg1 ;
+(id)URLSegues:(id)arg1 ;
+(id)navigationOptionsForRoute:(id)arg1 withSession:(id)arg2 ;
-(void)cleanupSession;
-(id)exceptionHandler;
-(id)ID;
-(void)setExceptionHandler:(id)arg1 ;
@end
