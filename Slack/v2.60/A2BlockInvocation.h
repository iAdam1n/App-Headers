/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 13, 2015 at 2:24:42 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/8DFB78BE-38F8-46CD-A2D2-C1EE6F510A67/Slack.app/Slack
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class NSMethodSignature;

@interface A2BlockInvocation : NSObject {

	NSMethodSignature* _methodSignature;
	id _block;
	NSMethodSignature* _blockSignature;

}

@property (nonatomic,readonly) NSMethodSignature * methodSignature;              //@synthesize methodSignature=_methodSignature - In the implementation block
@property (nonatomic,copy,readonly) id block;                                    //@synthesize block=_block - In the implementation block
@property (nonatomic,readonly) NSMethodSignature * blockSignature;               //@synthesize blockSignature=_blockSignature - In the implementation block
+(id)typeSignatureForBlock:(id)arg1 ;
+(id)methodSignatureForBlockSignature:(id)arg1 ;
+(BOOL)isSignature:(id)arg1 compatibleWithSignature:(id)arg2 ;
+(id)methodSignatureForBlock:(id)arg1 ;
-(id)initWithBlock:(id)arg1 methodSignature:(id)arg2 blockSignature:(id)arg3 ;
-(NSMethodSignature *)blockSignature;
-(BOOL)invokeWithInvocation:(id)arg1 returnValue:(out id*)arg2 setOnInvocation:(BOOL)arg3 ;
-(id)initWithBlock:(id)arg1 methodSignature:(id)arg2 ;
-(void)invokeWithInvocation:(id)arg1 ;
-(BOOL)invokeWithInvocation:(id)arg1 returnValue:(out id*)arg2 ;
-(id)block;
-(id)initWithBlock:(id)arg1 ;
-(NSMethodSignature *)methodSignature;
@end
