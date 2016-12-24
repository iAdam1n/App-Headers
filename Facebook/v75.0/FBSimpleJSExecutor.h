/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:17 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBJSExecutor.h>
#import <Facebook/FBInvalidating.h>

@protocol FBSimpleJSUnderlyingExecutor;
@class NSString;

@interface FBSimpleJSExecutor : NSObject <FBJSExecutor, FBInvalidating> {

	id<FBSimpleJSUnderlyingExecutor> _underlyingExecutor;
	FBJSExecutorPerformanceStatistics _performanceStatistics;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=isValid,nonatomic,readonly) BOOL valid; 
+(id)localBundleExecutorWithSpecifier:(id)arg1 JSContextProvider:(id)arg2 ;
+(void)packagerExecutorWithSpecifier:(id)arg1 JSContextProvider:(id)arg2 callback:(/*^block*/id)arg3 queue:(id)arg4 ;
+(void)checkPackagerStatusWithCallback:(/*^block*/id)arg1 queue:(id)arg2 ;
-(id)callFunctionOnModule:(id)arg1 method:(id)arg2 arguments:(id)arg3 error:(id*)arg4 ;
-(id)executorCreationError;
-(id)initWithUnderlyingExecutor:(id)arg1 performanceStatistics:(FBJSExecutorPerformanceStatistics)arg2 ;
-(FBJSExecutorPerformanceStatistics)performanceStatistics;
-(void)invalidate;
-(BOOL)isValid;
@end
