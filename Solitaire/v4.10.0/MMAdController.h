/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:42:13 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/2E0DF6B4-8C57-4F66-9862-2B2C129D4027/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NSObject;
@interface MMAdController : NSObject {

	BOOL _transparent;
	BOOL _enhancedAdControlEnabled;
	id<NSObject> _eventForwarder;

}

@property (assign,nonatomic,__weak) id<NSObject> eventForwarder;              //@synthesize eventForwarder=_eventForwarder - In the implementation block
@property (assign,nonatomic) BOOL transparent;                                //@synthesize transparent=_transparent - In the implementation block
@property (assign,nonatomic) BOOL enhancedAdControlEnabled;                   //@synthesize enhancedAdControlEnabled=_enhancedAdControlEnabled - In the implementation block
+(void)registerController:(Class)arg1 priority:(long long)arg2 ;
+(BOOL)canHandleContent:(id)arg1 ;
+(void)unregisterController:(Class)arg1 ;
+(id)registry;
-(void)setEnhancedAdControlEnabled:(BOOL)arg1 ;
-(void)setEventForwarder:(id<NSObject>)arg1 ;
-(id)initWithContent:(id)arg1 eventForwarder:(id)arg2 ;
-(id<NSObject>)eventForwarder;
-(long long)contentIsValid:(double)arg1 ;
-(void)prepareContent;
-(BOOL)enhancedAdControlEnabled;
-(void)setTransparent:(BOOL)arg1 ;
-(BOOL)transparent;
@end
