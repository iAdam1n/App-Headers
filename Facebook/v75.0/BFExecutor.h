/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:28 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface BFExecutor : NSObject {

	/*^block*/id _block;

}

@property (nonatomic,copy) id block;              //@synthesize block=_block - In the implementation block
+(id)mainThreadExecutor;
+(id)executorWithDispatchQueue:(id)arg1 ;
+(id)defaultExecutor;
+(id)immediateExecutor;
+(id)executorWithBlock:(/*^block*/id)arg1 ;
+(id)executorWithOperationQueue:(id)arg1 ;
-(void)execute:(/*^block*/id)arg1 ;
-(id)initWithBlock:(/*^block*/id)arg1 ;
-(void)setBlock:(id)arg1 ;
-(id)block;
@end
