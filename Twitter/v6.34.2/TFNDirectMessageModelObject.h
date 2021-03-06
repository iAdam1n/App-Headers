/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:44 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class NSThread;

@interface TFNDirectMessageModelObject : NSObject {

	id _contextKey;
	NSThread* _contextKeyRegisteringThread;

}

@property (nonatomic,readonly) id<TFNDirectMessageContext> context; 
@property (assign,nonatomic,__weak) id contextKey;                                       //@synthesize contextKey=_contextKey - In the implementation block
@property (assign,nonatomic,__weak) NSThread * contextKeyRegisteringThread;              //@synthesize contextKeyRegisteringThread=_contextKeyRegisteringThread - In the implementation block
+(void)updateContextKey:(id)arg1 forThread:(id)arg2 ;
+(id)_currentThread;
+(id)contextKeyForCurrentThread;
+(void)registerDirectMessageContextProviderClass:(Class)arg1 ;
+(void)registerGlobalContextForTesting:(id)arg1 ;
+(void)registerCurrentThreadForTesting:(id)arg1 ;
-(id)initWithContextKey:(id)arg1 ;
-(id)contextKey;
-(BOOL)_contextKeyHasBeenInvalidated;
-(void)setContextKey:(id)arg1 ;
-(NSThread *)contextKeyRegisteringThread;
-(void)setContextKeyRegisteringThread:(NSThread *)arg1 ;
-(id)init;
-(id<TFNDirectMessageContext>)context;
@end

