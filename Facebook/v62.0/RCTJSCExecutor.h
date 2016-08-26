/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:45 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/RCTJavaScriptExecutor.h>

@class NSThread, RCTPerformanceLogger, RCTJavaScriptContext, RCTBridge, NSString;

@interface RCTJSCExecutor : NSObject <RCTJavaScriptExecutor> {

	BOOL _useCustomJSCLibrary;
	NSThread* _javaScriptThread;
	RCTPerformanceLogger* _performanceLogger;
	RCTJSCWrapper* _jscWrapper;
	RCTJavaScriptContext* _context;
	RandomAccessBundleData* _randomAccessBundle;
	OpaqueJSValueRef _batchedBridgeRef;
	BOOL _valid;
	RCTBridge* _bridge;

}

@property (nonatomic,readonly) BOOL useCustomJSCLibrary;                              //@synthesize useCustomJSCLibrary=_useCustomJSCLibrary - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,__weak,readonly) RCTBridge * bridge;                             //@synthesize bridge=_bridge - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> methodQueue; 
@property (getter=isValid,nonatomic,readonly) BOOL valid;                             //@synthesize valid=_valid - In the implementation block
+(id)moduleName;
+(id)initializedExecutorWithContextProvider:(id)arg1 applicationScript:(id)arg2 sourceURL:(id)arg3 JSContext:(id*)arg4 error:(id*)arg5 ;
+(void)runRunLoopThread;
+(id)__rct_export__9990;
+(void)load;
-(id)initWithUseCustomJSCLibrary:(BOOL)arg1 ;
-(void)callFunctionOnModule:(id)arg1 method:(id)arg2 arguments:(id)arg3 jsValueCallback:(/*^block*/id)arg4 ;
-(id)errorForJSError:(id)arg1 ;
-(BOOL)useCustomJSCLibrary;
-(id)initWithJSContextData:(const RCTJSContextData*)arg1 ;
-(BOOL)_synchronouslyExecuteApplicationScript:(id)arg1 sourceURL:(id)arg2 JSContext:(id)arg3 error:(id*)arg4 ;
-(void)executeBlockOnJavaScriptQueue:(/*^block*/id)arg1 ;
-(void)_executeJSCall:(id)arg1 arguments:(id)arg2 unwrapResult:(BOOL)arg3 callback:(/*^block*/id)arg4 ;
-(void)_callFunctionOnModule:(id)arg1 method:(id)arg2 arguments:(id)arg3 flushQueue:(BOOL)arg4 unwrapResult:(BOOL)arg5 callback:(/*^block*/id)arg6 ;
-(void)flushedQueue:(/*^block*/id)arg1 ;
-(void)callFunctionOnModule:(id)arg1 method:(id)arg2 arguments:(id)arg3 callback:(/*^block*/id)arg4 ;
-(void)invokeCallbackID:(id)arg1 arguments:(id)arg2 callback:(/*^block*/id)arg3 ;
-(void)executeApplicationScript:(id)arg1 sourceURL:(id)arg2 onComplete:(/*^block*/id)arg3 ;
-(void)injectJSONText:(id)arg1 asGlobalObjectNamed:(id)arg2 callback:(/*^block*/id)arg3 ;
-(void)executeAsyncBlockOnJavaScriptQueue:(/*^block*/id)arg1 ;
-(void)toggleProfilingFlag:(id)arg1 ;
-(void)_nativeRequire:(id)arg1 ;
-(void)setContextName:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)invalidate;
-(BOOL)isValid;
-(id)context;
-(void)setUp;
-(RCTBridge *)bridge;
-(void)setBridge:(RCTBridge *)arg1 ;
@end
