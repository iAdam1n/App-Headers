/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 12:10:18 PM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/EECA69E8-8DA6-473D-BDCA-9D4EFB22C6CE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class NSString;

@interface IGKVOObserver : NSObject {

	id _object;
	NSString* _keypath;

}

@property (nonatomic,readonly) id object;                       //@synthesize object=_object - In the implementation block
@property (nonatomic,readonly) NSString * keypath;              //@synthesize keypath=_keypath - In the implementation block
-(id)initWithObject:(id)arg1 keypath:(id)arg2 ;
-(id)observe:(/*^block*/id)arg1 ;
-(id)observeOnMain:(/*^block*/id)arg1 ;
-(id)observeWithOptions:(unsigned long long)arg1 block:(/*^block*/id)arg2 ;
-(id)observeWithOptions:(unsigned long long)arg1 block:(/*^block*/id)arg2 deliverOn:(id)arg3 ;
-(id)observeOnMainWithOptions:(unsigned long long)arg1 block:(/*^block*/id)arg2 ;
-(NSString *)keypath;
-(id)observe:(/*^block*/id)arg1 deliverOn:(id)arg2 ;
-(id)object;
@end

