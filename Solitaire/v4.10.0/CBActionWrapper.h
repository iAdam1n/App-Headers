/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:42:14 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/2E0DF6B4-8C57-4F66-9862-2B2C129D4027/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface CBActionWrapper : NSObject {

	/*^block*/id _callback;

}

@property (nonatomic,copy) id callback;              //@synthesize callback=_callback - In the implementation block
+(id)actionWrapperWithCallback:(/*^block*/id)arg1 ;
-(id)initWithCallback:(/*^block*/id)arg1 ;
-(id)init;
-(void)action:(id)arg1 ;
-(id)callback;
-(void)setCallback:(id)arg1 ;
@end
