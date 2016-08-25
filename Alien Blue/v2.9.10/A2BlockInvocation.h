/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:41:46 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/91D74E3C-0E85-4CEF-8E44-3072C9AFF7E4/AlienBlue.app/AlienBlue
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
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
-(NSMethodSignature *)methodSignature;
-(id)block;
-(id)initWithBlock:(id)arg1 ;
@end

