/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:06:47 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/ECBB6493-3CD3-4031-8AE5-B625F29152BF/Tweetbot.app/Tweetbot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@interface PTHCAAnimationDelegate : NSObject {

	/*^block*/id _startBlock;
	/*^block*/id _stopBlock;

}

@property (nonatomic,copy) id startBlock;              //@synthesize startBlock=_startBlock - In the implementation block
@property (nonatomic,copy) id stopBlock;               //@synthesize stopBlock=_stopBlock - In the implementation block
+(id)delegateWithStartBlock:(/*^block*/id)arg1 stopBlock:(/*^block*/id)arg2 ;
-(void)setStopBlock:(id)arg1 ;
-(id)stopBlock;
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(void)animationDidStart:(id)arg1 ;
-(id)startBlock;
-(void)setStartBlock:(id)arg1 ;
@end
