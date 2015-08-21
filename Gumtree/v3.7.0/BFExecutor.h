/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:27:58 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/21F2B006-1C28-48A8-85CE-538D78391B66/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


#import <Gumtree/Gumtree-Structs.h>
@interface BFExecutor : NSObject {

	/*^block*/id _block;

}

@property (nonatomic,copy) id block;              //@synthesize block=_block - In the implementation block
+(id)mainThreadExecutor;
+(id)executorWithBlock:(/*^block*/id)arg1 ;
+(id)defaultExecutor;
+(id)immediateExecutor;
+(id)executorWithDispatchQueue:(dispatch_queue_sRef)arg1 ;
+(id)executorWithOperationQueue:(id)arg1 ;
-(id)initWithBlock:(/*^block*/id)arg1 ;
-(void)execute:(/*^block*/id)arg1 ;
-(id)block;
-(void)setBlock:(id)arg1 ;
@end
