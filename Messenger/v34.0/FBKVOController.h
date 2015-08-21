/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:12 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class NSMapTable;

@interface FBKVOController : NSObject {

	NSMapTable* _objectInfosMap;
	int _lock;
	id _observer;

}

@property (__weak,readonly) id observer;              //@synthesize observer=_observer - In the implementation block
+(id)controllerWithObserver:(id)arg1 ;
-(id)initWithObserver:(id)arg1 retainObserved:(BOOL)arg2 ;
-(void)unobserveAll;
-(void)_observe:(id)arg1 info:(id)arg2 ;
-(void)_unobserve:(id)arg1 info:(id)arg2 ;
-(void)_unobserve:(id)arg1 ;
-(void)_unobserveAll;
-(void)observe:(id)arg1 keyPath:(id)arg2 options:(unsigned long long)arg3 block:(/*^block*/id)arg4 ;
-(void)observe:(id)arg1 keyPath:(id)arg2 options:(unsigned long long)arg3 action:(SEL)arg4 ;
-(void)observe:(id)arg1 keyPath:(id)arg2 options:(unsigned long long)arg3 context:(void*)arg4 ;
-(void)unobserve:(id)arg1 keyPath:(id)arg2 ;
-(void)unobserve:(id)arg1 ;
-(void)dealloc;
-(id)debugDescription;
-(id)observer;
-(id)initWithObserver:(id)arg1 ;
@end

