/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:41:46 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/91D74E3C-0E85-4CEF-8E44-3072C9AFF7E4/AlienBlue.app/AlienBlue
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AlienBlue/AlienBlue-Structs.h>
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
-(void)execute:(/*^block*/id)arg1 ;
-(id)block;
-(void)setBlock:(id)arg1 ;
-(id)initWithBlock:(/*^block*/id)arg1 ;
@end

