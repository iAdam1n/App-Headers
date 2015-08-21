/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 12:10:18 PM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/EECA69E8-8DA6-473D-BDCA-9D4EFB22C6CE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class NSString;

@interface IGKVOHandle : NSObject {

	BOOL _stoppedObserving;
	/*^block*/id _block;
	id _object;
	NSString* _keyPath;

}

@property (nonatomic,copy) id block;                        //@synthesize block=_block - In the implementation block
@property (assign,nonatomic,__weak) id object;              //@synthesize object=_object - In the implementation block
@property (nonatomic,copy) NSString * keyPath;              //@synthesize keyPath=_keyPath - In the implementation block
-(id)initWithBlock:(/*^block*/id)arg1 object:(id)arg2 keyPath:(id)arg3 ;
-(void)dealloc;
-(NSString *)keyPath;
-(void)setKeyPath:(NSString *)arg1 ;
-(id)object;
-(void)setObject:(id)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)block;
-(void)setBlock:(id)arg1 ;
-(void)stopObserving;
@end

