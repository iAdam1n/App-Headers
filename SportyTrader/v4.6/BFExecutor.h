/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:49:24 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/FACE73A7-54D9-4209-946C-91D556037309/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@interface BFExecutor : NSObject {

	/*^block*/id _block;

}

@property (copy) id block;              //@synthesize block=_block - In the implementation block
+(id)mainThreadExecutor;
+(id)executorWithBlock:(/*^block*/id)arg1 ;
+(id)defaultExecutor;
+(id)immediateExecutor;
+(id)executorWithDispatchQueue:(id)arg1 ;
+(id)executorWithOperationQueue:(id)arg1 ;
-(id)initWithBlock:(/*^block*/id)arg1 ;
-(void)execute:(/*^block*/id)arg1 ;
-(id)block;
-(void)setBlock:(id)arg1 ;
@end

